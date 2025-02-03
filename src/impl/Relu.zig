const std = @import("std");

pub fn Relu(comptime Self: type, comptime inpNameA: anytype, comptime outNameA: anytype) type {
    comptime {
        return struct {
            pub fn process(self: *Self) void {
                const inpA = &@field(self, inpNameA);
                const outA = &@field(self, outNameA);
                for (0..outA.len()) |i| {
                    outA.data[i] =  if (inpA.data[i] >= 0) inpA.data[i] else 0;
                }
            }
        };
    }
}
