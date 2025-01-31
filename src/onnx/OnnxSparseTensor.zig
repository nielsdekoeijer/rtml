const std = @import("std");

const OnnxTensor = @import("OnnxTensor.zig").OnnxTensor;
const parseOnnxTensor = @import("OnnxTensor.zig").parseOnnxTensor;

pub const OnnxSparseTensor = struct {
    values: OnnxTensor,
    indices: OnnxTensor,
    dims: []i64,
};

pub fn parseOnnxSparseTensorList(
    allocator: anytype,
    value: anytype,
    len: usize,
) !std.ArrayList(OnnxSparseTensor) {
    std.log.debug(
        "Attempting to parse a OnnxSparseTensor list of len '{}'",
        .{len},
    );
    var list = std.ArrayList(OnnxSparseTensor).init(allocator);
    for (0..len) |i| {
        const item = (value + i).*.*;

        try list.append(try parseOnnxSparseTensor(allocator, item));
    }

    return list;
}

pub fn parseOnnxSparseTensor(
    allocator: anytype,
    value: anytype,
) !OnnxSparseTensor {
    std.log.debug(
        "Attempting to parse a OnnxSparseTensor",
        .{},
    );

    const values = try parseOnnxTensor(allocator, value.values.*);

    const indices = try parseOnnxTensor(allocator, value.indices.*);

    const dims = try allocator.alloc(i64, value.n_dims);
    for (0..value.n_dims) |j| {
        dims[j] = (value.dims + j).*;
    }
    std.log.debug("Read dims '{any}'", .{dims});

    return .{
        .values = values,
        .indices = indices,
        .dims = dims,
    };
}
