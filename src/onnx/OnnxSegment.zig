const std = @import("std");

pub const OnnxSegment = struct {
    begin: i64,
    end: i64,
};

pub fn parseOnnxSegment(
    allocator: anytype,
    value_ptr: anytype,
) !?OnnxSegment {
    _ = allocator;

    if (value_ptr == null) {
        return null;
    }
    const value = value_ptr.*;

    const begin = value.begin;
    std.log.debug("Read attribute data type '{}'", .{begin});

    const end = value.end;
    std.log.debug("Read attribute data type '{}'", .{end});

    return .{
        .begin = begin,
        .end = end,
    };
}
