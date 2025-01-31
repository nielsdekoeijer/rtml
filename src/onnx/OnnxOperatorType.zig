const std = @import("std");

pub const OnnxOperatorType = enum(i32) {
    Add,
    Conv,
    Relu,
    MaxPool,
    Reshape,
    MatMul,
    // Constant,
    // Squeeze,
    // Unsqueeze,
    // AveragePool,
    // Sigmoid,
    // Mul,
    // Sub,
    // Softmax,
    // Identity,
    // Slice,
    // Gather,
    // Concat,
    // BatchNormalization,
    // Transpose,
    // InstanceNormalization,
    // Shape,
    // LSTM,
    // Tanh,
    // Split,
};

pub fn parseOnnxOperatorType(string: []const u8) !OnnxOperatorType {
    inline for (std.meta.fields(OnnxOperatorType)) |field| {
        if (std.mem.eql(u8, string, field.name)) {
            return @field(OnnxOperatorType, field.name);
        }
    }

    std.log.err("Unsupported operator with name '{s}'", .{string});
    return error.UnsupportedOperator;
}
