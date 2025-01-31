const std = @import("std");

const fromCString = @import("util.zig").fromCString;

pub const OnnxStringStringEntry = struct {
    key: []const u8,
    value: []const u8,
};

pub fn parseOnnxStringStringEntryList(
    allocator: anytype,
    value: anytype,
    len: usize,
) !std.ArrayList(OnnxStringStringEntry) {
    var list = std.ArrayList(OnnxStringStringEntry).init(allocator);
    std.log.debug(
        "Attempting to parse a OnnxStringStringEntry list of len '{}'",
        .{len},
    );
    for (0..len) |i| {
        const item = (value + i).*.*;
        const key = try fromCString(allocator, item.key);
        std.log.debug("Read key '{s}'", .{key});
        const _value = try fromCString(allocator, item.value);
        std.log.debug("Read value '{s}'", .{_value});
        try list.append(.{
            .key = key,
            .value = _value,
        });
    }

    return list;
}
