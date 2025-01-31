const std = @import("std");
const OnnxModel = @import("../onnx/OnnxModel.zig").OnnxModel;

pub fn generateCode(
    arena: *std.heap.ArenaAllocator,
    model: OnnxModel,
) !void {
    const allocator = arena.allocator();
    var code = std.ArrayList(u8).init(allocator);
    try code.writer().print("\n", .{});
    try code.writer().print("pub const {s} = struct {{\n", .{model.graph.name});
    try code.writer().print("}};", .{});
    std.log.debug("{s}", .{try code.toOwnedSlice()});
}
