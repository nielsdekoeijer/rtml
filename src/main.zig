const std = @import("std");
const util = @import("onnx/util.zig");
const OnnxProto = @import("onnx/OnnxProto.zig").OnnxProto;
const parseOnnxModel = @import("onnx/OnnxModel.zig").parseOnnxModel;
const generateCode = @import("gen/CodeGen.zig").generateCode;

pub fn main() !void {
    const allocator = std.heap.page_allocator;

    const models = [_][]const u8{
        "add.onnx",
    };

    inline for (models) |model| {
        const buffer = try util.readFileBuffer(allocator, "models/" ++ model);
        defer allocator.free(buffer);

        const proto = OnnxProto.init(buffer);
        defer proto.deinit();

        // all allocations for one parse are stored in an arena to ease cleanup
        var arena = std.heap.ArenaAllocator.init(allocator);
        defer arena.deinit();

        const parsed = try parseOnnxModel(&arena, proto);

        var file = try std.fs.cwd().createFile("temp.json", .{ .truncate = true });
        defer file.close();

        try std.json.stringify(
            parsed,
            .{ .whitespace = .indent_4 },
            file.writer(),
        );

        try generateCode(&arena, parsed);

        var graph = try @import("model/model.zig").AddGraph.init();
        graph.process();
    }
}
