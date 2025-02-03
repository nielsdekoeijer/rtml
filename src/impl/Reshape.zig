const std = @import("std");

pub fn Reshape(comptime Self: type, comptime inpNameA: anytype, comptime inpNameB: anytype, comptime outNameA: anytype) type {
    comptime {
        return struct {
            pub fn process(self: *Self) void {
                const inpA = &@field(self, inpNameA);
                _ = inpNameB;
                const outA = &@field(self, outNameA);
                for (0..outA.len()) |i| {
                    outA.data[i] = inpA.data[i];
                }
            }
        };
    }
}
