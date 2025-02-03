const std = @import("std");

pub fn reduceShape(comptime shape: anytype, comptime dim: anytype) [dim]usize {
    return switch (shape.len)  {
        inline dim => shape,
        inline shape.len > dim  => blk: {
            var outer = 1;
            for (0..shape.len - 2) |i| {
                outer *= shape[i];
            }

            break :blk .{outer, shape[shape.len - 2], shape[shape.len - 1]};
        },
        inline else => unreachable,
    };
}

pub fn MatMul(comptime Self: type, comptime inpNameA: anytype, comptime inpNameB: anytype, comptime outNameA: anytype) type {
    comptime {
        return struct {
            pub fn process(self: *Self) void {
                const inpA = &@field(self, inpNameA);
                const inpAShape = reduceShape(inpA.shape, 3);
                const inpB = &@field(self, inpNameB);
                const inpBShape = reduceShape(inpB.shape, 3);
                const outA = &@field(self, outNameA);
                const outAShape = reduceShape(outA.shape, 3);

                const i = 0;
                const j = 0;

                outA.setReshaped(
                    .{i, j}, 
                    inpA[i].getReshaped(.{i, j}, inpAShape) *
                    inpB[i].getReshaped(.{i, j}, inpBShape),
                    outAShape,
                );
            }
        };
    }
}
