const std = @import("std");

const OnnxAttributeType = @import("OnnxAttributeType.zig").OnnxAttributeType;
const OnnxTensor = @import("OnnxTensor.zig").OnnxTensor;
const OnnxGraph = @import("OnnxGraph.zig").OnnxGraph;
const OnnxSparseTensor = @import("OnnxSparseTensor.zig").OnnxSparseTensor;
const OnnxStandardType = @import("OnnxStandardType.zig").OnnxStandardType;

pub const OnnxAttributeUnion = union(OnnxAttributeType) {
    UNDEFINED: void,
    FLOAT: f32,
    INT: i64,
    STRING: []const u8,
    TENSOR: OnnxTensor,
    GRAPH: OnnxGraph,
    SPARSE_TENSOR: OnnxSparseTensor,
    TYPE_PROTO: OnnxStandardType,
    FLOATS: []f32,
    INTS: []i64,
    STRINGS: [][]const u8,
    TENSORS: []OnnxTensor,
    GRAPHS: []OnnxGraph,
    SPARSE_TENSORS: []OnnxSparseTensor,
    TYPE_PROTOS: []OnnxStandardType,
};
