const onnx = @cImport(@cInclude("onnx.proto3.pb-c.h"));
const std = @import("std");

const OnnxModel = @import("OnnxModel.zig").OnnxModel;

pub const OnnxProto = struct {
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

    pub fn deinit(self: *const OnnxProto) void {
        onnx.onnx__model_proto__free_unpacked(self.model_ptr, null);
    }
};
