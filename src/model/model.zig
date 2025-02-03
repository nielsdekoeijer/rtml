const Tensor = @import("../impl/Tensor.zig").Tensor;
const Add = @import("../impl/Add.zig").Add;
const Reshape = @import("../impl/Reshape.zig").Reshape;
const Relu = @import("../impl/Relu.zig").Relu;
const MatMul = @import("../impl/MatMul.zig").MatMul;
const Conv = @import("../impl/Conv.zig").Conv;
const MaxPool = @import("../impl/MaxPool.zig").MaxPool;
pub const AddGraph = struct {
    const Self = @This();

    // inputs:
    input: Tensor(f32, .{ 1, 3 }),

    // value_info:

    // outputs:
    output: Tensor(f32, .{ 1, 3 }),

    // weights:
    fixed: Tensor(f32, .{ 1, 3 }),

    // process:
    pub fn process(self: *Self) void {
        Add(
            Self,
            "input",
            "fixed",
            "output",
        ).process(self);
    }

    // init:
    pub fn init() !AddGraph {
        return Self {
        .input = Tensor(f32, .{ 1, 3 }).default(),
        .output = Tensor(f32, .{ 1, 3 }).default(),
        .fixed = Tensor(f32, .{ 1, 3 },
            ).init(@import("fixed.zig").tensor),
        };
        }

};