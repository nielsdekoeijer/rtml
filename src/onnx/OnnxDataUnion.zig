const std = @import("std");

const OnnxDataType = @import("OnnxDataType.zig").OnnxDataType;
const OnnxTensor = @import("OnnxTensor.zig").OnnxTensor;
const OnnxGraph = @import("OnnxGraph.zig").OnnxGraph;
const OnnxSparseTensor = @import("OnnxSparseTensor.zig").OnnxSparseTensor;

pub const OnnxDataUnion = union(OnnxDataType) {
    UNDEFINED: void,
    FLOAT: []f32,
    UINT8: u8,
    INT8: i8,
    UINT16: u16,
    INT16: i16,
    INT32: i32,
    INT64: []i64,
    STRING: []const u8,
    BOOL: bool,
    FLOAT16: void,
    DOUBLE: f64,
    UINT32: u32,
    UINT64: u64,
    COMPLEX64: void,
    COMPLEX128: void,
    BFLOAT16: void,
    FLOAT8E4M3FN: void,
    FLOAT8E4M3FNUZ: void,
    FLOAT8E5M2: void,
    FLOAT8E5M2FNUZ: void,
    UINT4: void,
    INT4: void,
    FLOAT4E2M1: void,
};
