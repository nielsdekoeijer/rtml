const std = @import("std");
const onnx = @cImport(@cInclude("onnx.proto3.pb-c.h"));

pub fn main() !void {
    const allocator = std.heap.page_allocator;

    const buffer = try readFileBuffer(allocator, "models/mnist-8.onnx");
    defer allocator.free(buffer);

    const model = OnnxProto.init(buffer);
    defer model.deinit();

    var arena = std.heap.ArenaAllocator.init(allocator);
    defer arena.deinit();

    _ = try model.parse(&arena);
}

// phase 0: reading onnx from file
fn readFileBuffer(allocator: anytype, path: []const u8) ![]const u8 {
    // read file
    const file = try std.fs.cwd().openFile(path, .{});
    defer file.close();
    const file_size = try file.getEndPos();

    // load into buffer
    const buffer = try allocator.alloc(u8, file_size);
    _ = try file.readAll(buffer);

    return buffer;
}

fn fromCString(allocator: std.mem.Allocator, cstring: [*c]u8) ![]const u8 {
    const len = std.mem.len(cstring);
    const string = try allocator.alloc(u8, len);
    for (0..len) |i| {
        string[i] = cstring[i];
    }

    return string;
}

const OnnxProto = struct {
    model_ptr: *onnx.Onnx__ModelProto,

    pub fn init(buffer: []const u8) OnnxProto {
        return OnnxProto{
            .model_ptr = onnx.onnx__model_proto__unpack(
                null,
                buffer.len,
                buffer.ptr,
            ),
        };
    }

    pub fn parseOnnxStringStringEntryList(
        allocator: anytype,
        value: anytype,
        len: usize,
    ) !std.ArrayList(OnnxStringStringEntry) {
        var list = std.ArrayList(OnnxStringStringEntry).init(allocator);
        std.log.debug(
            "Attempting to parse a OnnxStringStringEntry list of len '{}'",
            .{len},
        );
        for (0..len) |i| {
            const item = (value + i).*.*;
            const key = try fromCString(allocator, item.key);
            std.log.debug("Read key '{s}'", .{key});
            const _value = try fromCString(allocator, item.value);
            std.log.debug("Read value '{s}'", .{_value});
            try list.append(.{
                .key = key,
                .value = _value,
            });
        }

        return list;
    }

    pub fn parseOnnxOperatorSetIdList(
        allocator: anytype,
        value: anytype,
        len: usize,
    ) !std.ArrayList(OnnxOperatorSetId) {
        var list = std.ArrayList(OnnxOperatorSetId).init(allocator);
        std.log.debug(
            "Attempting to parse a OnnxOperatorSetId list of len '{}'",
            .{len},
        );
        for (0..len) |i| {
            const item = (value + i).*.*;
            const domain = try fromCString(allocator, item.domain);
            std.log.debug("Read domain '{s}'", .{domain});
            const version = item.version;
            std.log.debug("Read version '{}'", .{version});
            try list.append(.{
                .domain = domain,
                .version = version,
            });
        }

        return list;
    }

    pub fn parseOnnxNodeList(
        allocator: anytype,
        value: anytype,
        len: usize,
    ) !std.ArrayList(OnnxNode) {
        std.log.debug(
            "Attempting to parse a OnnxNode list of len '{}'",
            .{len},
        );
        var list = std.ArrayList(OnnxNode).init(allocator);
        for (0..len) |i| {
            const item = (value + i).*.*;

            var input = std.ArrayList([]const u8).init(allocator);
            for (0..item.n_input) |j| {
                const cstring = (item.input + j).*;
                const string = try fromCString(allocator, cstring);
                std.log.debug("Read input '{s}'", .{string});
                try input.append(string);
            }

            var output = std.ArrayList([]const u8).init(allocator);
            for (0..item.n_output) |j| {
                const cstring = (item.output + j).*;
                const string = try fromCString(allocator, cstring);
                std.log.debug("Read output '{s}'", .{string});
                try output.append(string);
            }

            const name = try fromCString(allocator, item.name);
            std.log.debug("Read name '{s}'", .{name});

            const op_type = try fromCString(allocator, item.op_type);
            std.log.debug("Read op type '{s}'", .{op_type});

            const domain = try fromCString(allocator, item.domain);
            std.log.debug("Read domain '{s}'", .{domain});

            const overload = try fromCString(allocator, item.overload);
            std.log.debug("Read overload '{s}'", .{overload});

            // TODO
            // attributes

            const doc_string = try fromCString(allocator, item.doc_string);
            std.log.debug("Read doc string '{s}'", .{doc_string});

            const metadata_props = try parseOnnxStringStringEntryList(
                allocator,
                item.metadata_props,
                item.n_metadata_props,
            );

            try list.append(.{
                .input = input,
                .output = output,
                .name = name,
                .op_type = op_type,
                .domain = domain,
                .overload = overload,
                .attributes = undefined,
                .doc_string = doc_string,
                .metadata_props = metadata_props,
            });
        }

        return list;
    }

    pub fn parseOnnxGraph(
        allocator: anytype,
        value_ptr: anytype,
    ) !OnnxGraph {
        const value = value_ptr.*;

        std.log.debug("Attempting to parse OnnxGraph", .{});
        const node = try parseOnnxNodeList(allocator, value.node, value.n_node);
        _ = node;

        return undefined;
    }

    pub fn parse(self: *const OnnxProto, arena: *std.heap.ArenaAllocator) !OnnxModel {
        const allocator = arena.allocator();

        std.log.debug("Attempting to parse onnx to internal representation", .{});
        const model = self.model_ptr.*;

        const ir_version = model.ir_version;
        std.log.debug("Read ir version: '{}'", .{ir_version});

        const opset_import = try parseOnnxOperatorSetIdList(
            allocator,
            model.opset_import,
            model.n_opset_import,
        );

        const producer_name = try fromCString(allocator, model.producer_name);
        std.log.debug("Read producer name: '{s}'", .{producer_name});

        const producer_version = try fromCString(allocator, model.producer_version);
        std.log.debug("Read producer version: '{s}'", .{producer_version});

        const domain = try fromCString(allocator, model.domain);
        std.log.debug("Read domain: '{s}'", .{domain});

        const model_version = model.model_version;
        std.log.debug("Read model version: '{}'", .{model_version});

        const doc_string = try fromCString(allocator, model.doc_string);
        std.log.debug("Read doc string: '{s}'", .{doc_string});

        const graph = try parseOnnxGraph(allocator, model.graph);

        const metadata_props = try parseOnnxStringStringEntryList(
            allocator,
            model.metadata_props,
            model.n_metadata_props,
        );

        const training_info = std.ArrayList(OnnxTrainingInfo).init(allocator);
        // const training_info = model.training_info;
        // std.log.debug("Read training_info: '{}'", .{training_info});

        const functions = std.ArrayList(OnnxFunction).init(allocator);
        // const functions = model.functions;
        // std.log.debug("Read functions: '{}'", .{functions});

        return OnnxModel{
            .ir_version = ir_version,
            .opset_import = opset_import,
            .producer_name = producer_name,
            .producer_version = producer_version,
            .domain = domain,
            .model_version = model_version,
            .doc_string = doc_string,
            .graph = graph,
            .metadata_props = metadata_props,
            .training_info = training_info,
            .functions = functions,
        };
    }

    pub fn deinit(self: *const OnnxProto) void {
        onnx.onnx__model_proto__free_unpacked(self.model_ptr, null);
    }
};

// phase 1: define our internal representation of an onnx file
const OnnxModel = struct {
    ir_version: i64,
    opset_import: std.ArrayList(OnnxOperatorSetId),
    producer_name: []const u8,
    producer_version: []const u8,
    domain: []const u8,
    model_version: i64,
    doc_string: []const u8,
    graph: OnnxGraph,
    metadata_props: std.ArrayList(OnnxStringStringEntry),
    training_info: std.ArrayList(OnnxTrainingInfo),
    functions: std.ArrayList(OnnxFunction),
};

const OnnxOperatorSetId = struct {
    domain: []const u8,
    version: i64,
};

const OnnxStringStringEntry = struct {
    key: []const u8,
    value: []const u8,
};

const OnnxTrainingInfo = struct {
    initialization: OnnxGraph,
    algorithm: OnnxGraph,
    initialization_binding: []OnnxStringStringEntry,
    update_binding: []OnnxStringStringEntry,
};

const OnnxFunction = struct {
    name: []const u8,
    input: [][]const u8,
    output: [][]const u8,
    attribute: [][]const u8,
    attribute_proto: []OnnxAttribute,
    node: []OnnxNode,
    doc_string: []const u8,
    opset_import: []OnnxOperatorSetId,
    domain: []const u8,
    overload: []const u8,
    value_info: []OnnxValueInfo,
    metadata_props: []OnnxStringStringEntry,
};

const OnnxValueInfo = struct {
    name: []const u8,
    type: OnnxType,
    doc_string: []const u8,
    metadata_props: []OnnxStringStringEntry,
};

const OnnxAttributeType = enum(i64) {
    UNDEFINED = 0,
    FLOAT = 1,
    INT = 2,
    STRING = 3,
    TENSOR = 4,
    GRAPH = 5,
    SPARSE_TENSOR = 11,
    TYPE_PROTO = 13,
    FLOATS = 6,
    INTS = 7,
    STRINGS = 8,
    TENSORS = 9,
    GRAPHS = 10,
    SPARSE_TENSORS = 12,
    TYPE_PROTOS = 14,
};

const OnnxType = struct {
    // TODO
};

const OnnxAttributeUnion = union(OnnxAttributeType) {
    // TODO
    UNDEFINED: void,
    FLOAT: void,
    INT: void,
    STRING: void,
    TENSOR: void,
    GRAPH: void,
    SPARSE_TENSOR: void,
    TYPE_PROTO: void,
    FLOATS: void,
    INTS: void,
    STRINGS: void,
    TENSORS: void,
    GRAPHS: void,
    SPARSE_TENSORS: void,
    TYPE_PROTOS: void,
};

const OnnxAttribute = struct {
    name: []const u8,
    ref_attr_name: []const u8,
    doc_string: []const u8,
    type: OnnxAttributeType,
    attribute: OnnxAttributeUnion,
};

const OnnxDataType = enum(i32) {
    UNDEFINED = 0,
    FLOAT = 1,
    UINT8 = 2,
    INT8 = 3,
    UINT16 = 4,
    INT16 = 5,
    INT32 = 6,
    INT64 = 7,
    STRING = 8,
    BOOL = 9,
    FLOAT16 = 10,
    DOUBLE = 11,
    UINT32 = 12,
    UINT64 = 13,
    COMPLEX64 = 14,
    COMPLEX128 = 15,
    BFLOAT16 = 16,
    FLOAT8E4M3FN = 17,
    FLOAT8E4M3FNUZ = 18,
    FLOAT8E5M2 = 19,
    FLOAT8E5M2FNUZ = 20,
    UINT4 = 21,
    INT4 = 22,
    FLOAT4E2M1 = 23,
};

const OnnxSegment = struct {
    begin: i64,
    end: i64,
};

const OnnxDataLocation = enum(i32) {
    DEFAULT = 0,
    EXTERNAL = 1,
};

const OnnxTensor = struct {
    dims: []i64,
    data_type: i32,
    segment: OnnxSegment,
    data: void, // TODO
    name: []const u8,
    doc_string: []const u8,
    external_data: []OnnxStringStringEntry,
    data_location: OnnxDataLocation,
    metadata_props: []OnnxStringStringEntry,
};

const OnnxSparseTensor = struct {
    values: OnnxTensor,
    indices: OnnxTensor,
    dims: []i64,
};

const OnnxGraph = struct {
    node: std.ArrayList(OnnxNode),
    name: []const u8,
    initializer: []OnnxTensor,
    sparse_initializer: []OnnxSparseTensor,
    doc_string: []const u8,
    input: []OnnxValueInfo,
    output: []OnnxValueInfo,
    value_info: []OnnxValueInfo,
    quantization_annotation: []OnnxTensorAnnotation,
    metadata_props: []OnnxStringStringEntry,
};

const OnnxTensorAnnotation = struct {
    tensor_name: []const u8,
    quant_parameter_tensor_names: []OnnxStringStringEntry,
};

const OnnxNode = struct {
    input: std.ArrayList([]const u8),
    output: std.ArrayList([]const u8),
    name: []const u8,
    op_type: []const u8,
    domain: []const u8,
    overload: []const u8,
    attributes: std.ArrayList(OnnxAttribute),
    doc_string: []const u8,
    metadata_props: std.ArrayList(OnnxStringStringEntry),
};
