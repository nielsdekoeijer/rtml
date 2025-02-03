const std = @import("std");

pub fn MaxPool(comptime Self: type, comptime inpNameA: anytype, comptime inpNameB: anytype, comptime outNameA: anytype) type {
    comptime {
        return struct {
            pub fn process(self: *Self) void {
                _ = self;
                _ = inpNameA;
                _ = inpNameB;
                _ = outNameA;
            }
        };
    }
}
