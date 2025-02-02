const std = @import("std");
const OnnxModel = @import("../onnx/OnnxModel.zig").OnnxModel;
const OnnxAttributeUnion = @import("../onnx/OnnxAttributeUnion.zig").OnnxAttributeUnion;
const OnnxAttributeType = @import("../onnx/OnnxAttributeType.zig").OnnxAttributeType;
const OnnxDataUnion = @import("../onnx/OnnxDataUnion.zig").OnnxDataUnion;
const OnnxDataType = @import("../onnx/OnnxDataType.zig").OnnxDataType;
const OnnxStandardType = @import("../onnx/OnnxStandardType.zig").OnnxStandardType;

pub fn generateCodeOnnxValueInfoDefinition(writer: anytype, info: anytype) !void {
    const shape = switch (info.type) {
        OnnxStandardType.TENSOR_TYPE => |val| blk: {
            break :blk val.shape; 
        },
        else => {
            unreachable;
        },
    };

    const elem_type = switch (info.type) {
        OnnxStandardType.TENSOR_TYPE => |val| blk: {
            inline for (std.meta.fields(OnnxAttributeUnion)) |field| {
                if (std.mem.eql(u8, field.name, @tagName(val.elem_type))) {
                    break :blk @typeName(field.type);
                }
            }

            unreachable;
        },
        else => {
            unreachable;
        },
    };

    try writer.print("    {s}: Tensor({s}, .{any}),\n", .{
        info.name,
        elem_type,
        shape,
    });
}

pub fn generateCodeOnnxValueInfoInitializer(writer: anytype, info: anytype) !void {
    const shape = switch (info.type) {
        OnnxStandardType.TENSOR_TYPE => |val| blk: {
            break :blk val.shape; 
        },
        else => {
            unreachable;
        },
    };

    const elem_type = switch (info.type) {
        OnnxStandardType.TENSOR_TYPE => |val| blk: {
            inline for (std.meta.fields(OnnxAttributeUnion)) |field| {
                if (std.mem.eql(u8, field.name, @tagName(val.elem_type))) {
                    break :blk @typeName(field.type);
                }
            }

            unreachable;
        },
        else => {
            unreachable;
        },
    };

    try writer.print("            .{s} = Tensor({s}, .{any}).default(),\n", .{
        info.name,
        elem_type,
        shape,
    });
}

pub fn generateCodeOnnxTensorDefinition(writer: anytype, tensor: anytype) !void {
    const elem_type = switch (tensor.data) {
        inline OnnxDataType.FLOAT, OnnxDataType.INT64,  => |val| blk: {
            break :blk @typeName(@TypeOf(val[0]));
        },
        else => unreachable,
    };

    try writer.print("    {s}: Tensor({s}, .{any}),\n", .{
        tensor.name,
        elem_type,
        tensor.dims,
    });
}

pub fn generateCodeOnnxTensorInitializer(writer: anytype, tensor: anytype) !void {
    const elem_type = switch (tensor.data) {
        inline OnnxDataType.FLOAT, OnnxDataType.INT64,  => |val| blk: {
            break :blk @typeName(@TypeOf(val[0]));
        },
        else => unreachable,
    };

    try writer.print("            .{s} = Tensor({s}, .{any},\n                ).init(@import(\"{s}.zig\").tensor),\n", .{
        tensor.name,
        elem_type,
        tensor.dims,
        tensor.name,
    });
}

pub fn generateCode(
    arena: *std.heap.ArenaAllocator,
    model: OnnxModel,
) !void {
    try generateWeightCode(arena, model);
    try generateModelCode(arena, model);
}

pub fn generateWeightCode(
    arena: *std.heap.ArenaAllocator,
    model: OnnxModel,
) !void {
    const allocator = arena.allocator();
    for (model.graph.initializer) |initializer| {
        var code = std.ArrayList(u8).init(allocator);

        switch (initializer.data) {
            inline OnnxDataType.FLOAT, OnnxDataType.INT64,  => |val| {
                try code.writer().print("pub const tensor = [_]{s}{any};\n", .{
                    @typeName(@TypeOf(val[0])),
                    val,
                });
            },
            else => unreachable,
        }

        const path = try std.fmt.allocPrint(allocator, "src/model/{s}.zig", .{initializer.name});
        var file = try std.fs.cwd().createFile(path, .{},);
        defer file.close();
        try file.writeAll(try code.toOwnedSlice());
    }
}

pub fn generateModelCode(
    arena: *std.heap.ArenaAllocator,
    model: OnnxModel,
) !void {
    const allocator = arena.allocator();
    var code = std.ArrayList(u8).init(allocator);
    try code.writer().print("pub usingnamespace @import(\"../impl/Tensor.zig\");\n\n", .{});
    try code.writer().print("pub const {s} = struct {{\n", .{model.graph.name});
    try code.writer().print("    const Self = @This();\n", .{});
    try code.writer().print("\n", .{});

    // write inputs
    try code.writer().print("    // inputs:\n", .{});
    for (model.graph.input) |input| {
        try generateCodeOnnxValueInfoDefinition(code.writer(), input);
    }
    try code.writer().print("\n", .{});

    // write intermediates
    try code.writer().print("    // value_info:\n", .{});
    for (model.graph.value_info) |value_info| {
        try generateCodeOnnxValueInfoDefinition(code.writer(), value_info);
    }
    try code.writer().print("\n", .{});

    // write outputs
    try code.writer().print("    // outputs:\n", .{});
    for (model.graph.output) |output| {
        try generateCodeOnnxValueInfoDefinition(code.writer(), output);
    }
    try code.writer().print("\n", .{});

    // write weights
    try code.writer().print("    // weights:\n", .{});
    for (model.graph.initializer) |initializer| {
        try generateCodeOnnxTensorDefinition(code.writer(), initializer);
    }
    try code.writer().print("\n", .{});

    // write process
    try code.writer().print("    // process:\n", .{});
    try code.writer().print("    pub fn process(self: *Self) void {{\n", .{});
    for (model.graph.node) |node| {
        try code.writer().print("        {s}(\n", .{@tagName(node.op_type)});

        for (node.input) |input| {
            try code.writer().print("            self.{s},\n", .{input});
        }
        for (node.output) |output| {
            try code.writer().print("            self.{s},\n", .{output});
        }
        try code.writer().print("        );\n", .{});
    }
    try code.writer().print("    }}\n", .{});
    try code.writer().print("\n", .{});

    // write init
    try code.writer().print("    // init:\n", .{});
    try code.writer().print("    pub fn init() !{s} {{\n", .{model.graph.name});
    try code.writer().print("        return Self {{\n", .{});
    for (model.graph.input) |input| {
        try generateCodeOnnxValueInfoInitializer(code.writer(), input);
    }
    for (model.graph.value_info) |value_info| {
        try generateCodeOnnxValueInfoInitializer(code.writer(), value_info);
    }
    for (model.graph.output) |output| {
        try generateCodeOnnxValueInfoInitializer(code.writer(), output);
    }
    for (model.graph.initializer) |initializer| {
        try generateCodeOnnxTensorInitializer(code.writer(), initializer);
    }
    try code.writer().print("        }};\n", .{});
    try code.writer().print("    }}\n", .{});
    try code.writer().print("\n", .{});

    try code.writer().print("}};", .{});
    var file = try std.fs.cwd().createFile("src/model/model.zig", .{});
    defer file.close();
    try file.writeAll(try code.toOwnedSlice());
}
