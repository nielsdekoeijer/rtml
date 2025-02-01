const std = @import("std");
const OnnxModel = @import("../onnx/OnnxModel.zig").OnnxModel;
const OnnxStandardType = @import("../onnx/OnnxStandardType.zig").OnnxStandardType;

pub fn generateCode(
    arena: *std.heap.ArenaAllocator,
    model: OnnxModel,
) !void {
    const allocator = arena.allocator();
    var code = std.ArrayList(u8).init(allocator);
    try code.writer().print("\n", .{});
    try code.writer().print("pub const {s} = struct {{\n", .{model.graph.name});

    // write inputs
    try code.writer().print("\t// inputs:\n", .{});
    for (model.graph.input) |input| {
        const shape = switch(input.type) {
            OnnxStandardType.TENSOR_TYPE  => |val| blk: {
                break :blk val.shape;
            },
            else => {
                unreachable;
            }
        };

        try code.writer().print("\t{s}: {any}\n", .{input.name, shape});
    }
    try code.writer().print("\n", .{});

    // write intermediates
    try code.writer().print("\t// value_info:\n", .{});
    for (model.graph.value_info) |value_info| {
        const shape = switch(value_info.type) {
            OnnxStandardType.TENSOR_TYPE  => |val| blk: {
                break :blk val.shape;
            },
            else => {
                unreachable;
            }
        };

        try code.writer().print("\t{s}: {any}\n", .{value_info.name, shape});
    }
    try code.writer().print("\n", .{});

    // write outputs
    try code.writer().print("\t// outputs:\n", .{});
    for (model.graph.output) |output| {
        const shape = switch(output.type) {
            OnnxStandardType.TENSOR_TYPE  => |val| blk: {
                break :blk val.shape;
            },
            else => {
                unreachable;
            }
        };

        try code.writer().print("\t{s}: {any}\n", .{output.name, shape});
    }
    try code.writer().print("\n", .{});

    // write weights
    try code.writer().print("\t// weights:\n", .{});
    for (model.graph.initializer) |initializer| {
        try code.writer().print("\t{s}: {any}\n", .{initializer.name, initializer.dims});
    }
    try code.writer().print("\n", .{});

    // write process
    try code.writer().print("\t// process:\n", .{});
    try code.writer().print("\tpub fn process() void {{\n", .{});
    try code.writer().print("\t}};\n", .{});
    try code.writer().print("\n", .{});

    // write init
    try code.writer().print("\t// init:\n", .{});
    try code.writer().print("\tpub fn init() !{s} {{\n", .{model.graph.name});
    try code.writer().print("\t}};\n", .{});
    try code.writer().print("\n", .{});

    // write free
    try code.writer().print("\t// free:\n", .{});
    try code.writer().print("\tpub fn free() void {{\n", .{});
    try code.writer().print("\t}};\n", .{});
    try code.writer().print("\n", .{});

    try code.writer().print("}};", .{});
    std.log.debug("{s}", .{try code.toOwnedSlice()});
}
