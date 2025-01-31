const std = @import("std");

const parseOnnxStringStringEntryList = @import("OnnxStringStringEntry.zig").parseOnnxStringStringEntryList;
const parseOnnxAttributeList = @import("OnnxAttribute.zig").parseOnnxAttributeList;
const fromCString = @import("util.zig").fromCString;
const OnnxAttribute = @import("OnnxAttribute.zig").OnnxAttribute;
const OnnxOperatorType = @import("OnnxOperatorType.zig").OnnxOperatorType;
const parseOnnxOperatorType = @import("OnnxOperatorType.zig").parseOnnxOperatorType;
const OnnxStringStringEntry = @import("OnnxStringStringEntry.zig").OnnxStringStringEntry;

pub const OnnxNode = struct {
    input: [][]const u8,
    output: [][]const u8,
    name: []const u8,
    op_type: OnnxOperatorType,
    domain: []const u8,
    overload: []const u8,
    attribute: []OnnxAttribute,
    doc_string: []const u8,
    metadata_props: []OnnxStringStringEntry,
};

pub fn parseOnnxNodeList(
    allocator: anytype,
    value: anytype,
    len: usize,
) !std.ArrayList(OnnxNode) {
    std.log.debug(
        "Attempting to parse a OnnxNode list of len '{}'",
        .{len},
    );
    var list = std.ArrayList(OnnxNode).init(allocator);
    for (0..len) |i| {
        const item = (value + i).*.*;

        var input = std.ArrayList([]const u8).init(allocator);
        for (0..item.n_input) |j| {
            const cstring = (item.input + j).*;
            const string = try fromCString(allocator, cstring);
            std.log.debug("Read input '{s}'", .{string});
            try input.append(string);
        }

        var output = std.ArrayList([]const u8).init(allocator);
        for (0..item.n_output) |j| {
            const cstring = (item.output + j).*;
            const string = try fromCString(allocator, cstring);
            std.log.debug("Read output '{s}'", .{string});
            try output.append(string);
        }

        const name = try fromCString(allocator, item.name);
        std.log.debug("Read name '{s}'", .{name});

        const string = try fromCString(allocator, item.op_type);
        const op_type = try parseOnnxOperatorType(string);
        allocator.free(string);
        std.log.debug("Read operator '{s}'", .{@tagName(op_type)});

        const domain = try fromCString(allocator, item.domain);
        std.log.debug("Read domain '{s}'", .{domain});

        const overload = try fromCString(allocator, item.overload);
        std.log.debug("Read overload '{s}'", .{overload});

        var attribute = try parseOnnxAttributeList(
            allocator,
            item.attribute,
            item.n_attribute,
        );

        const doc_string = try fromCString(allocator, item.doc_string);
        std.log.debug("Read doc string '{s}'", .{doc_string});

        var metadata_props = try parseOnnxStringStringEntryList(
            allocator,
            item.metadata_props,
            item.n_metadata_props,
        );

        try list.append(.{
            .input = try input.toOwnedSlice(),
            .output = try output.toOwnedSlice(),
            .name = name,
            .op_type = op_type,
            .domain = domain,
            .overload = overload,
            .attribute = try attribute.toOwnedSlice(),
            .doc_string = doc_string,
            .metadata_props = try metadata_props.toOwnedSlice(),
        });
    }

    return list;
}
