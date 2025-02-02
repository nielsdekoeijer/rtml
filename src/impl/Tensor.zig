pub fn Tensor(comptime T: type, comptime Shape: anytype) type {
    comptime {
        return struct {
            const Self = @This();
            data: [Self._len()]T,

            /// init
            pub fn default() Self {
                return Self{
                    .data = [_]T{0} ** Self._len(),
                };
            }

            pub fn init(values: anytype) Self {
                var data: [Self._len()]T = undefined;

                @setEvalBranchQuota(10 * Self._len());
                inline for (0..Self._len()) |i| {
                    data[i] = values[i];
                }

                return Self{
                    .data = data,
                };
            }

            /// getter
            pub inline fn get(this: Self, index: anytype) T {
                return getReshaped(this, index, Shape);
            }

            pub inline fn getReshaped(
                this: anytype,
                index: anytype,
                comptime reshapeShape: anytype,
            ) T {
                comptime var offset = 0;
                comptime {
                    for (0..reshapeShape.len) |i| {
                        offset = offset * reshapeShape[i] + index[i];
                    }
                }

                return this.data[offset];
            }

            /// setter
            pub inline fn set(this: *Self, index: anytype, value: T) void {
                setReshaped(this, index, value, Shape);
            }

            pub inline fn setReshaped(
                this: anytype,
                index: anytype,
                value: T,
                comptime reshapeShape: anytype,
            ) void {
                comptime var offset = 0;
                comptime {
                    for (0..reshapeShape.len) |i| {
                        offset = offset * reshapeShape[i] + index[i];
                    }
                }

                this.data[offset] = value;
            }

            /// len
            pub inline fn len(comptime _: Self) usize {
                comptime {
                    return Self._len();
                }
            }

            pub inline fn _len() usize {
                comptime {
                    var tensorLen = 1;
                    for (Shape) |s| {
                        tensorLen *= s;
                    }
                    return tensorLen;
                }
            }

            /// dim
            pub inline fn dim(comptime _: Self) usize {
                comptime {
                    return Self._dim();
                }
            }

            inline fn _dim() usize {
                comptime {
                    return Shape.len;
                }
            }

            /// shape
            pub inline fn shape(comptime _: Self) @TypeOf(Shape) {
                comptime {
                    return Self._shape();
                }
            }

            inline fn _shape() @TypeOf(Shape) {
                comptime {
                    return Shape;
                }
            }
        };
    }
}
