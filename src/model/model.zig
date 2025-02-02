const Tensor = @import("../impl/Tensor.zig").Tensor;

pub const CNTKGraph = struct {
    const Self = @This();

    // inputs:
    Input3: Tensor(f32, .{ 1, 1, 28, 28 }),

    // value_info:
    Parameter193_reshape1: Tensor(f32, .{ 256, 10 }),
    Convolution28_Output_0: Tensor(f32, .{ 1, 8, 28, 28 }),
    Plus30_Output_0: Tensor(f32, .{ 1, 8, 28, 28 }),
    ReLU32_Output_0: Tensor(f32, .{ 1, 8, 28, 28 }),
    Pooling66_Output_0: Tensor(f32, .{ 1, 8, 14, 14 }),
    Convolution110_Output_0: Tensor(f32, .{ 1, 16, 14, 14 }),
    Plus112_Output_0: Tensor(f32, .{ 1, 16, 14, 14 }),
    ReLU114_Output_0: Tensor(f32, .{ 1, 16, 14, 14 }),
    Pooling160_Output_0: Tensor(f32, .{ 1, 16, 4, 4 }),
    Pooling160_Output_0_reshape0: Tensor(f32, .{ 1, 256 }),
    Times212_Output_0: Tensor(f32, .{ 1, 10 }),

    // outputs:
    Plus214_Output_0: Tensor(f32, .{ 1, 10 }),

    // weights:
    Parameter193: Tensor(f32, .{ 16, 4, 4, 10 }),
    Parameter87: Tensor(f32, .{ 16, 8, 5, 5 }),
    Parameter5: Tensor(f32, .{ 8, 1, 5, 5 }),
    Parameter6: Tensor(f32, .{ 8, 1, 1 }),
    Parameter88: Tensor(f32, .{ 16, 1, 1 }),
    Pooling160_Output_0_reshape0_shape: Tensor(i64, .{ 2 }),
    Parameter193_reshape1_shape: Tensor(i64, .{ 2 }),
    Parameter194: Tensor(f32, .{ 1, 10 }),

    // process:
    pub fn process(self: *Self) void {
        Conv(
            self.Input3,
            self.Parameter5,
            self.Convolution28_Output_0,
        );
        Add(
            self.Convolution28_Output_0,
            self.Parameter6,
            self.Plus30_Output_0,
        );
        Relu(
            self.Plus30_Output_0,
            self.ReLU32_Output_0,
        );
        MaxPool(
            self.ReLU32_Output_0,
            self.Pooling66_Output_0,
        );
        Conv(
            self.Pooling66_Output_0,
            self.Parameter87,
            self.Convolution110_Output_0,
        );
        Add(
            self.Convolution110_Output_0,
            self.Parameter88,
            self.Plus112_Output_0,
        );
        Relu(
            self.Plus112_Output_0,
            self.ReLU114_Output_0,
        );
        MaxPool(
            self.ReLU114_Output_0,
            self.Pooling160_Output_0,
        );
        Reshape(
            self.Pooling160_Output_0,
            self.Pooling160_Output_0_reshape0_shape,
            self.Pooling160_Output_0_reshape0,
        );
        Reshape(
            self.Parameter193,
            self.Parameter193_reshape1_shape,
            self.Parameter193_reshape1,
        );
        MatMul(
            self.Pooling160_Output_0_reshape0,
            self.Parameter193_reshape1,
            self.Times212_Output_0,
        );
        Add(
            self.Times212_Output_0,
            self.Parameter194,
            self.Plus214_Output_0,
        );
    }

    // init:
    pub fn init() !CNTKGraph {
        return Self {
            .Input3 = Tensor(f32, .{ 1, 1, 28, 28 }).default(),
            .Parameter193_reshape1 = Tensor(f32, .{ 256, 10 }).default(),
            .Convolution28_Output_0 = Tensor(f32, .{ 1, 8, 28, 28 }).default(),
            .Plus30_Output_0 = Tensor(f32, .{ 1, 8, 28, 28 }).default(),
            .ReLU32_Output_0 = Tensor(f32, .{ 1, 8, 28, 28 }).default(),
            .Pooling66_Output_0 = Tensor(f32, .{ 1, 8, 14, 14 }).default(),
            .Convolution110_Output_0 = Tensor(f32, .{ 1, 16, 14, 14 }).default(),
            .Plus112_Output_0 = Tensor(f32, .{ 1, 16, 14, 14 }).default(),
            .ReLU114_Output_0 = Tensor(f32, .{ 1, 16, 14, 14 }).default(),
            .Pooling160_Output_0 = Tensor(f32, .{ 1, 16, 4, 4 }).default(),
            .Pooling160_Output_0_reshape0 = Tensor(f32, .{ 1, 256 }).default(),
            .Times212_Output_0 = Tensor(f32, .{ 1, 10 }).default(),
            .Plus214_Output_0 = Tensor(f32, .{ 1, 10 }).default(),
            .Parameter193 = Tensor(f32, .{ 16, 4, 4, 10 },
                ).init(@import("Parameter193.zig").tensor),
            .Parameter87 = Tensor(f32, .{ 16, 8, 5, 5 },
                ).init(@import("Parameter87.zig").tensor),
            .Parameter5 = Tensor(f32, .{ 8, 1, 5, 5 },
                ).init(@import("Parameter5.zig").tensor),
            .Parameter6 = Tensor(f32, .{ 8, 1, 1 },
                ).init(@import("Parameter6.zig").tensor),
            .Parameter88 = Tensor(f32, .{ 16, 1, 1 },
                ).init(@import("Parameter88.zig").tensor),
            .Pooling160_Output_0_reshape0_shape = Tensor(i64, .{ 2 },
                ).init(@import("Pooling160_Output_0_reshape0_shape.zig").tensor),
            .Parameter193_reshape1_shape = Tensor(i64, .{ 2 },
                ).init(@import("Parameter193_reshape1_shape.zig").tensor),
            .Parameter194 = Tensor(f32, .{ 1, 10 },
                ).init(@import("Parameter194.zig").tensor),
        };
    }

};
