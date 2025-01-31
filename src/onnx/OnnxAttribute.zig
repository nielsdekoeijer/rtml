const std = @import("std");

const OnnxTensor = @import("OnnxTensor.zig").OnnxTensor;
const parseOnnxTensor = @import("OnnxTensor.zig").parseOnnxTensor;
const OnnxAttributeType = @import("OnnxAttributeType.zig").OnnxAttributeType;
const OnnxAttributeUnion = @import("OnnxAttributeUnion.zig").OnnxAttributeUnion;
const fromCString = @import("util.zig").fromCString;

pub const OnnxAttribute = struct {
    name: []const u8,
    ref_attr_name: []const u8,
    doc_string: []const u8,
    type: OnnxAttributeType,
    attribute: OnnxAttributeUnion,
};

pub fn parseOnnxAttributeList(
    allocator: anytype,
    value: anytype,
    len: usize,
) !std.ArrayList(OnnxAttribute) {
    var list = std.ArrayList(OnnxAttribute).init(allocator);
    std.log.debug(
        "Attempting to parse a OnnxAttribute list of len '{}'",
        .{len},
    );
    for (0..len) |i| {
        const item = (value + i).*.*;

        const name = try fromCString(allocator, item.name);
        std.log.debug("Read name '{s}'", .{name});

        const ref_attr_name = try fromCString(allocator, item.ref_attr_name);
        std.log.debug("Read ref attr name '{s}'", .{ref_attr_name});

        const doc_string = try fromCString(allocator, item.doc_string);
        std.log.debug("Read doc string '{s}'", .{doc_string});

        const @"type" = @as(OnnxAttributeType, @enumFromInt(item.type));
        std.log.debug("Read attribute type '{s}'", .{@tagName(@"type")});

        const attribute = switch (@"type") {
            OnnxAttributeType.FLOAT => blk: {
                const inner = item.f;
                std.log.debug("Parsed as f32 {}", .{inner});
                break :blk @unionInit(
                    OnnxAttributeUnion,
                    "FLOAT",
                    inner,
                );
            },
            OnnxAttributeType.INT => blk: {
                const inner: i64 = item.i;
                std.log.debug("Parsed as i64 {}", .{inner});
                break :blk @unionInit(
                    OnnxAttributeUnion,
                    "INT",
                    inner,
                );
            },
            OnnxAttributeType.STRING => blk: {
                const inner = try allocator.alloc(u8, item.s.len);
                for (0..item.s.len) |j| {
                    inner[j] = item.s.data[j];
                }
                std.log.debug("Parsed as string {s}", .{inner});
                break :blk @unionInit(
                    OnnxAttributeUnion,
                    "STRING",
                    inner,
                );
            },
            OnnxAttributeType.TENSOR => blk: {
                const inner = try parseOnnxTensor(allocator, item.t.*);
                break :blk @unionInit(
                    OnnxAttributeUnion,
                    "TENSOR",
                    inner,
                );
            },
            OnnxAttributeType.FLOATS => blk: {
                const inner = try allocator.alloc(f32, item.n_floats);
                for (0..len) |j| {
                    inner[j] = item.floats[j];
                }
                std.log.debug("Parsed as []f32 {any}", .{inner});
                break :blk @unionInit(
                    OnnxAttributeUnion,
                    "FLOATS",
                    inner,
                );
            },
            OnnxAttributeType.INTS => blk: {
                const inner = try allocator.alloc(i64, item.n_ints);
                for (0..item.n_ints) |j| {
                    inner[j] = (item.ints + j).*;
                }
                std.log.debug("Parsed as []i32 {any}", .{inner});
                break :blk @unionInit(
                    OnnxAttributeUnion,
                    "INTS",
                    inner,
                );
            },
            OnnxAttributeType.STRINGS => blk: {
                const inner = try allocator.alloc([]const u8, item.n_strings);
                for (0..item.n_strings) |j| {
                    const innerString = try allocator.alloc(u8, item.strings[j].len);
                    for (0..item.s.len) |k| {
                        innerString[k] = item.strings[j].data[k];
                    }
                }
                std.log.debug("Parsed as []string {any}", .{inner});
                break :blk @unionInit(
                    OnnxAttributeUnion,
                    "STRINGS",
                    inner,
                );
            },
            else => {
                unreachable;
            },
        };

        try list.append(.{
            .name = name,
            .ref_attr_name = ref_attr_name,
            .doc_string = doc_string,
            .type = @"type",
            .attribute = attribute,
        });
    }

    return list;
}
