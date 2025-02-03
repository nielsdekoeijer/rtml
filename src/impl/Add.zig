const std = @import("std");

pub fn Add(comptime Self: type, comptime inpNameA: anytype, comptime inpNameB: anytype, comptime outNameA: anytype) type {
    comptime {
        return struct {
            pub fn process(self: *Self) void {
                const inpA = &@field(self, inpNameA);
                const inpB = &@field(self, inpNameB);
                const outA = &@field(self, outNameA);
                inline for (0..@TypeOf(outA.*)._len()) |i| {
                    outA.data[i] = inpA.data[i] + inpB.data[i];
                }
            }
        };
    }
}
