const std = @import("std");

// TODO: refactor this, its a bit ugly

const fromCString = @import("util.zig").fromCString;
const OnnxDimensionType = @import("OnnxDimensionType.zig").OnnxDimensionType;

pub const OnnxTensorShape = []i64;

pub fn parseOnnxTensorShape(
    allocator: anytype,
    value: anytype,
) !OnnxTensorShape {
    const len = value.*.n_dim;

    std.log.debug(
        "Attempting to parse a OnnxTensorShape with len '{}'",
        .{len},
    );

    var list = std.ArrayList(i64).init(allocator);

    for (0..len) |i| {
        const item = (value.*.dim + i).*;
        const dim_type = @as(OnnxDimensionType, @enumFromInt(item.*.value_case));
        try list.append(switch (dim_type) {
            OnnxDimensionType.DIM_VALUE => blk: {
                break :blk item.*.unnamed_0.dim_value;
            },
            OnnxDimensionType.DIM_PARAM => {
                std.log.err("No support for dynamic dimensions", .{});
                unreachable;
            },
            OnnxDimensionType.NOT_SET => {
                std.log.err("Dimension not set", .{});
                unreachable;
            },
        });
    }

    const slice = try list.toOwnedSlice();
    std.log.debug(
        "Read shape: '{any}'",
        .{slice},
    );

    return slice;
}
