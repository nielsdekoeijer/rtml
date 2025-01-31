const std = @import("std");
const OnnxStringStringEntry = @import("OnnxStringStringEntry.zig").OnnxStringStringEntry;
const parseOnnxStringStringEntryList = @import("OnnxStringStringEntry.zig").parseOnnxStringStringEntryList;
const fromCString = @import("util.zig").fromCString;

pub const OnnxTensorAnnotation = struct {
    tensor_name: []const u8,
    quant_parameter_tensor_names: []OnnxStringStringEntry,
};

pub fn parseOnnxTensorAnnotationList(
    allocator: anytype,
    value: anytype,
    len: usize,
) !std.ArrayList(OnnxTensorAnnotation) {
    std.log.debug(
        "Attempting to parse a OnnxTensorAnnotation list of len '{}'",
        .{len},
    );
    var list = std.ArrayList(OnnxTensorAnnotation).init(allocator);
    for (0..len) |i| {
        const item = (value + i).*.*;

        try list.append(try parseOnnxTensorAnnotation(allocator, item));
    }

    return list;
}

pub fn parseOnnxTensorAnnotation(
    allocator: anytype,
    value: anytype,
) !OnnxTensorAnnotation {
    std.log.debug(
        "Attempting to parse a OnnxTensorAnnotation",
        .{},
    );

    const tensor_name = try fromCString(allocator, value.tensor_name);

    var quant_parameter_tensor_names = try parseOnnxStringStringEntryList(
        allocator,
        value.quant_parameter_tensor_names,
        value.n_quant_parameter_tensor_names,
    );

    return .{
        .tensor_name = tensor_name,
        .quant_parameter_tensor_names = try quant_parameter_tensor_names.toOwnedSlice(),
    };
}
