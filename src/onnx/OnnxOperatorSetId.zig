const std = @import("std");

const fromCString = @import("util.zig").fromCString;

pub const OnnxOperatorSetId = struct {
    domain: []const u8,
    version: i64,
};

pub fn parseOnnxOperatorSetIdList(
    allocator: anytype,
    value: anytype,
    len: usize,
) !std.ArrayList(OnnxOperatorSetId) {
    var list = std.ArrayList(OnnxOperatorSetId).init(allocator);
    std.log.debug(
        "Attempting to parse a OnnxOperatorSetId list of len '{}'",
        .{len},
    );
    for (0..len) |i| {
        const item = (value + i).*.*;
        const domain = try fromCString(allocator, item.domain);
        std.log.debug("Read domain '{s}'", .{domain});
        const version = item.version;
        std.log.debug("Read version '{}'", .{version});
        try list.append(.{
            .domain = domain,
            .version = version,
        });
    }

    return list;
}
