const std = @import("std");

const OnnxNode = @import("OnnxNode.zig").OnnxNode;
const parseOnnxNodeList = @import("OnnxNode.zig").parseOnnxNodeList;
const OnnxTensor = @import("OnnxTensor.zig").OnnxTensor;
const parseOnnxTensorList = @import("OnnxTensor.zig").parseOnnxTensorList;
const OnnxSparseTensor = @import("OnnxSparseTensor.zig").OnnxSparseTensor;
const parseOnnxSparseTensorList = @import("OnnxSparseTensor.zig").parseOnnxSparseTensorList;
const OnnxValueInfo = @import("OnnxValueInfo.zig").OnnxValueInfo;
const parseOnnxValueInfoList = @import("OnnxValueInfo.zig").parseOnnxValueInfoList;
const OnnxTensorAnnotation = @import("OnnxTensorAnnotation.zig").OnnxTensorAnnotation;
const parseOnnxTensorAnnotationList = @import("OnnxTensorAnnotation.zig").parseOnnxTensorAnnotationList;
const OnnxStringStringEntry = @import("OnnxStringStringEntry.zig").OnnxStringStringEntry;
const parseOnnxStringStringEntryList = @import("OnnxStringStringEntry.zig").parseOnnxStringStringEntryList;

const fromCString = @import("util.zig").fromCString;

pub const OnnxGraph = struct {
    node: []OnnxNode,
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

pub fn parseOnnxGraph(
    allocator: anytype,
    value_ptr: anytype,
) !OnnxGraph {
    const value = value_ptr.*;

    std.log.debug("Attempting to parse OnnxGraph", .{});

    var node = try parseOnnxNodeList(allocator, value.node, value.n_node);

    const name = try fromCString(allocator, value.name);
    std.log.debug("Read name: '{s}'", .{name});

    var initializer = try parseOnnxTensorList(
        allocator,
        value.initializer,
        value.n_initializer,
    );

    var sparse_initializer = try parseOnnxSparseTensorList(
        allocator,
        value.sparse_initializer,
        value.n_sparse_initializer,
    );

    const doc_string = try fromCString(allocator, value.doc_string);
    std.log.debug("Read doc string: '{s}'", .{doc_string});

    var input = try parseOnnxValueInfoList(
        allocator,
        value.input,
        value.n_input,
    );

    var output = try parseOnnxValueInfoList(
        allocator,
        value.output,
        value.n_output,
    );

    var value_info = try parseOnnxValueInfoList(
        allocator,
        value.value_info,
        value.n_value_info,
    );

    // quantization_annotation
    var quantization_annotation = try parseOnnxTensorAnnotationList(
        allocator,
        value.quantization_annotation,
        value.n_quantization_annotation,
    );

    var metadata_props = try parseOnnxStringStringEntryList(
        allocator,
        value.metadata_props,
        value.n_metadata_props,
    );

    return .{
        .node = try node.toOwnedSlice(),
        .name = name,
        .initializer = try initializer.toOwnedSlice(),
        .sparse_initializer = try sparse_initializer.toOwnedSlice(),
        .doc_string = doc_string,
        .input = try input.toOwnedSlice(),
        .output = try output.toOwnedSlice(),
        .value_info = try value_info.toOwnedSlice(),
        .quantization_annotation = try quantization_annotation.toOwnedSlice(),
        .metadata_props = try metadata_props.toOwnedSlice(),
    };
}
