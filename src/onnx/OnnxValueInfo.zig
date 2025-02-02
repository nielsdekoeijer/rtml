const std = @import("std");

const OnnxAttributeType = @import("OnnxAttributeType.zig").OnnxAttributeType;
const OnnxTensorShape = @import("OnnxTensorShape.zig").OnnxTensorShape;
const parseOnnxTensorShape = @import("OnnxTensorShape.zig").parseOnnxTensorShape;
const OnnxStandardType = @import("OnnxStandardType.zig").OnnxStandardType;
const OnnxStandardUnion = @import("OnnxStandardUnion.zig").OnnxStandardUnion;
const OnnxStringStringEntry = @import("OnnxStringStringEntry.zig").OnnxStringStringEntry;
const parseOnnxStringStringEntryList = @import("OnnxStringStringEntry.zig").parseOnnxStringStringEntryList;
const fromCString = @import("util.zig").fromCString;

pub const OnnxValueInfo = struct {
    name: []const u8,
    type: OnnxStandardUnion,
    doc_string: []const u8,
    metadata_props: []OnnxStringStringEntry,
};

pub fn parseOnnxValueInfoList(
    allocator: anytype,
    value: anytype,
    len: usize,
) !std.ArrayList(OnnxValueInfo) {
    std.log.debug(
        "Attempting to parse a OnnxValueInfo list of len '{}'",
        .{len},
    );
    var list = std.ArrayList(OnnxValueInfo).init(allocator);
    for (0..len) |i| {
        const item = (value + i).*.*;

        try list.append(try parseOnnxValueInfo(allocator, item));
    }

    return list;
}

pub fn parseOnnxValueInfo(
    allocator: anytype,
    value: anytype,
) !OnnxValueInfo {
    std.log.debug(
        "Attempting to parse a OnnxValueInfo",
        .{},
    );

    const name = try fromCString(allocator, value.name);
    std.log.debug("Read name: '{s}'", .{name});

    const standard = value.type.*;
    const standard_type = @as(OnnxStandardType, @enumFromInt(standard.value_case));
    std.log.debug("Read type: '{s}'", .{@tagName(standard_type)});
    const @"type" = switch (standard_type) {
        OnnxStandardType.TENSOR_TYPE => blk: {
            const inner = standard.unnamed_0.tensor_type.*;
            const elem_type = @as(OnnxAttributeType, @enumFromInt(inner.elem_type));
            const shape = try parseOnnxTensorShape(allocator, inner.shape);
            break :blk @unionInit(OnnxStandardUnion, "TENSOR_TYPE", .{
                .elem_type = elem_type,
                .shape = shape,
            });
        },
        else => {
            std.log.err("No support for type: '{s}'", .{@tagName(standard_type)});
            unreachable;
        },
    };

    const doc_string = try fromCString(allocator, value.doc_string);
    std.log.debug("Read doc string: '{s}'", .{doc_string});

    var metadata_props = try parseOnnxStringStringEntryList(
        allocator,
        value.metadata_props,
        value.n_metadata_props,
    );

    return .{
        .name = name,
        .type = @"type",
        .doc_string = doc_string,
        .metadata_props = try metadata_props.toOwnedSlice(),
    };
}
