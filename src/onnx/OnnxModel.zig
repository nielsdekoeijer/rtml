const std = @import("std");

const OnnxOperatorSetId = @import("OnnxOperatorSetId.zig").OnnxOperatorSetId;
const parseOnnxOperatorSetIdList = @import("OnnxOperatorSetId.zig").parseOnnxOperatorSetIdList;
const OnnxGraph = @import("OnnxGraph.zig").OnnxGraph;
const parseOnnxGraph = @import("OnnxGraph.zig").parseOnnxGraph;
const OnnxStringStringEntry = @import("OnnxStringStringEntry.zig").OnnxStringStringEntry;
const parseOnnxStringStringEntryList = @import("OnnxStringStringEntry.zig").parseOnnxStringStringEntryList;
const OnnxTrainingInfo = @import("OnnxTrainingInfo.zig").OnnxTrainingInfo;
const OnnxFunction = @import("OnnxFunction.zig").OnnxFunction;
const OnnxProto = @import("OnnxProto.zig").OnnxProto;
const fromCString = @import("util.zig").fromCString;

pub const OnnxModel = struct {
    ir_version: i64,
    opset_import: []OnnxOperatorSetId,
    producer_name: []const u8,
    producer_version: []const u8,
    domain: []const u8,
    model_version: i64,
    doc_string: []const u8,
    graph: OnnxGraph,
    metadata_props: []OnnxStringStringEntry,
    training_info: []OnnxTrainingInfo,
    functions: []OnnxFunction,
};

pub fn parseOnnxModel(
    arena: *std.heap.ArenaAllocator,
    proto: OnnxProto,
) !OnnxModel {
    const allocator = arena.allocator();

    std.log.debug("Attempting to parse onnx to internal representation", .{});
    const model = proto.model_ptr.*;

    const ir_version = model.ir_version;
    std.log.debug("Read ir version: '{}'", .{ir_version});

    var opset_import = try parseOnnxOperatorSetIdList(
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

    var metadata_props = try parseOnnxStringStringEntryList(
        allocator,
        model.metadata_props,
        model.n_metadata_props,
    );

    var training_info = std.ArrayList(OnnxTrainingInfo).init(allocator);
    // const training_info = model.training_info;
    // std.log.debug("Read training_info: '{}'", .{training_info});

    var functions = std.ArrayList(OnnxFunction).init(allocator);
    // const functions = model.functions;
    // std.log.debug("Read functions: '{}'", .{functions});

    return OnnxModel{
        .ir_version = ir_version,
        .opset_import = try opset_import.toOwnedSlice(),
        .producer_name = producer_name,
        .producer_version = producer_version,
        .domain = domain,
        .model_version = model_version,
        .doc_string = doc_string,
        .graph = graph,
        .metadata_props = try metadata_props.toOwnedSlice(),
        .training_info = try training_info.toOwnedSlice(),
        .functions = try functions.toOwnedSlice(),
    };
}
