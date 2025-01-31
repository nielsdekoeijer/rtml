const std = @import("std");

pub fn readFileBuffer(allocator: anytype, path: []const u8) ![]const u8 {
    // read file
    const file = try std.fs.cwd().openFile(path, .{});
    defer file.close();
    const file_size = try file.getEndPos();

    // load into buffer
    const buffer = try allocator.alloc(u8, file_size);
    _ = try file.readAll(buffer);

    return buffer;
}

pub fn fromCString(allocator: std.mem.Allocator, cstring: [*c]u8) ![]const u8 {
    const len = std.mem.len(cstring);
    const string = try allocator.alloc(u8, len);
    for (0..len) |i| {
        string[i] = cstring[i];
    }

    return string;
}
