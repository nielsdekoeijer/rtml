pub const __builtin_bswap16 = @import("std").zig.c_builtins.__builtin_bswap16;
pub const __builtin_bswap32 = @import("std").zig.c_builtins.__builtin_bswap32;
pub const __builtin_bswap64 = @import("std").zig.c_builtins.__builtin_bswap64;
pub const __builtin_signbit = @import("std").zig.c_builtins.__builtin_signbit;
pub const __builtin_signbitf = @import("std").zig.c_builtins.__builtin_signbitf;
pub const __builtin_popcount = @import("std").zig.c_builtins.__builtin_popcount;
pub const __builtin_ctz = @import("std").zig.c_builtins.__builtin_ctz;
pub const __builtin_clz = @import("std").zig.c_builtins.__builtin_clz;
pub const __builtin_sqrt = @import("std").zig.c_builtins.__builtin_sqrt;
pub const __builtin_sqrtf = @import("std").zig.c_builtins.__builtin_sqrtf;
pub const __builtin_sin = @import("std").zig.c_builtins.__builtin_sin;
pub const __builtin_sinf = @import("std").zig.c_builtins.__builtin_sinf;
pub const __builtin_cos = @import("std").zig.c_builtins.__builtin_cos;
pub const __builtin_cosf = @import("std").zig.c_builtins.__builtin_cosf;
pub const __builtin_exp = @import("std").zig.c_builtins.__builtin_exp;
pub const __builtin_expf = @import("std").zig.c_builtins.__builtin_expf;
pub const __builtin_exp2 = @import("std").zig.c_builtins.__builtin_exp2;
pub const __builtin_exp2f = @import("std").zig.c_builtins.__builtin_exp2f;
pub const __builtin_log = @import("std").zig.c_builtins.__builtin_log;
pub const __builtin_logf = @import("std").zig.c_builtins.__builtin_logf;
pub const __builtin_log2 = @import("std").zig.c_builtins.__builtin_log2;
pub const __builtin_log2f = @import("std").zig.c_builtins.__builtin_log2f;
pub const __builtin_log10 = @import("std").zig.c_builtins.__builtin_log10;
pub const __builtin_log10f = @import("std").zig.c_builtins.__builtin_log10f;
pub const __builtin_abs = @import("std").zig.c_builtins.__builtin_abs;
pub const __builtin_labs = @import("std").zig.c_builtins.__builtin_labs;
pub const __builtin_llabs = @import("std").zig.c_builtins.__builtin_llabs;
pub const __builtin_fabs = @import("std").zig.c_builtins.__builtin_fabs;
pub const __builtin_fabsf = @import("std").zig.c_builtins.__builtin_fabsf;
pub const __builtin_floor = @import("std").zig.c_builtins.__builtin_floor;
pub const __builtin_floorf = @import("std").zig.c_builtins.__builtin_floorf;
pub const __builtin_ceil = @import("std").zig.c_builtins.__builtin_ceil;
pub const __builtin_ceilf = @import("std").zig.c_builtins.__builtin_ceilf;
pub const __builtin_trunc = @import("std").zig.c_builtins.__builtin_trunc;
pub const __builtin_truncf = @import("std").zig.c_builtins.__builtin_truncf;
pub const __builtin_round = @import("std").zig.c_builtins.__builtin_round;
pub const __builtin_roundf = @import("std").zig.c_builtins.__builtin_roundf;
pub const __builtin_strlen = @import("std").zig.c_builtins.__builtin_strlen;
pub const __builtin_strcmp = @import("std").zig.c_builtins.__builtin_strcmp;
pub const __builtin_object_size = @import("std").zig.c_builtins.__builtin_object_size;
pub const __builtin___memset_chk = @import("std").zig.c_builtins.__builtin___memset_chk;
pub const __builtin_memset = @import("std").zig.c_builtins.__builtin_memset;
pub const __builtin___memcpy_chk = @import("std").zig.c_builtins.__builtin___memcpy_chk;
pub const __builtin_memcpy = @import("std").zig.c_builtins.__builtin_memcpy;
pub const __builtin_expect = @import("std").zig.c_builtins.__builtin_expect;
pub const __builtin_nanf = @import("std").zig.c_builtins.__builtin_nanf;
pub const __builtin_huge_valf = @import("std").zig.c_builtins.__builtin_huge_valf;
pub const __builtin_inff = @import("std").zig.c_builtins.__builtin_inff;
pub const __builtin_isnan = @import("std").zig.c_builtins.__builtin_isnan;
pub const __builtin_isinf = @import("std").zig.c_builtins.__builtin_isinf;
pub const __builtin_isinf_sign = @import("std").zig.c_builtins.__builtin_isinf_sign;
pub const __has_builtin = @import("std").zig.c_builtins.__has_builtin;
pub const __builtin_assume = @import("std").zig.c_builtins.__builtin_assume;
pub const __builtin_unreachable = @import("std").zig.c_builtins.__builtin_unreachable;
pub const __builtin_constant_p = @import("std").zig.c_builtins.__builtin_constant_p;
pub const __builtin_mul_overflow = @import("std").zig.c_builtins.__builtin_mul_overflow;
pub extern fn __assert_fail(__assertion: [*c]const u8, __file: [*c]const u8, __line: c_uint, __function: [*c]const u8) noreturn;
pub extern fn __assert_perror_fail(__errnum: c_int, __file: [*c]const u8, __line: c_uint, __function: [*c]const u8) noreturn;
pub extern fn __assert(__assertion: [*c]const u8, __file: [*c]const u8, __line: c_int) noreturn;
pub const ptrdiff_t = c_long;
pub const wchar_t = c_int;
pub const max_align_t = extern struct {
    __clang_max_align_nonce1: c_longlong align(8) = @import("std").mem.zeroes(c_longlong),
    __clang_max_align_nonce2: c_longdouble align(16) = @import("std").mem.zeroes(c_longdouble),
};
pub const __u_char = u8;
pub const __u_short = c_ushort;
pub const __u_int = c_uint;
pub const __u_long = c_ulong;
pub const __int8_t = i8;
pub const __uint8_t = u8;
pub const __int16_t = c_short;
pub const __uint16_t = c_ushort;
pub const __int32_t = c_int;
pub const __uint32_t = c_uint;
pub const __int64_t = c_long;
pub const __uint64_t = c_ulong;
pub const __int_least8_t = __int8_t;
pub const __uint_least8_t = __uint8_t;
pub const __int_least16_t = __int16_t;
pub const __uint_least16_t = __uint16_t;
pub const __int_least32_t = __int32_t;
pub const __uint_least32_t = __uint32_t;
pub const __int_least64_t = __int64_t;
pub const __uint_least64_t = __uint64_t;
pub const __quad_t = c_long;
pub const __u_quad_t = c_ulong;
pub const __intmax_t = c_long;
pub const __uintmax_t = c_ulong;
pub const __dev_t = c_ulong;
pub const __uid_t = c_uint;
pub const __gid_t = c_uint;
pub const __ino_t = c_ulong;
pub const __ino64_t = c_ulong;
pub const __mode_t = c_uint;
pub const __nlink_t = c_ulong;
pub const __off_t = c_long;
pub const __off64_t = c_long;
pub const __pid_t = c_int;
pub const __fsid_t = extern struct {
    __val: [2]c_int = @import("std").mem.zeroes([2]c_int),
};
pub const __clock_t = c_long;
pub const __rlim_t = c_ulong;
pub const __rlim64_t = c_ulong;
pub const __id_t = c_uint;
pub const __time_t = c_long;
pub const __useconds_t = c_uint;
pub const __suseconds_t = c_long;
pub const __suseconds64_t = c_long;
pub const __daddr_t = c_int;
pub const __key_t = c_int;
pub const __clockid_t = c_int;
pub const __timer_t = ?*anyopaque;
pub const __blksize_t = c_long;
pub const __blkcnt_t = c_long;
pub const __blkcnt64_t = c_long;
pub const __fsblkcnt_t = c_ulong;
pub const __fsblkcnt64_t = c_ulong;
pub const __fsfilcnt_t = c_ulong;
pub const __fsfilcnt64_t = c_ulong;
pub const __fsword_t = c_long;
pub const __ssize_t = c_long;
pub const __syscall_slong_t = c_long;
pub const __syscall_ulong_t = c_ulong;
pub const __loff_t = __off64_t;
pub const __caddr_t = [*c]u8;
pub const __intptr_t = c_long;
pub const __socklen_t = c_uint;
pub const __sig_atomic_t = c_int;
pub const int_least8_t = __int_least8_t;
pub const int_least16_t = __int_least16_t;
pub const int_least32_t = __int_least32_t;
pub const int_least64_t = __int_least64_t;
pub const uint_least8_t = __uint_least8_t;
pub const uint_least16_t = __uint_least16_t;
pub const uint_least32_t = __uint_least32_t;
pub const uint_least64_t = __uint_least64_t;
pub const int_fast8_t = i8;
pub const int_fast16_t = c_long;
pub const int_fast32_t = c_long;
pub const int_fast64_t = c_long;
pub const uint_fast8_t = u8;
pub const uint_fast16_t = c_ulong;
pub const uint_fast32_t = c_ulong;
pub const uint_fast64_t = c_ulong;
pub const intmax_t = __intmax_t;
pub const uintmax_t = __uintmax_t;
pub const protobuf_c_empty_string: [*c]const u8 = @extern([*c]const u8, .{
    .name = "protobuf_c_empty_string",
});
pub const PROTOBUF_C_FIELD_FLAG_PACKED: c_int = 1;
pub const PROTOBUF_C_FIELD_FLAG_DEPRECATED: c_int = 2;
pub const PROTOBUF_C_FIELD_FLAG_ONEOF: c_int = 4;
pub const ProtobufCFieldFlag = c_uint;
pub const PROTOBUF_C_LABEL_REQUIRED: c_int = 0;
pub const PROTOBUF_C_LABEL_OPTIONAL: c_int = 1;
pub const PROTOBUF_C_LABEL_REPEATED: c_int = 2;
pub const PROTOBUF_C_LABEL_NONE: c_int = 3;
pub const ProtobufCLabel = c_uint;
pub const PROTOBUF_C_TYPE_INT32: c_int = 0;
pub const PROTOBUF_C_TYPE_SINT32: c_int = 1;
pub const PROTOBUF_C_TYPE_SFIXED32: c_int = 2;
pub const PROTOBUF_C_TYPE_INT64: c_int = 3;
pub const PROTOBUF_C_TYPE_SINT64: c_int = 4;
pub const PROTOBUF_C_TYPE_SFIXED64: c_int = 5;
pub const PROTOBUF_C_TYPE_UINT32: c_int = 6;
pub const PROTOBUF_C_TYPE_FIXED32: c_int = 7;
pub const PROTOBUF_C_TYPE_UINT64: c_int = 8;
pub const PROTOBUF_C_TYPE_FIXED64: c_int = 9;
pub const PROTOBUF_C_TYPE_FLOAT: c_int = 10;
pub const PROTOBUF_C_TYPE_DOUBLE: c_int = 11;
pub const PROTOBUF_C_TYPE_BOOL: c_int = 12;
pub const PROTOBUF_C_TYPE_ENUM: c_int = 13;
pub const PROTOBUF_C_TYPE_STRING: c_int = 14;
pub const PROTOBUF_C_TYPE_BYTES: c_int = 15;
pub const PROTOBUF_C_TYPE_MESSAGE: c_int = 16;
pub const ProtobufCType = c_uint;
pub const PROTOBUF_C_WIRE_TYPE_VARINT: c_int = 0;
pub const PROTOBUF_C_WIRE_TYPE_64BIT: c_int = 1;
pub const PROTOBUF_C_WIRE_TYPE_LENGTH_PREFIXED: c_int = 2;
pub const PROTOBUF_C_WIRE_TYPE_32BIT: c_int = 5;
pub const ProtobufCWireType = c_uint;
pub const struct_ProtobufCAllocator = extern struct {
    alloc: ?*const fn (?*anyopaque, usize) callconv(.c) ?*anyopaque = @import("std").mem.zeroes(?*const fn (?*anyopaque, usize) callconv(.c) ?*anyopaque),
    free: ?*const fn (?*anyopaque, ?*anyopaque) callconv(.c) void = @import("std").mem.zeroes(?*const fn (?*anyopaque, ?*anyopaque) callconv(.c) void),
    allocator_data: ?*anyopaque = @import("std").mem.zeroes(?*anyopaque),
};
pub const struct_ProtobufCBinaryData = extern struct {
    len: usize = @import("std").mem.zeroes(usize),
    data: [*c]u8 = @import("std").mem.zeroes([*c]u8),
};
pub const ProtobufCBuffer = struct_ProtobufCBuffer;
pub const struct_ProtobufCBuffer = extern struct {
    append: ?*const fn ([*c]ProtobufCBuffer, usize, [*c]const u8) callconv(.c) void = @import("std").mem.zeroes(?*const fn ([*c]ProtobufCBuffer, usize, [*c]const u8) callconv(.c) void),
};
pub const protobuf_c_boolean = c_int;
pub const ProtobufCAllocator = struct_ProtobufCAllocator;
pub const struct_ProtobufCBufferSimple = extern struct {
    base: ProtobufCBuffer = @import("std").mem.zeroes(ProtobufCBuffer),
    alloced: usize = @import("std").mem.zeroes(usize),
    len: usize = @import("std").mem.zeroes(usize),
    data: [*c]u8 = @import("std").mem.zeroes([*c]u8),
    must_free_data: protobuf_c_boolean = @import("std").mem.zeroes(protobuf_c_boolean),
    allocator: [*c]ProtobufCAllocator = @import("std").mem.zeroes([*c]ProtobufCAllocator),
};
pub const struct_ProtobufCEnumValue = extern struct {
    name: [*c]const u8 = @import("std").mem.zeroes([*c]const u8),
    c_name: [*c]const u8 = @import("std").mem.zeroes([*c]const u8),
    value: c_int = @import("std").mem.zeroes(c_int),
};
pub const ProtobufCEnumValue = struct_ProtobufCEnumValue;
pub const struct_ProtobufCEnumValueIndex = extern struct {
    name: [*c]const u8 = @import("std").mem.zeroes([*c]const u8),
    index: c_uint = @import("std").mem.zeroes(c_uint),
};
pub const ProtobufCEnumValueIndex = struct_ProtobufCEnumValueIndex;
pub const struct_ProtobufCIntRange = extern struct {
    start_value: c_int = @import("std").mem.zeroes(c_int),
    orig_index: c_uint = @import("std").mem.zeroes(c_uint),
};
pub const ProtobufCIntRange = struct_ProtobufCIntRange;
pub const struct_ProtobufCEnumDescriptor = extern struct {
    magic: u32 = @import("std").mem.zeroes(u32),
    name: [*c]const u8 = @import("std").mem.zeroes([*c]const u8),
    short_name: [*c]const u8 = @import("std").mem.zeroes([*c]const u8),
    c_name: [*c]const u8 = @import("std").mem.zeroes([*c]const u8),
    package_name: [*c]const u8 = @import("std").mem.zeroes([*c]const u8),
    n_values: c_uint = @import("std").mem.zeroes(c_uint),
    values: [*c]const ProtobufCEnumValue = @import("std").mem.zeroes([*c]const ProtobufCEnumValue),
    n_value_names: c_uint = @import("std").mem.zeroes(c_uint),
    values_by_name: [*c]const ProtobufCEnumValueIndex = @import("std").mem.zeroes([*c]const ProtobufCEnumValueIndex),
    n_value_ranges: c_uint = @import("std").mem.zeroes(c_uint),
    value_ranges: [*c]const ProtobufCIntRange = @import("std").mem.zeroes([*c]const ProtobufCIntRange),
    reserved1: ?*anyopaque = @import("std").mem.zeroes(?*anyopaque),
    reserved2: ?*anyopaque = @import("std").mem.zeroes(?*anyopaque),
    reserved3: ?*anyopaque = @import("std").mem.zeroes(?*anyopaque),
    reserved4: ?*anyopaque = @import("std").mem.zeroes(?*anyopaque),
};
pub const struct_ProtobufCFieldDescriptor = extern struct {
    name: [*c]const u8 = @import("std").mem.zeroes([*c]const u8),
    id: u32 = @import("std").mem.zeroes(u32),
    label: ProtobufCLabel = @import("std").mem.zeroes(ProtobufCLabel),
    type: ProtobufCType = @import("std").mem.zeroes(ProtobufCType),
    quantifier_offset: c_uint = @import("std").mem.zeroes(c_uint),
    offset: c_uint = @import("std").mem.zeroes(c_uint),
    descriptor: ?*const anyopaque = @import("std").mem.zeroes(?*const anyopaque),
    default_value: ?*const anyopaque = @import("std").mem.zeroes(?*const anyopaque),
    flags: u32 = @import("std").mem.zeroes(u32),
    reserved_flags: c_uint = @import("std").mem.zeroes(c_uint),
    reserved2: ?*anyopaque = @import("std").mem.zeroes(?*anyopaque),
    reserved3: ?*anyopaque = @import("std").mem.zeroes(?*anyopaque),
};
pub const ProtobufCFieldDescriptor = struct_ProtobufCFieldDescriptor;
pub const ProtobufCMessage = struct_ProtobufCMessage;
pub const ProtobufCMessageInit = ?*const fn ([*c]ProtobufCMessage) callconv(.c) void;
pub const struct_ProtobufCMessageDescriptor = extern struct {
    magic: u32 = @import("std").mem.zeroes(u32),
    name: [*c]const u8 = @import("std").mem.zeroes([*c]const u8),
    short_name: [*c]const u8 = @import("std").mem.zeroes([*c]const u8),
    c_name: [*c]const u8 = @import("std").mem.zeroes([*c]const u8),
    package_name: [*c]const u8 = @import("std").mem.zeroes([*c]const u8),
    sizeof_message: usize = @import("std").mem.zeroes(usize),
    n_fields: c_uint = @import("std").mem.zeroes(c_uint),
    fields: [*c]const ProtobufCFieldDescriptor = @import("std").mem.zeroes([*c]const ProtobufCFieldDescriptor),
    fields_sorted_by_name: [*c]const c_uint = @import("std").mem.zeroes([*c]const c_uint),
    n_field_ranges: c_uint = @import("std").mem.zeroes(c_uint),
    field_ranges: [*c]const ProtobufCIntRange = @import("std").mem.zeroes([*c]const ProtobufCIntRange),
    message_init: ProtobufCMessageInit = @import("std").mem.zeroes(ProtobufCMessageInit),
    reserved1: ?*anyopaque = @import("std").mem.zeroes(?*anyopaque),
    reserved2: ?*anyopaque = @import("std").mem.zeroes(?*anyopaque),
    reserved3: ?*anyopaque = @import("std").mem.zeroes(?*anyopaque),
};
pub const ProtobufCMessageDescriptor = struct_ProtobufCMessageDescriptor;
pub const struct_ProtobufCMessageUnknownField = extern struct {
    tag: u32 = @import("std").mem.zeroes(u32),
    wire_type: ProtobufCWireType = @import("std").mem.zeroes(ProtobufCWireType),
    len: usize = @import("std").mem.zeroes(usize),
    data: [*c]u8 = @import("std").mem.zeroes([*c]u8),
};
pub const ProtobufCMessageUnknownField = struct_ProtobufCMessageUnknownField;
pub const struct_ProtobufCMessage = extern struct {
    descriptor: [*c]const ProtobufCMessageDescriptor = @import("std").mem.zeroes([*c]const ProtobufCMessageDescriptor),
    n_unknown_fields: c_uint = @import("std").mem.zeroes(c_uint),
    unknown_fields: [*c]ProtobufCMessageUnknownField = @import("std").mem.zeroes([*c]ProtobufCMessageUnknownField),
};
pub const struct_ProtobufCMethodDescriptor = extern struct {
    name: [*c]const u8 = @import("std").mem.zeroes([*c]const u8),
    input: [*c]const ProtobufCMessageDescriptor = @import("std").mem.zeroes([*c]const ProtobufCMessageDescriptor),
    output: [*c]const ProtobufCMessageDescriptor = @import("std").mem.zeroes([*c]const ProtobufCMessageDescriptor),
};
pub const ProtobufCMethodDescriptor = struct_ProtobufCMethodDescriptor;
pub const struct_ProtobufCServiceDescriptor = extern struct {
    magic: u32 = @import("std").mem.zeroes(u32),
    name: [*c]const u8 = @import("std").mem.zeroes([*c]const u8),
    short_name: [*c]const u8 = @import("std").mem.zeroes([*c]const u8),
    c_name: [*c]const u8 = @import("std").mem.zeroes([*c]const u8),
    package: [*c]const u8 = @import("std").mem.zeroes([*c]const u8),
    n_methods: c_uint = @import("std").mem.zeroes(c_uint),
    methods: [*c]const ProtobufCMethodDescriptor = @import("std").mem.zeroes([*c]const ProtobufCMethodDescriptor),
    method_indices_by_name: [*c]const c_uint = @import("std").mem.zeroes([*c]const c_uint),
};
pub const ProtobufCServiceDescriptor = struct_ProtobufCServiceDescriptor;
pub const ProtobufCService = struct_ProtobufCService;
pub const ProtobufCClosure = ?*const fn ([*c]const ProtobufCMessage, ?*anyopaque) callconv(.c) void;
pub const struct_ProtobufCService = extern struct {
    descriptor: [*c]const ProtobufCServiceDescriptor = @import("std").mem.zeroes([*c]const ProtobufCServiceDescriptor),
    invoke: ?*const fn ([*c]ProtobufCService, c_uint, [*c]const ProtobufCMessage, ProtobufCClosure, ?*anyopaque) callconv(.c) void = @import("std").mem.zeroes(?*const fn ([*c]ProtobufCService, c_uint, [*c]const ProtobufCMessage, ProtobufCClosure, ?*anyopaque) callconv(.c) void),
    destroy: ?*const fn ([*c]ProtobufCService) callconv(.c) void = @import("std").mem.zeroes(?*const fn ([*c]ProtobufCService) callconv(.c) void),
};
pub const ProtobufCBinaryData = struct_ProtobufCBinaryData;
pub const ProtobufCBufferSimple = struct_ProtobufCBufferSimple;
pub const ProtobufCEnumDescriptor = struct_ProtobufCEnumDescriptor;
pub const ProtobufCServiceDestroy = ?*const fn ([*c]ProtobufCService) callconv(.c) void;
pub extern fn protobuf_c_version() [*c]const u8;
pub extern fn protobuf_c_version_number() u32;
pub extern fn protobuf_c_enum_descriptor_get_value_by_name(desc: [*c]const ProtobufCEnumDescriptor, name: [*c]const u8) [*c]const ProtobufCEnumValue;
pub extern fn protobuf_c_enum_descriptor_get_value(desc: [*c]const ProtobufCEnumDescriptor, value: c_int) [*c]const ProtobufCEnumValue;
pub extern fn protobuf_c_message_descriptor_get_field_by_name(desc: [*c]const ProtobufCMessageDescriptor, name: [*c]const u8) [*c]const ProtobufCFieldDescriptor;
pub extern fn protobuf_c_message_descriptor_get_field(desc: [*c]const ProtobufCMessageDescriptor, value: c_uint) [*c]const ProtobufCFieldDescriptor;
pub extern fn protobuf_c_message_get_packed_size(message: [*c]const ProtobufCMessage) usize;
pub extern fn protobuf_c_message_pack(message: [*c]const ProtobufCMessage, out: [*c]u8) usize;
pub extern fn protobuf_c_message_pack_to_buffer(message: [*c]const ProtobufCMessage, buffer: [*c]ProtobufCBuffer) usize;
pub extern fn protobuf_c_message_unpack(descriptor: [*c]const ProtobufCMessageDescriptor, allocator: [*c]ProtobufCAllocator, len: usize, data: [*c]const u8) [*c]ProtobufCMessage;
pub extern fn protobuf_c_message_free_unpacked(message: [*c]ProtobufCMessage, allocator: [*c]ProtobufCAllocator) void;
pub extern fn protobuf_c_message_check([*c]const ProtobufCMessage) protobuf_c_boolean;
pub extern fn protobuf_c_message_init(descriptor: [*c]const ProtobufCMessageDescriptor, message: ?*anyopaque) void;
pub extern fn protobuf_c_service_destroy(service: [*c]ProtobufCService) void;
pub extern fn protobuf_c_service_descriptor_get_method_by_name(desc: [*c]const ProtobufCServiceDescriptor, name: [*c]const u8) [*c]const ProtobufCMethodDescriptor;
pub extern fn protobuf_c_buffer_simple_append(buffer: [*c]ProtobufCBuffer, len: usize, data: [*c]const u8) void;
pub extern fn protobuf_c_service_generated_init(service: [*c]ProtobufCService, descriptor: [*c]const ProtobufCServiceDescriptor, destroy: ProtobufCServiceDestroy) void;
pub extern fn protobuf_c_service_invoke_internal(service: [*c]ProtobufCService, method_index: c_uint, input: [*c]const ProtobufCMessage, closure: ProtobufCClosure, closure_data: ?*anyopaque) void;
pub const ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__UNDEFINED: c_int = 0;
pub const ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__FLOAT: c_int = 1;
pub const ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__INT: c_int = 2;
pub const ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__STRING: c_int = 3;
pub const ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__TENSOR: c_int = 4;
pub const ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__GRAPH: c_int = 5;
pub const ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__SPARSE_TENSOR: c_int = 11;
pub const ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__TYPE_PROTO: c_int = 13;
pub const ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__FLOATS: c_int = 6;
pub const ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__INTS: c_int = 7;
pub const ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__STRINGS: c_int = 8;
pub const ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__TENSORS: c_int = 9;
pub const ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__GRAPHS: c_int = 10;
pub const ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__SPARSE_TENSORS: c_int = 12;
pub const ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__TYPE_PROTOS: c_int = 14;
pub const _ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE_IS_INT_SIZE: c_int = 2147483647;
pub const enum__Onnx__AttributeProto__AttributeType = c_uint;
pub const Onnx__AttributeProto__AttributeType = enum__Onnx__AttributeProto__AttributeType;
pub const struct__Onnx__TensorProto__Segment = extern struct {
    base: ProtobufCMessage = @import("std").mem.zeroes(ProtobufCMessage),
    begin: i64 = @import("std").mem.zeroes(i64),
    end: i64 = @import("std").mem.zeroes(i64),
};
pub const Onnx__TensorProto__Segment = struct__Onnx__TensorProto__Segment;
pub const struct__Onnx__StringStringEntryProto = extern struct {
    base: ProtobufCMessage = @import("std").mem.zeroes(ProtobufCMessage),
    key: [*c]u8 = @import("std").mem.zeroes([*c]u8),
    value: [*c]u8 = @import("std").mem.zeroes([*c]u8),
};
pub const Onnx__StringStringEntryProto = struct__Onnx__StringStringEntryProto;
pub const ONNX__TENSOR_PROTO__DATA_LOCATION__DEFAULT: c_int = 0;
pub const ONNX__TENSOR_PROTO__DATA_LOCATION__EXTERNAL: c_int = 1;
pub const _ONNX__TENSOR_PROTO__DATA_LOCATION_IS_INT_SIZE: c_int = 2147483647;
pub const enum__Onnx__TensorProto__DataLocation = c_uint;
pub const Onnx__TensorProto__DataLocation = enum__Onnx__TensorProto__DataLocation;
pub const struct__Onnx__TensorProto = extern struct {
    base: ProtobufCMessage = @import("std").mem.zeroes(ProtobufCMessage),
    n_dims: usize = @import("std").mem.zeroes(usize),
    dims: [*c]i64 = @import("std").mem.zeroes([*c]i64),
    data_type: i32 = @import("std").mem.zeroes(i32),
    segment: [*c]Onnx__TensorProto__Segment = @import("std").mem.zeroes([*c]Onnx__TensorProto__Segment),
    n_float_data: usize = @import("std").mem.zeroes(usize),
    float_data: [*c]f32 = @import("std").mem.zeroes([*c]f32),
    n_int32_data: usize = @import("std").mem.zeroes(usize),
    int32_data: [*c]i32 = @import("std").mem.zeroes([*c]i32),
    n_string_data: usize = @import("std").mem.zeroes(usize),
    string_data: [*c]ProtobufCBinaryData = @import("std").mem.zeroes([*c]ProtobufCBinaryData),
    n_int64_data: usize = @import("std").mem.zeroes(usize),
    int64_data: [*c]i64 = @import("std").mem.zeroes([*c]i64),
    name: [*c]u8 = @import("std").mem.zeroes([*c]u8),
    doc_string: [*c]u8 = @import("std").mem.zeroes([*c]u8),
    raw_data: ProtobufCBinaryData = @import("std").mem.zeroes(ProtobufCBinaryData),
    n_external_data: usize = @import("std").mem.zeroes(usize),
    external_data: [*c][*c]Onnx__StringStringEntryProto = @import("std").mem.zeroes([*c][*c]Onnx__StringStringEntryProto),
    data_location: Onnx__TensorProto__DataLocation = @import("std").mem.zeroes(Onnx__TensorProto__DataLocation),
    n_double_data: usize = @import("std").mem.zeroes(usize),
    double_data: [*c]f64 = @import("std").mem.zeroes([*c]f64),
    n_uint64_data: usize = @import("std").mem.zeroes(usize),
    uint64_data: [*c]u64 = @import("std").mem.zeroes([*c]u64),
    n_metadata_props: usize = @import("std").mem.zeroes(usize),
    metadata_props: [*c][*c]Onnx__StringStringEntryProto = @import("std").mem.zeroes([*c][*c]Onnx__StringStringEntryProto),
};
pub const Onnx__TensorProto = struct__Onnx__TensorProto;
pub const Onnx__AttributeProto = struct__Onnx__AttributeProto;
pub const struct__Onnx__NodeProto = extern struct {
    base: ProtobufCMessage = @import("std").mem.zeroes(ProtobufCMessage),
    n_input: usize = @import("std").mem.zeroes(usize),
    input: [*c][*c]u8 = @import("std").mem.zeroes([*c][*c]u8),
    n_output: usize = @import("std").mem.zeroes(usize),
    output: [*c][*c]u8 = @import("std").mem.zeroes([*c][*c]u8),
    name: [*c]u8 = @import("std").mem.zeroes([*c]u8),
    op_type: [*c]u8 = @import("std").mem.zeroes([*c]u8),
    domain: [*c]u8 = @import("std").mem.zeroes([*c]u8),
    overload: [*c]u8 = @import("std").mem.zeroes([*c]u8),
    n_attribute: usize = @import("std").mem.zeroes(usize),
    attribute: [*c][*c]Onnx__AttributeProto = @import("std").mem.zeroes([*c][*c]Onnx__AttributeProto),
    doc_string: [*c]u8 = @import("std").mem.zeroes([*c]u8),
    n_metadata_props: usize = @import("std").mem.zeroes(usize),
    metadata_props: [*c][*c]Onnx__StringStringEntryProto = @import("std").mem.zeroes([*c][*c]Onnx__StringStringEntryProto),
};
pub const Onnx__NodeProto = struct__Onnx__NodeProto;
pub const struct__Onnx__SparseTensorProto = extern struct {
    base: ProtobufCMessage = @import("std").mem.zeroes(ProtobufCMessage),
    values: [*c]Onnx__TensorProto = @import("std").mem.zeroes([*c]Onnx__TensorProto),
    indices: [*c]Onnx__TensorProto = @import("std").mem.zeroes([*c]Onnx__TensorProto),
    n_dims: usize = @import("std").mem.zeroes(usize),
    dims: [*c]i64 = @import("std").mem.zeroes([*c]i64),
};
pub const Onnx__SparseTensorProto = struct__Onnx__SparseTensorProto;
const union_unnamed_2 = extern union {
    dim_value: i64,
    dim_param: [*c]u8,
};
pub const struct__Onnx__TensorShapeProto__Dimension = extern struct {
    base: ProtobufCMessage = @import("std").mem.zeroes(ProtobufCMessage),
    denotation: [*c]u8 = @import("std").mem.zeroes([*c]u8),
    value_case: Onnx__TensorShapeProto__Dimension__ValueCase = @import("std").mem.zeroes(Onnx__TensorShapeProto__Dimension__ValueCase),
    unnamed_0: union_unnamed_2 = @import("std").mem.zeroes(union_unnamed_2),
};
pub const Onnx__TensorShapeProto__Dimension = struct__Onnx__TensorShapeProto__Dimension;
pub const struct__Onnx__TensorShapeProto = extern struct {
    base: ProtobufCMessage = @import("std").mem.zeroes(ProtobufCMessage),
    n_dim: usize = @import("std").mem.zeroes(usize),
    dim: [*c][*c]Onnx__TensorShapeProto__Dimension = @import("std").mem.zeroes([*c][*c]Onnx__TensorShapeProto__Dimension),
};
pub const Onnx__TensorShapeProto = struct__Onnx__TensorShapeProto;
pub const struct__Onnx__TypeProto__Tensor = extern struct {
    base: ProtobufCMessage = @import("std").mem.zeroes(ProtobufCMessage),
    elem_type: i32 = @import("std").mem.zeroes(i32),
    shape: [*c]Onnx__TensorShapeProto = @import("std").mem.zeroes([*c]Onnx__TensorShapeProto),
};
pub const Onnx__TypeProto__Tensor = struct__Onnx__TypeProto__Tensor;
pub const struct__Onnx__TypeProto__Sequence = extern struct {
    base: ProtobufCMessage = @import("std").mem.zeroes(ProtobufCMessage),
    elem_type: [*c]Onnx__TypeProto = @import("std").mem.zeroes([*c]Onnx__TypeProto),
};
pub const Onnx__TypeProto__Sequence = struct__Onnx__TypeProto__Sequence;
pub const struct__Onnx__TypeProto__Map = extern struct {
    base: ProtobufCMessage = @import("std").mem.zeroes(ProtobufCMessage),
    key_type: i32 = @import("std").mem.zeroes(i32),
    value_type: [*c]Onnx__TypeProto = @import("std").mem.zeroes([*c]Onnx__TypeProto),
};
pub const Onnx__TypeProto__Map = struct__Onnx__TypeProto__Map;
pub const struct__Onnx__TypeProto__Optional = extern struct {
    base: ProtobufCMessage = @import("std").mem.zeroes(ProtobufCMessage),
    elem_type: [*c]Onnx__TypeProto = @import("std").mem.zeroes([*c]Onnx__TypeProto),
};
pub const Onnx__TypeProto__Optional = struct__Onnx__TypeProto__Optional;
pub const struct__Onnx__TypeProto__SparseTensor = extern struct {
    base: ProtobufCMessage = @import("std").mem.zeroes(ProtobufCMessage),
    elem_type: i32 = @import("std").mem.zeroes(i32),
    shape: [*c]Onnx__TensorShapeProto = @import("std").mem.zeroes([*c]Onnx__TensorShapeProto),
};
pub const Onnx__TypeProto__SparseTensor = struct__Onnx__TypeProto__SparseTensor;
const union_unnamed_1 = extern union {
    tensor_type: [*c]Onnx__TypeProto__Tensor,
    sequence_type: [*c]Onnx__TypeProto__Sequence,
    map_type: [*c]Onnx__TypeProto__Map,
    optional_type: [*c]Onnx__TypeProto__Optional,
    sparse_tensor_type: [*c]Onnx__TypeProto__SparseTensor,
};
pub const struct__Onnx__TypeProto = extern struct {
    base: ProtobufCMessage = @import("std").mem.zeroes(ProtobufCMessage),
    denotation: [*c]u8 = @import("std").mem.zeroes([*c]u8),
    value_case: Onnx__TypeProto__ValueCase = @import("std").mem.zeroes(Onnx__TypeProto__ValueCase),
    unnamed_0: union_unnamed_1 = @import("std").mem.zeroes(union_unnamed_1),
};
pub const Onnx__TypeProto = struct__Onnx__TypeProto;
pub const struct__Onnx__ValueInfoProto = extern struct {
    base: ProtobufCMessage = @import("std").mem.zeroes(ProtobufCMessage),
    name: [*c]u8 = @import("std").mem.zeroes([*c]u8),
    type: [*c]Onnx__TypeProto = @import("std").mem.zeroes([*c]Onnx__TypeProto),
    doc_string: [*c]u8 = @import("std").mem.zeroes([*c]u8),
    n_metadata_props: usize = @import("std").mem.zeroes(usize),
    metadata_props: [*c][*c]Onnx__StringStringEntryProto = @import("std").mem.zeroes([*c][*c]Onnx__StringStringEntryProto),
};
pub const Onnx__ValueInfoProto = struct__Onnx__ValueInfoProto;
pub const struct__Onnx__TensorAnnotation = extern struct {
    base: ProtobufCMessage = @import("std").mem.zeroes(ProtobufCMessage),
    tensor_name: [*c]u8 = @import("std").mem.zeroes([*c]u8),
    n_quant_parameter_tensor_names: usize = @import("std").mem.zeroes(usize),
    quant_parameter_tensor_names: [*c][*c]Onnx__StringStringEntryProto = @import("std").mem.zeroes([*c][*c]Onnx__StringStringEntryProto),
};
pub const Onnx__TensorAnnotation = struct__Onnx__TensorAnnotation;
pub const struct__Onnx__GraphProto = extern struct {
    base: ProtobufCMessage = @import("std").mem.zeroes(ProtobufCMessage),
    n_node: usize = @import("std").mem.zeroes(usize),
    node: [*c][*c]Onnx__NodeProto = @import("std").mem.zeroes([*c][*c]Onnx__NodeProto),
    name: [*c]u8 = @import("std").mem.zeroes([*c]u8),
    n_initializer: usize = @import("std").mem.zeroes(usize),
    initializer: [*c][*c]Onnx__TensorProto = @import("std").mem.zeroes([*c][*c]Onnx__TensorProto),
    n_sparse_initializer: usize = @import("std").mem.zeroes(usize),
    sparse_initializer: [*c][*c]Onnx__SparseTensorProto = @import("std").mem.zeroes([*c][*c]Onnx__SparseTensorProto),
    doc_string: [*c]u8 = @import("std").mem.zeroes([*c]u8),
    n_input: usize = @import("std").mem.zeroes(usize),
    input: [*c][*c]Onnx__ValueInfoProto = @import("std").mem.zeroes([*c][*c]Onnx__ValueInfoProto),
    n_output: usize = @import("std").mem.zeroes(usize),
    output: [*c][*c]Onnx__ValueInfoProto = @import("std").mem.zeroes([*c][*c]Onnx__ValueInfoProto),
    n_value_info: usize = @import("std").mem.zeroes(usize),
    value_info: [*c][*c]Onnx__ValueInfoProto = @import("std").mem.zeroes([*c][*c]Onnx__ValueInfoProto),
    n_quantization_annotation: usize = @import("std").mem.zeroes(usize),
    quantization_annotation: [*c][*c]Onnx__TensorAnnotation = @import("std").mem.zeroes([*c][*c]Onnx__TensorAnnotation),
    n_metadata_props: usize = @import("std").mem.zeroes(usize),
    metadata_props: [*c][*c]Onnx__StringStringEntryProto = @import("std").mem.zeroes([*c][*c]Onnx__StringStringEntryProto),
};
pub const Onnx__GraphProto = struct__Onnx__GraphProto;
pub const struct__Onnx__AttributeProto = extern struct {
    base: ProtobufCMessage = @import("std").mem.zeroes(ProtobufCMessage),
    name: [*c]u8 = @import("std").mem.zeroes([*c]u8),
    ref_attr_name: [*c]u8 = @import("std").mem.zeroes([*c]u8),
    doc_string: [*c]u8 = @import("std").mem.zeroes([*c]u8),
    type: Onnx__AttributeProto__AttributeType = @import("std").mem.zeroes(Onnx__AttributeProto__AttributeType),
    f: f32 = @import("std").mem.zeroes(f32),
    i: i64 = @import("std").mem.zeroes(i64),
    s: ProtobufCBinaryData = @import("std").mem.zeroes(ProtobufCBinaryData),
    t: [*c]Onnx__TensorProto = @import("std").mem.zeroes([*c]Onnx__TensorProto),
    g: [*c]Onnx__GraphProto = @import("std").mem.zeroes([*c]Onnx__GraphProto),
    sparse_tensor: [*c]Onnx__SparseTensorProto = @import("std").mem.zeroes([*c]Onnx__SparseTensorProto),
    tp: [*c]Onnx__TypeProto = @import("std").mem.zeroes([*c]Onnx__TypeProto),
    n_floats: usize = @import("std").mem.zeroes(usize),
    floats: [*c]f32 = @import("std").mem.zeroes([*c]f32),
    n_ints: usize = @import("std").mem.zeroes(usize),
    ints: [*c]i64 = @import("std").mem.zeroes([*c]i64),
    n_strings: usize = @import("std").mem.zeroes(usize),
    strings: [*c]ProtobufCBinaryData = @import("std").mem.zeroes([*c]ProtobufCBinaryData),
    n_tensors: usize = @import("std").mem.zeroes(usize),
    tensors: [*c][*c]Onnx__TensorProto = @import("std").mem.zeroes([*c][*c]Onnx__TensorProto),
    n_graphs: usize = @import("std").mem.zeroes(usize),
    graphs: [*c][*c]Onnx__GraphProto = @import("std").mem.zeroes([*c][*c]Onnx__GraphProto),
    n_sparse_tensors: usize = @import("std").mem.zeroes(usize),
    sparse_tensors: [*c][*c]Onnx__SparseTensorProto = @import("std").mem.zeroes([*c][*c]Onnx__SparseTensorProto),
    n_type_protos: usize = @import("std").mem.zeroes(usize),
    type_protos: [*c][*c]Onnx__TypeProto = @import("std").mem.zeroes([*c][*c]Onnx__TypeProto),
};
pub const struct__Onnx__TrainingInfoProto = extern struct {
    base: ProtobufCMessage = @import("std").mem.zeroes(ProtobufCMessage),
    initialization: [*c]Onnx__GraphProto = @import("std").mem.zeroes([*c]Onnx__GraphProto),
    algorithm: [*c]Onnx__GraphProto = @import("std").mem.zeroes([*c]Onnx__GraphProto),
    n_initialization_binding: usize = @import("std").mem.zeroes(usize),
    initialization_binding: [*c][*c]Onnx__StringStringEntryProto = @import("std").mem.zeroes([*c][*c]Onnx__StringStringEntryProto),
    n_update_binding: usize = @import("std").mem.zeroes(usize),
    update_binding: [*c][*c]Onnx__StringStringEntryProto = @import("std").mem.zeroes([*c][*c]Onnx__StringStringEntryProto),
};
pub const Onnx__TrainingInfoProto = struct__Onnx__TrainingInfoProto;
pub const struct__Onnx__OperatorSetIdProto = extern struct {
    base: ProtobufCMessage = @import("std").mem.zeroes(ProtobufCMessage),
    domain: [*c]u8 = @import("std").mem.zeroes([*c]u8),
    version: i64 = @import("std").mem.zeroes(i64),
};
pub const Onnx__OperatorSetIdProto = struct__Onnx__OperatorSetIdProto;
pub const struct__Onnx__FunctionProto = extern struct {
    base: ProtobufCMessage = @import("std").mem.zeroes(ProtobufCMessage),
    name: [*c]u8 = @import("std").mem.zeroes([*c]u8),
    n_input: usize = @import("std").mem.zeroes(usize),
    input: [*c][*c]u8 = @import("std").mem.zeroes([*c][*c]u8),
    n_output: usize = @import("std").mem.zeroes(usize),
    output: [*c][*c]u8 = @import("std").mem.zeroes([*c][*c]u8),
    n_attribute: usize = @import("std").mem.zeroes(usize),
    attribute: [*c][*c]u8 = @import("std").mem.zeroes([*c][*c]u8),
    n_attribute_proto: usize = @import("std").mem.zeroes(usize),
    attribute_proto: [*c][*c]Onnx__AttributeProto = @import("std").mem.zeroes([*c][*c]Onnx__AttributeProto),
    n_node: usize = @import("std").mem.zeroes(usize),
    node: [*c][*c]Onnx__NodeProto = @import("std").mem.zeroes([*c][*c]Onnx__NodeProto),
    doc_string: [*c]u8 = @import("std").mem.zeroes([*c]u8),
    n_opset_import: usize = @import("std").mem.zeroes(usize),
    opset_import: [*c][*c]Onnx__OperatorSetIdProto = @import("std").mem.zeroes([*c][*c]Onnx__OperatorSetIdProto),
    domain: [*c]u8 = @import("std").mem.zeroes([*c]u8),
    overload: [*c]u8 = @import("std").mem.zeroes([*c]u8),
    n_value_info: usize = @import("std").mem.zeroes(usize),
    value_info: [*c][*c]Onnx__ValueInfoProto = @import("std").mem.zeroes([*c][*c]Onnx__ValueInfoProto),
    n_metadata_props: usize = @import("std").mem.zeroes(usize),
    metadata_props: [*c][*c]Onnx__StringStringEntryProto = @import("std").mem.zeroes([*c][*c]Onnx__StringStringEntryProto),
};
pub const Onnx__FunctionProto = struct__Onnx__FunctionProto;
pub const struct__Onnx__ModelProto = extern struct {
    base: ProtobufCMessage = @import("std").mem.zeroes(ProtobufCMessage),
    ir_version: i64 = @import("std").mem.zeroes(i64),
    n_opset_import: usize = @import("std").mem.zeroes(usize),
    opset_import: [*c][*c]Onnx__OperatorSetIdProto = @import("std").mem.zeroes([*c][*c]Onnx__OperatorSetIdProto),
    producer_name: [*c]u8 = @import("std").mem.zeroes([*c]u8),
    producer_version: [*c]u8 = @import("std").mem.zeroes([*c]u8),
    domain: [*c]u8 = @import("std").mem.zeroes([*c]u8),
    model_version: i64 = @import("std").mem.zeroes(i64),
    doc_string: [*c]u8 = @import("std").mem.zeroes([*c]u8),
    graph: [*c]Onnx__GraphProto = @import("std").mem.zeroes([*c]Onnx__GraphProto),
    n_metadata_props: usize = @import("std").mem.zeroes(usize),
    metadata_props: [*c][*c]Onnx__StringStringEntryProto = @import("std").mem.zeroes([*c][*c]Onnx__StringStringEntryProto),
    n_training_info: usize = @import("std").mem.zeroes(usize),
    training_info: [*c][*c]Onnx__TrainingInfoProto = @import("std").mem.zeroes([*c][*c]Onnx__TrainingInfoProto),
    n_functions: usize = @import("std").mem.zeroes(usize),
    functions: [*c][*c]Onnx__FunctionProto = @import("std").mem.zeroes([*c][*c]Onnx__FunctionProto),
};
pub const Onnx__ModelProto = struct__Onnx__ModelProto;
pub const ONNX__TENSOR_PROTO__DATA_TYPE__UNDEFINED: c_int = 0;
pub const ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT: c_int = 1;
pub const ONNX__TENSOR_PROTO__DATA_TYPE__UINT8: c_int = 2;
pub const ONNX__TENSOR_PROTO__DATA_TYPE__INT8: c_int = 3;
pub const ONNX__TENSOR_PROTO__DATA_TYPE__UINT16: c_int = 4;
pub const ONNX__TENSOR_PROTO__DATA_TYPE__INT16: c_int = 5;
pub const ONNX__TENSOR_PROTO__DATA_TYPE__INT32: c_int = 6;
pub const ONNX__TENSOR_PROTO__DATA_TYPE__INT64: c_int = 7;
pub const ONNX__TENSOR_PROTO__DATA_TYPE__STRING: c_int = 8;
pub const ONNX__TENSOR_PROTO__DATA_TYPE__BOOL: c_int = 9;
pub const ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT16: c_int = 10;
pub const ONNX__TENSOR_PROTO__DATA_TYPE__DOUBLE: c_int = 11;
pub const ONNX__TENSOR_PROTO__DATA_TYPE__UINT32: c_int = 12;
pub const ONNX__TENSOR_PROTO__DATA_TYPE__UINT64: c_int = 13;
pub const ONNX__TENSOR_PROTO__DATA_TYPE__COMPLEX64: c_int = 14;
pub const ONNX__TENSOR_PROTO__DATA_TYPE__COMPLEX128: c_int = 15;
pub const ONNX__TENSOR_PROTO__DATA_TYPE__BFLOAT16: c_int = 16;
pub const ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT8E4M3FN: c_int = 17;
pub const ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT8E4M3FNUZ: c_int = 18;
pub const ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT8E5M2: c_int = 19;
pub const ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT8E5M2FNUZ: c_int = 20;
pub const ONNX__TENSOR_PROTO__DATA_TYPE__UINT4: c_int = 21;
pub const ONNX__TENSOR_PROTO__DATA_TYPE__INT4: c_int = 22;
pub const ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT4E2M1: c_int = 23;
pub const _ONNX__TENSOR_PROTO__DATA_TYPE_IS_INT_SIZE: c_int = 2147483647;
pub const enum__Onnx__TensorProto__DataType = c_uint;
pub const Onnx__TensorProto__DataType = enum__Onnx__TensorProto__DataType;
pub const ONNX__VERSION___START_VERSION: c_int = 0;
pub const ONNX__VERSION__IR_VERSION_2017_10_10: c_int = 1;
pub const ONNX__VERSION__IR_VERSION_2017_10_30: c_int = 2;
pub const ONNX__VERSION__IR_VERSION_2017_11_3: c_int = 3;
pub const ONNX__VERSION__IR_VERSION_2019_1_22: c_int = 4;
pub const ONNX__VERSION__IR_VERSION_2019_3_18: c_int = 5;
pub const ONNX__VERSION__IR_VERSION_2019_9_19: c_int = 6;
pub const ONNX__VERSION__IR_VERSION_2020_5_8: c_int = 7;
pub const ONNX__VERSION__IR_VERSION_2021_7_30: c_int = 8;
pub const ONNX__VERSION__IR_VERSION_2023_5_5: c_int = 9;
pub const ONNX__VERSION__IR_VERSION_2024_3_25: c_int = 10;
pub const ONNX__VERSION__IR_VERSION: c_int = 11;
pub const _ONNX__VERSION_IS_INT_SIZE: c_int = 2147483647;
pub const enum__Onnx__Version = c_uint;
pub const Onnx__Version = enum__Onnx__Version;
pub const ONNX__OPERATOR_STATUS__EXPERIMENTAL: c_int = 0;
pub const ONNX__OPERATOR_STATUS__STABLE: c_int = 1;
pub const _ONNX__OPERATOR_STATUS_IS_INT_SIZE: c_int = 2147483647;
pub const enum__Onnx__OperatorStatus = c_uint;
pub const Onnx__OperatorStatus = enum__Onnx__OperatorStatus;
pub const ONNX__TENSOR_SHAPE_PROTO__DIMENSION__VALUE__NOT_SET: c_int = 0;
pub const ONNX__TENSOR_SHAPE_PROTO__DIMENSION__VALUE_DIM_VALUE: c_int = 1;
pub const ONNX__TENSOR_SHAPE_PROTO__DIMENSION__VALUE_DIM_PARAM: c_int = 2;
pub const _ONNX__TENSOR_SHAPE_PROTO__DIMENSION__VALUE_IS_INT_SIZE: c_int = 2147483647;
pub const Onnx__TensorShapeProto__Dimension__ValueCase = c_uint;
pub const ONNX__TYPE_PROTO__VALUE__NOT_SET: c_int = 0;
pub const ONNX__TYPE_PROTO__VALUE_TENSOR_TYPE: c_int = 1;
pub const ONNX__TYPE_PROTO__VALUE_SEQUENCE_TYPE: c_int = 4;
pub const ONNX__TYPE_PROTO__VALUE_MAP_TYPE: c_int = 5;
pub const ONNX__TYPE_PROTO__VALUE_OPTIONAL_TYPE: c_int = 9;
pub const ONNX__TYPE_PROTO__VALUE_SPARSE_TENSOR_TYPE: c_int = 8;
pub const _ONNX__TYPE_PROTO__VALUE_IS_INT_SIZE: c_int = 2147483647;
pub const Onnx__TypeProto__ValueCase = c_uint;
pub export fn onnx__attribute_proto__init(arg_message: [*c]Onnx__AttributeProto) void {
    var message = arg_message;
    _ = &message;
    const init_value = struct {
        const static: Onnx__AttributeProto = Onnx__AttributeProto{
            .base = ProtobufCMessage{
                .descriptor = &onnx__attribute_proto__descriptor,
                .n_unknown_fields = @as(c_uint, @bitCast(@as(c_int, 0))),
                .unknown_fields = null,
            },
            .name = @as([*c]u8, @ptrCast(@volatileCast(@constCast(@as([*c]const u8, @ptrCast(@alignCast(&protobuf_c_empty_string))))))),
            .ref_attr_name = @as([*c]u8, @ptrCast(@volatileCast(@constCast(@as([*c]const u8, @ptrCast(@alignCast(&protobuf_c_empty_string))))))),
            .doc_string = @as([*c]u8, @ptrCast(@volatileCast(@constCast(@as([*c]const u8, @ptrCast(@alignCast(&protobuf_c_empty_string))))))),
            .type = @as(c_uint, @bitCast(ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__UNDEFINED)),
            .f = @as(f32, @floatFromInt(@as(c_int, 0))),
            .i = @as(i64, @bitCast(@as(c_long, @as(c_int, 0)))),
            .s = ProtobufCBinaryData{
                .len = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
                .data = null,
            },
            .t = null,
            .g = null,
            .sparse_tensor = null,
            .tp = null,
            .n_floats = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .floats = null,
            .n_ints = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .ints = null,
            .n_strings = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .strings = null,
            .n_tensors = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .tensors = null,
            .n_graphs = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .graphs = null,
            .n_sparse_tensors = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .sparse_tensors = null,
            .n_type_protos = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .type_protos = null,
        };
    };
    _ = &init_value;
    message.* = init_value.static;
}
pub export fn onnx__attribute_proto__get_packed_size(arg_message: [*c]const Onnx__AttributeProto) usize {
    var message = arg_message;
    _ = &message;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__attribute_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__attribute_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 19))), "size_t onnx__attribute_proto__get_packed_size(const Onnx__AttributeProto *)");
            };
        };
    };
    return protobuf_c_message_get_packed_size(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))));
}
pub export fn onnx__attribute_proto__pack(arg_message: [*c]const Onnx__AttributeProto, arg_out: [*c]u8) usize {
    var message = arg_message;
    _ = &message;
    var out = arg_out;
    _ = &out;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__attribute_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__attribute_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 26))), "size_t onnx__attribute_proto__pack(const Onnx__AttributeProto *, uint8_t *)");
            };
        };
    };
    return protobuf_c_message_pack(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))), out);
}
pub export fn onnx__attribute_proto__pack_to_buffer(arg_message: [*c]const Onnx__AttributeProto, arg_buffer: [*c]ProtobufCBuffer) usize {
    var message = arg_message;
    _ = &message;
    var buffer = arg_buffer;
    _ = &buffer;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__attribute_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__attribute_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 33))), "size_t onnx__attribute_proto__pack_to_buffer(const Onnx__AttributeProto *, ProtobufCBuffer *)");
            };
        };
    };
    return protobuf_c_message_pack_to_buffer(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))), buffer);
}
pub export fn onnx__attribute_proto__unpack(arg_allocator: [*c]ProtobufCAllocator, arg_len: usize, arg_data: [*c]const u8) [*c]Onnx__AttributeProto {
    var allocator = arg_allocator;
    _ = &allocator;
    var len = arg_len;
    _ = &len;
    var data = arg_data;
    _ = &data;
    return @as([*c]Onnx__AttributeProto, @ptrCast(@alignCast(protobuf_c_message_unpack(&onnx__attribute_proto__descriptor, allocator, len, data))));
}
pub export fn onnx__attribute_proto__free_unpacked(arg_message: [*c]Onnx__AttributeProto, arg_allocator: [*c]ProtobufCAllocator) void {
    var message = arg_message;
    _ = &message;
    var allocator = arg_allocator;
    _ = &allocator;
    if (!(message != null)) return;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__attribute_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__attribute_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 52))), "void onnx__attribute_proto__free_unpacked(Onnx__AttributeProto *, ProtobufCAllocator *)");
            };
        };
    };
    protobuf_c_message_free_unpacked(@as([*c]ProtobufCMessage, @ptrCast(@alignCast(message))), allocator);
}
pub export fn onnx__value_info_proto__init(arg_message: [*c]Onnx__ValueInfoProto) void {
    var message = arg_message;
    _ = &message;
    const init_value = struct {
        const static: Onnx__ValueInfoProto = Onnx__ValueInfoProto{
            .base = ProtobufCMessage{
                .descriptor = &onnx__value_info_proto__descriptor,
                .n_unknown_fields = @as(c_uint, @bitCast(@as(c_int, 0))),
                .unknown_fields = null,
            },
            .name = @as([*c]u8, @ptrCast(@volatileCast(@constCast(@as([*c]const u8, @ptrCast(@alignCast(&protobuf_c_empty_string))))))),
            .type = null,
            .doc_string = @as([*c]u8, @ptrCast(@volatileCast(@constCast(@as([*c]const u8, @ptrCast(@alignCast(&protobuf_c_empty_string))))))),
            .n_metadata_props = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .metadata_props = null,
        };
    };
    _ = &init_value;
    message.* = init_value.static;
}
pub export fn onnx__value_info_proto__get_packed_size(arg_message: [*c]const Onnx__ValueInfoProto) usize {
    var message = arg_message;
    _ = &message;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__value_info_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__value_info_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 64))), "size_t onnx__value_info_proto__get_packed_size(const Onnx__ValueInfoProto *)");
            };
        };
    };
    return protobuf_c_message_get_packed_size(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))));
}
pub export fn onnx__value_info_proto__pack(arg_message: [*c]const Onnx__ValueInfoProto, arg_out: [*c]u8) usize {
    var message = arg_message;
    _ = &message;
    var out = arg_out;
    _ = &out;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__value_info_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__value_info_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 71))), "size_t onnx__value_info_proto__pack(const Onnx__ValueInfoProto *, uint8_t *)");
            };
        };
    };
    return protobuf_c_message_pack(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))), out);
}
pub export fn onnx__value_info_proto__pack_to_buffer(arg_message: [*c]const Onnx__ValueInfoProto, arg_buffer: [*c]ProtobufCBuffer) usize {
    var message = arg_message;
    _ = &message;
    var buffer = arg_buffer;
    _ = &buffer;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__value_info_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__value_info_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 78))), "size_t onnx__value_info_proto__pack_to_buffer(const Onnx__ValueInfoProto *, ProtobufCBuffer *)");
            };
        };
    };
    return protobuf_c_message_pack_to_buffer(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))), buffer);
}
pub export fn onnx__value_info_proto__unpack(arg_allocator: [*c]ProtobufCAllocator, arg_len: usize, arg_data: [*c]const u8) [*c]Onnx__ValueInfoProto {
    var allocator = arg_allocator;
    _ = &allocator;
    var len = arg_len;
    _ = &len;
    var data = arg_data;
    _ = &data;
    return @as([*c]Onnx__ValueInfoProto, @ptrCast(@alignCast(protobuf_c_message_unpack(&onnx__value_info_proto__descriptor, allocator, len, data))));
}
pub export fn onnx__value_info_proto__free_unpacked(arg_message: [*c]Onnx__ValueInfoProto, arg_allocator: [*c]ProtobufCAllocator) void {
    var message = arg_message;
    _ = &message;
    var allocator = arg_allocator;
    _ = &allocator;
    if (!(message != null)) return;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__value_info_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__value_info_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 97))), "void onnx__value_info_proto__free_unpacked(Onnx__ValueInfoProto *, ProtobufCAllocator *)");
            };
        };
    };
    protobuf_c_message_free_unpacked(@as([*c]ProtobufCMessage, @ptrCast(@alignCast(message))), allocator);
}
pub export fn onnx__node_proto__init(arg_message: [*c]Onnx__NodeProto) void {
    var message = arg_message;
    _ = &message;
    const init_value = struct {
        const static: Onnx__NodeProto = Onnx__NodeProto{
            .base = ProtobufCMessage{
                .descriptor = &onnx__node_proto__descriptor,
                .n_unknown_fields = @as(c_uint, @bitCast(@as(c_int, 0))),
                .unknown_fields = null,
            },
            .n_input = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .input = null,
            .n_output = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .output = null,
            .name = @as([*c]u8, @ptrCast(@volatileCast(@constCast(@as([*c]const u8, @ptrCast(@alignCast(&protobuf_c_empty_string))))))),
            .op_type = @as([*c]u8, @ptrCast(@volatileCast(@constCast(@as([*c]const u8, @ptrCast(@alignCast(&protobuf_c_empty_string))))))),
            .domain = @as([*c]u8, @ptrCast(@volatileCast(@constCast(@as([*c]const u8, @ptrCast(@alignCast(&protobuf_c_empty_string))))))),
            .overload = @as([*c]u8, @ptrCast(@volatileCast(@constCast(@as([*c]const u8, @ptrCast(@alignCast(&protobuf_c_empty_string))))))),
            .n_attribute = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .attribute = null,
            .doc_string = @as([*c]u8, @ptrCast(@volatileCast(@constCast(@as([*c]const u8, @ptrCast(@alignCast(&protobuf_c_empty_string))))))),
            .n_metadata_props = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .metadata_props = null,
        };
    };
    _ = &init_value;
    message.* = init_value.static;
}
pub export fn onnx__node_proto__get_packed_size(arg_message: [*c]const Onnx__NodeProto) usize {
    var message = arg_message;
    _ = &message;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__node_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__node_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 109))), "size_t onnx__node_proto__get_packed_size(const Onnx__NodeProto *)");
            };
        };
    };
    return protobuf_c_message_get_packed_size(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))));
}
pub export fn onnx__node_proto__pack(arg_message: [*c]const Onnx__NodeProto, arg_out: [*c]u8) usize {
    var message = arg_message;
    _ = &message;
    var out = arg_out;
    _ = &out;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__node_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__node_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 116))), "size_t onnx__node_proto__pack(const Onnx__NodeProto *, uint8_t *)");
            };
        };
    };
    return protobuf_c_message_pack(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))), out);
}
pub export fn onnx__node_proto__pack_to_buffer(arg_message: [*c]const Onnx__NodeProto, arg_buffer: [*c]ProtobufCBuffer) usize {
    var message = arg_message;
    _ = &message;
    var buffer = arg_buffer;
    _ = &buffer;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__node_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__node_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 123))), "size_t onnx__node_proto__pack_to_buffer(const Onnx__NodeProto *, ProtobufCBuffer *)");
            };
        };
    };
    return protobuf_c_message_pack_to_buffer(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))), buffer);
}
pub export fn onnx__node_proto__unpack(arg_allocator: [*c]ProtobufCAllocator, arg_len: usize, arg_data: [*c]const u8) [*c]Onnx__NodeProto {
    var allocator = arg_allocator;
    _ = &allocator;
    var len = arg_len;
    _ = &len;
    var data = arg_data;
    _ = &data;
    return @as([*c]Onnx__NodeProto, @ptrCast(@alignCast(protobuf_c_message_unpack(&onnx__node_proto__descriptor, allocator, len, data))));
}
pub export fn onnx__node_proto__free_unpacked(arg_message: [*c]Onnx__NodeProto, arg_allocator: [*c]ProtobufCAllocator) void {
    var message = arg_message;
    _ = &message;
    var allocator = arg_allocator;
    _ = &allocator;
    if (!(message != null)) return;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__node_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__node_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 142))), "void onnx__node_proto__free_unpacked(Onnx__NodeProto *, ProtobufCAllocator *)");
            };
        };
    };
    protobuf_c_message_free_unpacked(@as([*c]ProtobufCMessage, @ptrCast(@alignCast(message))), allocator);
}
pub export fn onnx__training_info_proto__init(arg_message: [*c]Onnx__TrainingInfoProto) void {
    var message = arg_message;
    _ = &message;
    const init_value = struct {
        const static: Onnx__TrainingInfoProto = Onnx__TrainingInfoProto{
            .base = ProtobufCMessage{
                .descriptor = &onnx__training_info_proto__descriptor,
                .n_unknown_fields = @as(c_uint, @bitCast(@as(c_int, 0))),
                .unknown_fields = null,
            },
            .initialization = null,
            .algorithm = null,
            .n_initialization_binding = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .initialization_binding = null,
            .n_update_binding = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .update_binding = null,
        };
    };
    _ = &init_value;
    message.* = init_value.static;
}
pub export fn onnx__training_info_proto__get_packed_size(arg_message: [*c]const Onnx__TrainingInfoProto) usize {
    var message = arg_message;
    _ = &message;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__training_info_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__training_info_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 154))), "size_t onnx__training_info_proto__get_packed_size(const Onnx__TrainingInfoProto *)");
            };
        };
    };
    return protobuf_c_message_get_packed_size(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))));
}
pub export fn onnx__training_info_proto__pack(arg_message: [*c]const Onnx__TrainingInfoProto, arg_out: [*c]u8) usize {
    var message = arg_message;
    _ = &message;
    var out = arg_out;
    _ = &out;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__training_info_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__training_info_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 161))), "size_t onnx__training_info_proto__pack(const Onnx__TrainingInfoProto *, uint8_t *)");
            };
        };
    };
    return protobuf_c_message_pack(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))), out);
}
pub export fn onnx__training_info_proto__pack_to_buffer(arg_message: [*c]const Onnx__TrainingInfoProto, arg_buffer: [*c]ProtobufCBuffer) usize {
    var message = arg_message;
    _ = &message;
    var buffer = arg_buffer;
    _ = &buffer;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__training_info_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__training_info_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 168))), "size_t onnx__training_info_proto__pack_to_buffer(const Onnx__TrainingInfoProto *, ProtobufCBuffer *)");
            };
        };
    };
    return protobuf_c_message_pack_to_buffer(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))), buffer);
}
pub export fn onnx__training_info_proto__unpack(arg_allocator: [*c]ProtobufCAllocator, arg_len: usize, arg_data: [*c]const u8) [*c]Onnx__TrainingInfoProto {
    var allocator = arg_allocator;
    _ = &allocator;
    var len = arg_len;
    _ = &len;
    var data = arg_data;
    _ = &data;
    return @as([*c]Onnx__TrainingInfoProto, @ptrCast(@alignCast(protobuf_c_message_unpack(&onnx__training_info_proto__descriptor, allocator, len, data))));
}
pub export fn onnx__training_info_proto__free_unpacked(arg_message: [*c]Onnx__TrainingInfoProto, arg_allocator: [*c]ProtobufCAllocator) void {
    var message = arg_message;
    _ = &message;
    var allocator = arg_allocator;
    _ = &allocator;
    if (!(message != null)) return;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__training_info_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__training_info_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 187))), "void onnx__training_info_proto__free_unpacked(Onnx__TrainingInfoProto *, ProtobufCAllocator *)");
            };
        };
    };
    protobuf_c_message_free_unpacked(@as([*c]ProtobufCMessage, @ptrCast(@alignCast(message))), allocator);
}
pub export fn onnx__model_proto__init(arg_message: [*c]Onnx__ModelProto) void {
    var message = arg_message;
    _ = &message;
    const init_value = struct {
        const static: Onnx__ModelProto = Onnx__ModelProto{
            .base = ProtobufCMessage{
                .descriptor = &onnx__model_proto__descriptor,
                .n_unknown_fields = @as(c_uint, @bitCast(@as(c_int, 0))),
                .unknown_fields = null,
            },
            .ir_version = @as(i64, @bitCast(@as(c_long, @as(c_int, 0)))),
            .n_opset_import = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .opset_import = null,
            .producer_name = @as([*c]u8, @ptrCast(@volatileCast(@constCast(@as([*c]const u8, @ptrCast(@alignCast(&protobuf_c_empty_string))))))),
            .producer_version = @as([*c]u8, @ptrCast(@volatileCast(@constCast(@as([*c]const u8, @ptrCast(@alignCast(&protobuf_c_empty_string))))))),
            .domain = @as([*c]u8, @ptrCast(@volatileCast(@constCast(@as([*c]const u8, @ptrCast(@alignCast(&protobuf_c_empty_string))))))),
            .model_version = @as(i64, @bitCast(@as(c_long, @as(c_int, 0)))),
            .doc_string = @as([*c]u8, @ptrCast(@volatileCast(@constCast(@as([*c]const u8, @ptrCast(@alignCast(&protobuf_c_empty_string))))))),
            .graph = null,
            .n_metadata_props = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .metadata_props = null,
            .n_training_info = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .training_info = null,
            .n_functions = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .functions = null,
        };
    };
    _ = &init_value;
    message.* = init_value.static;
}
pub export fn onnx__model_proto__get_packed_size(arg_message: [*c]const Onnx__ModelProto) usize {
    var message = arg_message;
    _ = &message;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__model_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__model_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 199))), "size_t onnx__model_proto__get_packed_size(const Onnx__ModelProto *)");
            };
        };
    };
    return protobuf_c_message_get_packed_size(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))));
}
pub export fn onnx__model_proto__pack(arg_message: [*c]const Onnx__ModelProto, arg_out: [*c]u8) usize {
    var message = arg_message;
    _ = &message;
    var out = arg_out;
    _ = &out;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__model_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__model_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 206))), "size_t onnx__model_proto__pack(const Onnx__ModelProto *, uint8_t *)");
            };
        };
    };
    return protobuf_c_message_pack(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))), out);
}
pub export fn onnx__model_proto__pack_to_buffer(arg_message: [*c]const Onnx__ModelProto, arg_buffer: [*c]ProtobufCBuffer) usize {
    var message = arg_message;
    _ = &message;
    var buffer = arg_buffer;
    _ = &buffer;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__model_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__model_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 213))), "size_t onnx__model_proto__pack_to_buffer(const Onnx__ModelProto *, ProtobufCBuffer *)");
            };
        };
    };
    return protobuf_c_message_pack_to_buffer(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))), buffer);
}
pub export fn onnx__model_proto__unpack(arg_allocator: [*c]ProtobufCAllocator, arg_len: usize, arg_data: [*c]const u8) [*c]Onnx__ModelProto {
    var allocator = arg_allocator;
    _ = &allocator;
    var len = arg_len;
    _ = &len;
    var data = arg_data;
    _ = &data;
    return @as([*c]Onnx__ModelProto, @ptrCast(@alignCast(protobuf_c_message_unpack(&onnx__model_proto__descriptor, allocator, len, data))));
}
pub export fn onnx__model_proto__free_unpacked(arg_message: [*c]Onnx__ModelProto, arg_allocator: [*c]ProtobufCAllocator) void {
    var message = arg_message;
    _ = &message;
    var allocator = arg_allocator;
    _ = &allocator;
    if (!(message != null)) return;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__model_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__model_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 232))), "void onnx__model_proto__free_unpacked(Onnx__ModelProto *, ProtobufCAllocator *)");
            };
        };
    };
    protobuf_c_message_free_unpacked(@as([*c]ProtobufCMessage, @ptrCast(@alignCast(message))), allocator);
}
pub export fn onnx__string_string_entry_proto__init(arg_message: [*c]Onnx__StringStringEntryProto) void {
    var message = arg_message;
    _ = &message;
    const init_value = struct {
        const static: Onnx__StringStringEntryProto = Onnx__StringStringEntryProto{
            .base = ProtobufCMessage{
                .descriptor = &onnx__string_string_entry_proto__descriptor,
                .n_unknown_fields = @as(c_uint, @bitCast(@as(c_int, 0))),
                .unknown_fields = null,
            },
            .key = @as([*c]u8, @ptrCast(@volatileCast(@constCast(@as([*c]const u8, @ptrCast(@alignCast(&protobuf_c_empty_string))))))),
            .value = @as([*c]u8, @ptrCast(@volatileCast(@constCast(@as([*c]const u8, @ptrCast(@alignCast(&protobuf_c_empty_string))))))),
        };
    };
    _ = &init_value;
    message.* = init_value.static;
}
pub export fn onnx__string_string_entry_proto__get_packed_size(arg_message: [*c]const Onnx__StringStringEntryProto) usize {
    var message = arg_message;
    _ = &message;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__string_string_entry_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__string_string_entry_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 244))), "size_t onnx__string_string_entry_proto__get_packed_size(const Onnx__StringStringEntryProto *)");
            };
        };
    };
    return protobuf_c_message_get_packed_size(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))));
}
pub export fn onnx__string_string_entry_proto__pack(arg_message: [*c]const Onnx__StringStringEntryProto, arg_out: [*c]u8) usize {
    var message = arg_message;
    _ = &message;
    var out = arg_out;
    _ = &out;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__string_string_entry_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__string_string_entry_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 251))), "size_t onnx__string_string_entry_proto__pack(const Onnx__StringStringEntryProto *, uint8_t *)");
            };
        };
    };
    return protobuf_c_message_pack(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))), out);
}
pub export fn onnx__string_string_entry_proto__pack_to_buffer(arg_message: [*c]const Onnx__StringStringEntryProto, arg_buffer: [*c]ProtobufCBuffer) usize {
    var message = arg_message;
    _ = &message;
    var buffer = arg_buffer;
    _ = &buffer;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__string_string_entry_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__string_string_entry_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 258))), "size_t onnx__string_string_entry_proto__pack_to_buffer(const Onnx__StringStringEntryProto *, ProtobufCBuffer *)");
            };
        };
    };
    return protobuf_c_message_pack_to_buffer(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))), buffer);
}
pub export fn onnx__string_string_entry_proto__unpack(arg_allocator: [*c]ProtobufCAllocator, arg_len: usize, arg_data: [*c]const u8) [*c]Onnx__StringStringEntryProto {
    var allocator = arg_allocator;
    _ = &allocator;
    var len = arg_len;
    _ = &len;
    var data = arg_data;
    _ = &data;
    return @as([*c]Onnx__StringStringEntryProto, @ptrCast(@alignCast(protobuf_c_message_unpack(&onnx__string_string_entry_proto__descriptor, allocator, len, data))));
}
pub export fn onnx__string_string_entry_proto__free_unpacked(arg_message: [*c]Onnx__StringStringEntryProto, arg_allocator: [*c]ProtobufCAllocator) void {
    var message = arg_message;
    _ = &message;
    var allocator = arg_allocator;
    _ = &allocator;
    if (!(message != null)) return;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__string_string_entry_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__string_string_entry_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 277))), "void onnx__string_string_entry_proto__free_unpacked(Onnx__StringStringEntryProto *, ProtobufCAllocator *)");
            };
        };
    };
    protobuf_c_message_free_unpacked(@as([*c]ProtobufCMessage, @ptrCast(@alignCast(message))), allocator);
}
pub export fn onnx__tensor_annotation__init(arg_message: [*c]Onnx__TensorAnnotation) void {
    var message = arg_message;
    _ = &message;
    const init_value = struct {
        const static: Onnx__TensorAnnotation = Onnx__TensorAnnotation{
            .base = ProtobufCMessage{
                .descriptor = &onnx__tensor_annotation__descriptor,
                .n_unknown_fields = @as(c_uint, @bitCast(@as(c_int, 0))),
                .unknown_fields = null,
            },
            .tensor_name = @as([*c]u8, @ptrCast(@volatileCast(@constCast(@as([*c]const u8, @ptrCast(@alignCast(&protobuf_c_empty_string))))))),
            .n_quant_parameter_tensor_names = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .quant_parameter_tensor_names = null,
        };
    };
    _ = &init_value;
    message.* = init_value.static;
}
pub export fn onnx__tensor_annotation__get_packed_size(arg_message: [*c]const Onnx__TensorAnnotation) usize {
    var message = arg_message;
    _ = &message;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__tensor_annotation__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__tensor_annotation__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 289))), "size_t onnx__tensor_annotation__get_packed_size(const Onnx__TensorAnnotation *)");
            };
        };
    };
    return protobuf_c_message_get_packed_size(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))));
}
pub export fn onnx__tensor_annotation__pack(arg_message: [*c]const Onnx__TensorAnnotation, arg_out: [*c]u8) usize {
    var message = arg_message;
    _ = &message;
    var out = arg_out;
    _ = &out;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__tensor_annotation__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__tensor_annotation__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 296))), "size_t onnx__tensor_annotation__pack(const Onnx__TensorAnnotation *, uint8_t *)");
            };
        };
    };
    return protobuf_c_message_pack(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))), out);
}
pub export fn onnx__tensor_annotation__pack_to_buffer(arg_message: [*c]const Onnx__TensorAnnotation, arg_buffer: [*c]ProtobufCBuffer) usize {
    var message = arg_message;
    _ = &message;
    var buffer = arg_buffer;
    _ = &buffer;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__tensor_annotation__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__tensor_annotation__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 303))), "size_t onnx__tensor_annotation__pack_to_buffer(const Onnx__TensorAnnotation *, ProtobufCBuffer *)");
            };
        };
    };
    return protobuf_c_message_pack_to_buffer(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))), buffer);
}
pub export fn onnx__tensor_annotation__unpack(arg_allocator: [*c]ProtobufCAllocator, arg_len: usize, arg_data: [*c]const u8) [*c]Onnx__TensorAnnotation {
    var allocator = arg_allocator;
    _ = &allocator;
    var len = arg_len;
    _ = &len;
    var data = arg_data;
    _ = &data;
    return @as([*c]Onnx__TensorAnnotation, @ptrCast(@alignCast(protobuf_c_message_unpack(&onnx__tensor_annotation__descriptor, allocator, len, data))));
}
pub export fn onnx__tensor_annotation__free_unpacked(arg_message: [*c]Onnx__TensorAnnotation, arg_allocator: [*c]ProtobufCAllocator) void {
    var message = arg_message;
    _ = &message;
    var allocator = arg_allocator;
    _ = &allocator;
    if (!(message != null)) return;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__tensor_annotation__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__tensor_annotation__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 322))), "void onnx__tensor_annotation__free_unpacked(Onnx__TensorAnnotation *, ProtobufCAllocator *)");
            };
        };
    };
    protobuf_c_message_free_unpacked(@as([*c]ProtobufCMessage, @ptrCast(@alignCast(message))), allocator);
}
pub export fn onnx__graph_proto__init(arg_message: [*c]Onnx__GraphProto) void {
    var message = arg_message;
    _ = &message;
    const init_value = struct {
        const static: Onnx__GraphProto = Onnx__GraphProto{
            .base = ProtobufCMessage{
                .descriptor = &onnx__graph_proto__descriptor,
                .n_unknown_fields = @as(c_uint, @bitCast(@as(c_int, 0))),
                .unknown_fields = null,
            },
            .n_node = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .node = null,
            .name = @as([*c]u8, @ptrCast(@volatileCast(@constCast(@as([*c]const u8, @ptrCast(@alignCast(&protobuf_c_empty_string))))))),
            .n_initializer = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .initializer = null,
            .n_sparse_initializer = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .sparse_initializer = null,
            .doc_string = @as([*c]u8, @ptrCast(@volatileCast(@constCast(@as([*c]const u8, @ptrCast(@alignCast(&protobuf_c_empty_string))))))),
            .n_input = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .input = null,
            .n_output = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .output = null,
            .n_value_info = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .value_info = null,
            .n_quantization_annotation = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .quantization_annotation = null,
            .n_metadata_props = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .metadata_props = null,
        };
    };
    _ = &init_value;
    message.* = init_value.static;
}
pub export fn onnx__graph_proto__get_packed_size(arg_message: [*c]const Onnx__GraphProto) usize {
    var message = arg_message;
    _ = &message;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__graph_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__graph_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 334))), "size_t onnx__graph_proto__get_packed_size(const Onnx__GraphProto *)");
            };
        };
    };
    return protobuf_c_message_get_packed_size(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))));
}
pub export fn onnx__graph_proto__pack(arg_message: [*c]const Onnx__GraphProto, arg_out: [*c]u8) usize {
    var message = arg_message;
    _ = &message;
    var out = arg_out;
    _ = &out;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__graph_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__graph_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 341))), "size_t onnx__graph_proto__pack(const Onnx__GraphProto *, uint8_t *)");
            };
        };
    };
    return protobuf_c_message_pack(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))), out);
}
pub export fn onnx__graph_proto__pack_to_buffer(arg_message: [*c]const Onnx__GraphProto, arg_buffer: [*c]ProtobufCBuffer) usize {
    var message = arg_message;
    _ = &message;
    var buffer = arg_buffer;
    _ = &buffer;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__graph_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__graph_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 348))), "size_t onnx__graph_proto__pack_to_buffer(const Onnx__GraphProto *, ProtobufCBuffer *)");
            };
        };
    };
    return protobuf_c_message_pack_to_buffer(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))), buffer);
}
pub export fn onnx__graph_proto__unpack(arg_allocator: [*c]ProtobufCAllocator, arg_len: usize, arg_data: [*c]const u8) [*c]Onnx__GraphProto {
    var allocator = arg_allocator;
    _ = &allocator;
    var len = arg_len;
    _ = &len;
    var data = arg_data;
    _ = &data;
    return @as([*c]Onnx__GraphProto, @ptrCast(@alignCast(protobuf_c_message_unpack(&onnx__graph_proto__descriptor, allocator, len, data))));
}
pub export fn onnx__graph_proto__free_unpacked(arg_message: [*c]Onnx__GraphProto, arg_allocator: [*c]ProtobufCAllocator) void {
    var message = arg_message;
    _ = &message;
    var allocator = arg_allocator;
    _ = &allocator;
    if (!(message != null)) return;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__graph_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__graph_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 367))), "void onnx__graph_proto__free_unpacked(Onnx__GraphProto *, ProtobufCAllocator *)");
            };
        };
    };
    protobuf_c_message_free_unpacked(@as([*c]ProtobufCMessage, @ptrCast(@alignCast(message))), allocator);
}
pub export fn onnx__tensor_proto__segment__init(arg_message: [*c]Onnx__TensorProto__Segment) void {
    var message = arg_message;
    _ = &message;
    const init_value = struct {
        const static: Onnx__TensorProto__Segment = Onnx__TensorProto__Segment{
            .base = ProtobufCMessage{
                .descriptor = &onnx__tensor_proto__segment__descriptor,
                .n_unknown_fields = @as(c_uint, @bitCast(@as(c_int, 0))),
                .unknown_fields = null,
            },
            .begin = @as(i64, @bitCast(@as(c_long, @as(c_int, 0)))),
            .end = @as(i64, @bitCast(@as(c_long, @as(c_int, 0)))),
        };
    };
    _ = &init_value;
    message.* = init_value.static;
}
pub export fn onnx__tensor_proto__init(arg_message: [*c]Onnx__TensorProto) void {
    var message = arg_message;
    _ = &message;
    const init_value = struct {
        const static: Onnx__TensorProto = Onnx__TensorProto{
            .base = ProtobufCMessage{
                .descriptor = &onnx__tensor_proto__descriptor,
                .n_unknown_fields = @as(c_uint, @bitCast(@as(c_int, 0))),
                .unknown_fields = null,
            },
            .n_dims = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .dims = null,
            .data_type = @as(c_int, 0),
            .segment = null,
            .n_float_data = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .float_data = null,
            .n_int32_data = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .int32_data = null,
            .n_string_data = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .string_data = null,
            .n_int64_data = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .int64_data = null,
            .name = @as([*c]u8, @ptrCast(@volatileCast(@constCast(@as([*c]const u8, @ptrCast(@alignCast(&protobuf_c_empty_string))))))),
            .doc_string = @as([*c]u8, @ptrCast(@volatileCast(@constCast(@as([*c]const u8, @ptrCast(@alignCast(&protobuf_c_empty_string))))))),
            .raw_data = ProtobufCBinaryData{
                .len = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
                .data = null,
            },
            .n_external_data = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .external_data = null,
            .data_location = @as(c_uint, @bitCast(ONNX__TENSOR_PROTO__DATA_LOCATION__DEFAULT)),
            .n_double_data = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .double_data = null,
            .n_uint64_data = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .uint64_data = null,
            .n_metadata_props = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .metadata_props = null,
        };
    };
    _ = &init_value;
    message.* = init_value.static;
}
pub export fn onnx__tensor_proto__get_packed_size(arg_message: [*c]const Onnx__TensorProto) usize {
    var message = arg_message;
    _ = &message;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__tensor_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__tensor_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 385))), "size_t onnx__tensor_proto__get_packed_size(const Onnx__TensorProto *)");
            };
        };
    };
    return protobuf_c_message_get_packed_size(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))));
}
pub export fn onnx__tensor_proto__pack(arg_message: [*c]const Onnx__TensorProto, arg_out: [*c]u8) usize {
    var message = arg_message;
    _ = &message;
    var out = arg_out;
    _ = &out;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__tensor_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__tensor_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 392))), "size_t onnx__tensor_proto__pack(const Onnx__TensorProto *, uint8_t *)");
            };
        };
    };
    return protobuf_c_message_pack(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))), out);
}
pub export fn onnx__tensor_proto__pack_to_buffer(arg_message: [*c]const Onnx__TensorProto, arg_buffer: [*c]ProtobufCBuffer) usize {
    var message = arg_message;
    _ = &message;
    var buffer = arg_buffer;
    _ = &buffer;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__tensor_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__tensor_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 399))), "size_t onnx__tensor_proto__pack_to_buffer(const Onnx__TensorProto *, ProtobufCBuffer *)");
            };
        };
    };
    return protobuf_c_message_pack_to_buffer(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))), buffer);
}
pub export fn onnx__tensor_proto__unpack(arg_allocator: [*c]ProtobufCAllocator, arg_len: usize, arg_data: [*c]const u8) [*c]Onnx__TensorProto {
    var allocator = arg_allocator;
    _ = &allocator;
    var len = arg_len;
    _ = &len;
    var data = arg_data;
    _ = &data;
    return @as([*c]Onnx__TensorProto, @ptrCast(@alignCast(protobuf_c_message_unpack(&onnx__tensor_proto__descriptor, allocator, len, data))));
}
pub export fn onnx__tensor_proto__free_unpacked(arg_message: [*c]Onnx__TensorProto, arg_allocator: [*c]ProtobufCAllocator) void {
    var message = arg_message;
    _ = &message;
    var allocator = arg_allocator;
    _ = &allocator;
    if (!(message != null)) return;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__tensor_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__tensor_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 418))), "void onnx__tensor_proto__free_unpacked(Onnx__TensorProto *, ProtobufCAllocator *)");
            };
        };
    };
    protobuf_c_message_free_unpacked(@as([*c]ProtobufCMessage, @ptrCast(@alignCast(message))), allocator);
}
pub export fn onnx__sparse_tensor_proto__init(arg_message: [*c]Onnx__SparseTensorProto) void {
    var message = arg_message;
    _ = &message;
    const init_value = struct {
        const static: Onnx__SparseTensorProto = Onnx__SparseTensorProto{
            .base = ProtobufCMessage{
                .descriptor = &onnx__sparse_tensor_proto__descriptor,
                .n_unknown_fields = @as(c_uint, @bitCast(@as(c_int, 0))),
                .unknown_fields = null,
            },
            .values = null,
            .indices = null,
            .n_dims = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .dims = null,
        };
    };
    _ = &init_value;
    message.* = init_value.static;
}
pub export fn onnx__sparse_tensor_proto__get_packed_size(arg_message: [*c]const Onnx__SparseTensorProto) usize {
    var message = arg_message;
    _ = &message;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__sparse_tensor_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__sparse_tensor_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 430))), "size_t onnx__sparse_tensor_proto__get_packed_size(const Onnx__SparseTensorProto *)");
            };
        };
    };
    return protobuf_c_message_get_packed_size(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))));
}
pub export fn onnx__sparse_tensor_proto__pack(arg_message: [*c]const Onnx__SparseTensorProto, arg_out: [*c]u8) usize {
    var message = arg_message;
    _ = &message;
    var out = arg_out;
    _ = &out;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__sparse_tensor_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__sparse_tensor_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 437))), "size_t onnx__sparse_tensor_proto__pack(const Onnx__SparseTensorProto *, uint8_t *)");
            };
        };
    };
    return protobuf_c_message_pack(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))), out);
}
pub export fn onnx__sparse_tensor_proto__pack_to_buffer(arg_message: [*c]const Onnx__SparseTensorProto, arg_buffer: [*c]ProtobufCBuffer) usize {
    var message = arg_message;
    _ = &message;
    var buffer = arg_buffer;
    _ = &buffer;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__sparse_tensor_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__sparse_tensor_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 444))), "size_t onnx__sparse_tensor_proto__pack_to_buffer(const Onnx__SparseTensorProto *, ProtobufCBuffer *)");
            };
        };
    };
    return protobuf_c_message_pack_to_buffer(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))), buffer);
}
pub export fn onnx__sparse_tensor_proto__unpack(arg_allocator: [*c]ProtobufCAllocator, arg_len: usize, arg_data: [*c]const u8) [*c]Onnx__SparseTensorProto {
    var allocator = arg_allocator;
    _ = &allocator;
    var len = arg_len;
    _ = &len;
    var data = arg_data;
    _ = &data;
    return @as([*c]Onnx__SparseTensorProto, @ptrCast(@alignCast(protobuf_c_message_unpack(&onnx__sparse_tensor_proto__descriptor, allocator, len, data))));
}
pub export fn onnx__sparse_tensor_proto__free_unpacked(arg_message: [*c]Onnx__SparseTensorProto, arg_allocator: [*c]ProtobufCAllocator) void {
    var message = arg_message;
    _ = &message;
    var allocator = arg_allocator;
    _ = &allocator;
    if (!(message != null)) return;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__sparse_tensor_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__sparse_tensor_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 463))), "void onnx__sparse_tensor_proto__free_unpacked(Onnx__SparseTensorProto *, ProtobufCAllocator *)");
            };
        };
    };
    protobuf_c_message_free_unpacked(@as([*c]ProtobufCMessage, @ptrCast(@alignCast(message))), allocator);
}
pub export fn onnx__tensor_shape_proto__dimension__init(arg_message: [*c]Onnx__TensorShapeProto__Dimension) void {
    var message = arg_message;
    _ = &message;
    const init_value = struct {
        const static: Onnx__TensorShapeProto__Dimension = Onnx__TensorShapeProto__Dimension{
            .base = ProtobufCMessage{
                .descriptor = &onnx__tensor_shape_proto__dimension__descriptor,
                .n_unknown_fields = @as(c_uint, @bitCast(@as(c_int, 0))),
                .unknown_fields = null,
            },
            .denotation = @as([*c]u8, @ptrCast(@volatileCast(@constCast(@as([*c]const u8, @ptrCast(@alignCast(&protobuf_c_empty_string))))))),
            .value_case = @as(c_uint, @bitCast(ONNX__TENSOR_SHAPE_PROTO__DIMENSION__VALUE__NOT_SET)),
            .unnamed_0 = union_unnamed_2{
                .dim_value = @as(i64, @bitCast(@as(c_long, @as(c_int, 0)))),
            },
        };
    };
    _ = &init_value;
    message.* = init_value.static;
}
pub export fn onnx__tensor_shape_proto__init(arg_message: [*c]Onnx__TensorShapeProto) void {
    var message = arg_message;
    _ = &message;
    const init_value = struct {
        const static: Onnx__TensorShapeProto = Onnx__TensorShapeProto{
            .base = ProtobufCMessage{
                .descriptor = &onnx__tensor_shape_proto__descriptor,
                .n_unknown_fields = @as(c_uint, @bitCast(@as(c_int, 0))),
                .unknown_fields = null,
            },
            .n_dim = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .dim = null,
        };
    };
    _ = &init_value;
    message.* = init_value.static;
}
pub export fn onnx__tensor_shape_proto__get_packed_size(arg_message: [*c]const Onnx__TensorShapeProto) usize {
    var message = arg_message;
    _ = &message;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__tensor_shape_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__tensor_shape_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 481))), "size_t onnx__tensor_shape_proto__get_packed_size(const Onnx__TensorShapeProto *)");
            };
        };
    };
    return protobuf_c_message_get_packed_size(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))));
}
pub export fn onnx__tensor_shape_proto__pack(arg_message: [*c]const Onnx__TensorShapeProto, arg_out: [*c]u8) usize {
    var message = arg_message;
    _ = &message;
    var out = arg_out;
    _ = &out;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__tensor_shape_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__tensor_shape_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 488))), "size_t onnx__tensor_shape_proto__pack(const Onnx__TensorShapeProto *, uint8_t *)");
            };
        };
    };
    return protobuf_c_message_pack(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))), out);
}
pub export fn onnx__tensor_shape_proto__pack_to_buffer(arg_message: [*c]const Onnx__TensorShapeProto, arg_buffer: [*c]ProtobufCBuffer) usize {
    var message = arg_message;
    _ = &message;
    var buffer = arg_buffer;
    _ = &buffer;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__tensor_shape_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__tensor_shape_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 495))), "size_t onnx__tensor_shape_proto__pack_to_buffer(const Onnx__TensorShapeProto *, ProtobufCBuffer *)");
            };
        };
    };
    return protobuf_c_message_pack_to_buffer(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))), buffer);
}
pub export fn onnx__tensor_shape_proto__unpack(arg_allocator: [*c]ProtobufCAllocator, arg_len: usize, arg_data: [*c]const u8) [*c]Onnx__TensorShapeProto {
    var allocator = arg_allocator;
    _ = &allocator;
    var len = arg_len;
    _ = &len;
    var data = arg_data;
    _ = &data;
    return @as([*c]Onnx__TensorShapeProto, @ptrCast(@alignCast(protobuf_c_message_unpack(&onnx__tensor_shape_proto__descriptor, allocator, len, data))));
}
pub export fn onnx__tensor_shape_proto__free_unpacked(arg_message: [*c]Onnx__TensorShapeProto, arg_allocator: [*c]ProtobufCAllocator) void {
    var message = arg_message;
    _ = &message;
    var allocator = arg_allocator;
    _ = &allocator;
    if (!(message != null)) return;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__tensor_shape_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__tensor_shape_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 514))), "void onnx__tensor_shape_proto__free_unpacked(Onnx__TensorShapeProto *, ProtobufCAllocator *)");
            };
        };
    };
    protobuf_c_message_free_unpacked(@as([*c]ProtobufCMessage, @ptrCast(@alignCast(message))), allocator);
}
pub export fn onnx__type_proto__tensor__init(arg_message: [*c]Onnx__TypeProto__Tensor) void {
    var message = arg_message;
    _ = &message;
    const init_value = struct {
        const static: Onnx__TypeProto__Tensor = Onnx__TypeProto__Tensor{
            .base = ProtobufCMessage{
                .descriptor = &onnx__type_proto__tensor__descriptor,
                .n_unknown_fields = @as(c_uint, @bitCast(@as(c_int, 0))),
                .unknown_fields = null,
            },
            .elem_type = @as(c_int, 0),
            .shape = null,
        };
    };
    _ = &init_value;
    message.* = init_value.static;
}
pub export fn onnx__type_proto__sequence__init(arg_message: [*c]Onnx__TypeProto__Sequence) void {
    var message = arg_message;
    _ = &message;
    const init_value = struct {
        const static: Onnx__TypeProto__Sequence = Onnx__TypeProto__Sequence{
            .base = ProtobufCMessage{
                .descriptor = &onnx__type_proto__sequence__descriptor,
                .n_unknown_fields = @as(c_uint, @bitCast(@as(c_int, 0))),
                .unknown_fields = null,
            },
            .elem_type = null,
        };
    };
    _ = &init_value;
    message.* = init_value.static;
}
pub export fn onnx__type_proto__map__init(arg_message: [*c]Onnx__TypeProto__Map) void {
    var message = arg_message;
    _ = &message;
    const init_value = struct {
        const static: Onnx__TypeProto__Map = Onnx__TypeProto__Map{
            .base = ProtobufCMessage{
                .descriptor = &onnx__type_proto__map__descriptor,
                .n_unknown_fields = @as(c_uint, @bitCast(@as(c_int, 0))),
                .unknown_fields = null,
            },
            .key_type = @as(c_int, 0),
            .value_type = null,
        };
    };
    _ = &init_value;
    message.* = init_value.static;
}
pub export fn onnx__type_proto__optional__init(arg_message: [*c]Onnx__TypeProto__Optional) void {
    var message = arg_message;
    _ = &message;
    const init_value = struct {
        const static: Onnx__TypeProto__Optional = Onnx__TypeProto__Optional{
            .base = ProtobufCMessage{
                .descriptor = &onnx__type_proto__optional__descriptor,
                .n_unknown_fields = @as(c_uint, @bitCast(@as(c_int, 0))),
                .unknown_fields = null,
            },
            .elem_type = null,
        };
    };
    _ = &init_value;
    message.* = init_value.static;
}
pub export fn onnx__type_proto__sparse_tensor__init(arg_message: [*c]Onnx__TypeProto__SparseTensor) void {
    var message = arg_message;
    _ = &message;
    const init_value = struct {
        const static: Onnx__TypeProto__SparseTensor = Onnx__TypeProto__SparseTensor{
            .base = ProtobufCMessage{
                .descriptor = &onnx__type_proto__sparse_tensor__descriptor,
                .n_unknown_fields = @as(c_uint, @bitCast(@as(c_int, 0))),
                .unknown_fields = null,
            },
            .elem_type = @as(c_int, 0),
            .shape = null,
        };
    };
    _ = &init_value;
    message.* = init_value.static;
}
pub export fn onnx__type_proto__init(arg_message: [*c]Onnx__TypeProto) void {
    var message = arg_message;
    _ = &message;
    const init_value = struct {
        const static: Onnx__TypeProto = Onnx__TypeProto{
            .base = ProtobufCMessage{
                .descriptor = &onnx__type_proto__descriptor,
                .n_unknown_fields = @as(c_uint, @bitCast(@as(c_int, 0))),
                .unknown_fields = null,
            },
            .denotation = @as([*c]u8, @ptrCast(@volatileCast(@constCast(@as([*c]const u8, @ptrCast(@alignCast(&protobuf_c_empty_string))))))),
            .value_case = @as(c_uint, @bitCast(ONNX__TYPE_PROTO__VALUE__NOT_SET)),
            .unnamed_0 = union_unnamed_1{
                .tensor_type = null,
            },
        };
    };
    _ = &init_value;
    message.* = init_value.static;
}
pub export fn onnx__type_proto__get_packed_size(arg_message: [*c]const Onnx__TypeProto) usize {
    var message = arg_message;
    _ = &message;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__type_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__type_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 556))), "size_t onnx__type_proto__get_packed_size(const Onnx__TypeProto *)");
            };
        };
    };
    return protobuf_c_message_get_packed_size(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))));
}
pub export fn onnx__type_proto__pack(arg_message: [*c]const Onnx__TypeProto, arg_out: [*c]u8) usize {
    var message = arg_message;
    _ = &message;
    var out = arg_out;
    _ = &out;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__type_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__type_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 563))), "size_t onnx__type_proto__pack(const Onnx__TypeProto *, uint8_t *)");
            };
        };
    };
    return protobuf_c_message_pack(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))), out);
}
pub export fn onnx__type_proto__pack_to_buffer(arg_message: [*c]const Onnx__TypeProto, arg_buffer: [*c]ProtobufCBuffer) usize {
    var message = arg_message;
    _ = &message;
    var buffer = arg_buffer;
    _ = &buffer;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__type_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__type_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 570))), "size_t onnx__type_proto__pack_to_buffer(const Onnx__TypeProto *, ProtobufCBuffer *)");
            };
        };
    };
    return protobuf_c_message_pack_to_buffer(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))), buffer);
}
pub export fn onnx__type_proto__unpack(arg_allocator: [*c]ProtobufCAllocator, arg_len: usize, arg_data: [*c]const u8) [*c]Onnx__TypeProto {
    var allocator = arg_allocator;
    _ = &allocator;
    var len = arg_len;
    _ = &len;
    var data = arg_data;
    _ = &data;
    return @as([*c]Onnx__TypeProto, @ptrCast(@alignCast(protobuf_c_message_unpack(&onnx__type_proto__descriptor, allocator, len, data))));
}
pub export fn onnx__type_proto__free_unpacked(arg_message: [*c]Onnx__TypeProto, arg_allocator: [*c]ProtobufCAllocator) void {
    var message = arg_message;
    _ = &message;
    var allocator = arg_allocator;
    _ = &allocator;
    if (!(message != null)) return;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__type_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__type_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 589))), "void onnx__type_proto__free_unpacked(Onnx__TypeProto *, ProtobufCAllocator *)");
            };
        };
    };
    protobuf_c_message_free_unpacked(@as([*c]ProtobufCMessage, @ptrCast(@alignCast(message))), allocator);
}
pub export fn onnx__operator_set_id_proto__init(arg_message: [*c]Onnx__OperatorSetIdProto) void {
    var message = arg_message;
    _ = &message;
    const init_value = struct {
        const static: Onnx__OperatorSetIdProto = Onnx__OperatorSetIdProto{
            .base = ProtobufCMessage{
                .descriptor = &onnx__operator_set_id_proto__descriptor,
                .n_unknown_fields = @as(c_uint, @bitCast(@as(c_int, 0))),
                .unknown_fields = null,
            },
            .domain = @as([*c]u8, @ptrCast(@volatileCast(@constCast(@as([*c]const u8, @ptrCast(@alignCast(&protobuf_c_empty_string))))))),
            .version = @as(i64, @bitCast(@as(c_long, @as(c_int, 0)))),
        };
    };
    _ = &init_value;
    message.* = init_value.static;
}
pub export fn onnx__operator_set_id_proto__get_packed_size(arg_message: [*c]const Onnx__OperatorSetIdProto) usize {
    var message = arg_message;
    _ = &message;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__operator_set_id_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__operator_set_id_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 601))), "size_t onnx__operator_set_id_proto__get_packed_size(const Onnx__OperatorSetIdProto *)");
            };
        };
    };
    return protobuf_c_message_get_packed_size(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))));
}
pub export fn onnx__operator_set_id_proto__pack(arg_message: [*c]const Onnx__OperatorSetIdProto, arg_out: [*c]u8) usize {
    var message = arg_message;
    _ = &message;
    var out = arg_out;
    _ = &out;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__operator_set_id_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__operator_set_id_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 608))), "size_t onnx__operator_set_id_proto__pack(const Onnx__OperatorSetIdProto *, uint8_t *)");
            };
        };
    };
    return protobuf_c_message_pack(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))), out);
}
pub export fn onnx__operator_set_id_proto__pack_to_buffer(arg_message: [*c]const Onnx__OperatorSetIdProto, arg_buffer: [*c]ProtobufCBuffer) usize {
    var message = arg_message;
    _ = &message;
    var buffer = arg_buffer;
    _ = &buffer;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__operator_set_id_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__operator_set_id_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 615))), "size_t onnx__operator_set_id_proto__pack_to_buffer(const Onnx__OperatorSetIdProto *, ProtobufCBuffer *)");
            };
        };
    };
    return protobuf_c_message_pack_to_buffer(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))), buffer);
}
pub export fn onnx__operator_set_id_proto__unpack(arg_allocator: [*c]ProtobufCAllocator, arg_len: usize, arg_data: [*c]const u8) [*c]Onnx__OperatorSetIdProto {
    var allocator = arg_allocator;
    _ = &allocator;
    var len = arg_len;
    _ = &len;
    var data = arg_data;
    _ = &data;
    return @as([*c]Onnx__OperatorSetIdProto, @ptrCast(@alignCast(protobuf_c_message_unpack(&onnx__operator_set_id_proto__descriptor, allocator, len, data))));
}
pub export fn onnx__operator_set_id_proto__free_unpacked(arg_message: [*c]Onnx__OperatorSetIdProto, arg_allocator: [*c]ProtobufCAllocator) void {
    var message = arg_message;
    _ = &message;
    var allocator = arg_allocator;
    _ = &allocator;
    if (!(message != null)) return;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__operator_set_id_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__operator_set_id_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 634))), "void onnx__operator_set_id_proto__free_unpacked(Onnx__OperatorSetIdProto *, ProtobufCAllocator *)");
            };
        };
    };
    protobuf_c_message_free_unpacked(@as([*c]ProtobufCMessage, @ptrCast(@alignCast(message))), allocator);
}
pub export fn onnx__function_proto__init(arg_message: [*c]Onnx__FunctionProto) void {
    var message = arg_message;
    _ = &message;
    const init_value = struct {
        const static: Onnx__FunctionProto = Onnx__FunctionProto{
            .base = ProtobufCMessage{
                .descriptor = &onnx__function_proto__descriptor,
                .n_unknown_fields = @as(c_uint, @bitCast(@as(c_int, 0))),
                .unknown_fields = null,
            },
            .name = @as([*c]u8, @ptrCast(@volatileCast(@constCast(@as([*c]const u8, @ptrCast(@alignCast(&protobuf_c_empty_string))))))),
            .n_input = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .input = null,
            .n_output = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .output = null,
            .n_attribute = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .attribute = null,
            .n_attribute_proto = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .attribute_proto = null,
            .n_node = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .node = null,
            .doc_string = @as([*c]u8, @ptrCast(@volatileCast(@constCast(@as([*c]const u8, @ptrCast(@alignCast(&protobuf_c_empty_string))))))),
            .n_opset_import = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .opset_import = null,
            .domain = @as([*c]u8, @ptrCast(@volatileCast(@constCast(@as([*c]const u8, @ptrCast(@alignCast(&protobuf_c_empty_string))))))),
            .overload = @as([*c]u8, @ptrCast(@volatileCast(@constCast(@as([*c]const u8, @ptrCast(@alignCast(&protobuf_c_empty_string))))))),
            .n_value_info = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .value_info = null,
            .n_metadata_props = @as(usize, @bitCast(@as(c_long, @as(c_int, 0)))),
            .metadata_props = null,
        };
    };
    _ = &init_value;
    message.* = init_value.static;
}
pub export fn onnx__function_proto__get_packed_size(arg_message: [*c]const Onnx__FunctionProto) usize {
    var message = arg_message;
    _ = &message;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__function_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__function_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 646))), "size_t onnx__function_proto__get_packed_size(const Onnx__FunctionProto *)");
            };
        };
    };
    return protobuf_c_message_get_packed_size(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))));
}
pub export fn onnx__function_proto__pack(arg_message: [*c]const Onnx__FunctionProto, arg_out: [*c]u8) usize {
    var message = arg_message;
    _ = &message;
    var out = arg_out;
    _ = &out;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__function_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__function_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 653))), "size_t onnx__function_proto__pack(const Onnx__FunctionProto *, uint8_t *)");
            };
        };
    };
    return protobuf_c_message_pack(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))), out);
}
pub export fn onnx__function_proto__pack_to_buffer(arg_message: [*c]const Onnx__FunctionProto, arg_buffer: [*c]ProtobufCBuffer) usize {
    var message = arg_message;
    _ = &message;
    var buffer = arg_buffer;
    _ = &buffer;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__function_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__function_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 660))), "size_t onnx__function_proto__pack_to_buffer(const Onnx__FunctionProto *, ProtobufCBuffer *)");
            };
        };
    };
    return protobuf_c_message_pack_to_buffer(@as([*c]const ProtobufCMessage, @ptrCast(@alignCast(message))), buffer);
}
pub export fn onnx__function_proto__unpack(arg_allocator: [*c]ProtobufCAllocator, arg_len: usize, arg_data: [*c]const u8) [*c]Onnx__FunctionProto {
    var allocator = arg_allocator;
    _ = &allocator;
    var len = arg_len;
    _ = &len;
    var data = arg_data;
    _ = &data;
    return @as([*c]Onnx__FunctionProto, @ptrCast(@alignCast(protobuf_c_message_unpack(&onnx__function_proto__descriptor, allocator, len, data))));
}
pub export fn onnx__function_proto__free_unpacked(arg_message: [*c]Onnx__FunctionProto, arg_allocator: [*c]ProtobufCAllocator) void {
    var message = arg_message;
    _ = &message;
    var allocator = arg_allocator;
    _ = &allocator;
    if (!(message != null)) return;
    _ = blk: {
        _ = @sizeOf(c_int);
        break :blk blk_1: {
            break :blk_1 if (message.*.base.descriptor == (&onnx__function_proto__descriptor)) {} else {
                __assert_fail("message->base.descriptor == &onnx__function_proto__descriptor", "src/proto/onnx.proto3.pb-c.c", @as(c_uint, @bitCast(@as(c_int, 679))), "void onnx__function_proto__free_unpacked(Onnx__FunctionProto *, ProtobufCAllocator *)");
            };
        };
    };
    protobuf_c_message_free_unpacked(@as([*c]ProtobufCMessage, @ptrCast(@alignCast(message))), allocator);
}
pub const Onnx__AttributeProto_Closure = ?*const fn ([*c]const Onnx__AttributeProto, ?*anyopaque) callconv(.c) void;
pub const Onnx__ValueInfoProto_Closure = ?*const fn ([*c]const Onnx__ValueInfoProto, ?*anyopaque) callconv(.c) void;
pub const Onnx__NodeProto_Closure = ?*const fn ([*c]const Onnx__NodeProto, ?*anyopaque) callconv(.c) void;
pub const Onnx__TrainingInfoProto_Closure = ?*const fn ([*c]const Onnx__TrainingInfoProto, ?*anyopaque) callconv(.c) void;
pub const Onnx__ModelProto_Closure = ?*const fn ([*c]const Onnx__ModelProto, ?*anyopaque) callconv(.c) void;
pub const Onnx__StringStringEntryProto_Closure = ?*const fn ([*c]const Onnx__StringStringEntryProto, ?*anyopaque) callconv(.c) void;
pub const Onnx__TensorAnnotation_Closure = ?*const fn ([*c]const Onnx__TensorAnnotation, ?*anyopaque) callconv(.c) void;
pub const Onnx__GraphProto_Closure = ?*const fn ([*c]const Onnx__GraphProto, ?*anyopaque) callconv(.c) void;
pub const Onnx__TensorProto__Segment_Closure = ?*const fn ([*c]const Onnx__TensorProto__Segment, ?*anyopaque) callconv(.c) void;
pub const Onnx__TensorProto_Closure = ?*const fn ([*c]const Onnx__TensorProto, ?*anyopaque) callconv(.c) void;
pub const Onnx__SparseTensorProto_Closure = ?*const fn ([*c]const Onnx__SparseTensorProto, ?*anyopaque) callconv(.c) void;
pub const Onnx__TensorShapeProto__Dimension_Closure = ?*const fn ([*c]const Onnx__TensorShapeProto__Dimension, ?*anyopaque) callconv(.c) void;
pub const Onnx__TensorShapeProto_Closure = ?*const fn ([*c]const Onnx__TensorShapeProto, ?*anyopaque) callconv(.c) void;
pub const Onnx__TypeProto__Tensor_Closure = ?*const fn ([*c]const Onnx__TypeProto__Tensor, ?*anyopaque) callconv(.c) void;
pub const Onnx__TypeProto__Sequence_Closure = ?*const fn ([*c]const Onnx__TypeProto__Sequence, ?*anyopaque) callconv(.c) void;
pub const Onnx__TypeProto__Map_Closure = ?*const fn ([*c]const Onnx__TypeProto__Map, ?*anyopaque) callconv(.c) void;
pub const Onnx__TypeProto__Optional_Closure = ?*const fn ([*c]const Onnx__TypeProto__Optional, ?*anyopaque) callconv(.c) void;
pub const Onnx__TypeProto__SparseTensor_Closure = ?*const fn ([*c]const Onnx__TypeProto__SparseTensor, ?*anyopaque) callconv(.c) void;
pub const Onnx__TypeProto_Closure = ?*const fn ([*c]const Onnx__TypeProto, ?*anyopaque) callconv(.c) void;
pub const Onnx__OperatorSetIdProto_Closure = ?*const fn ([*c]const Onnx__OperatorSetIdProto, ?*anyopaque) callconv(.c) void;
pub const Onnx__FunctionProto_Closure = ?*const fn ([*c]const Onnx__FunctionProto, ?*anyopaque) callconv(.c) void;
pub extern const onnx__version__descriptor: ProtobufCEnumDescriptor;
pub extern const onnx__operator_status__descriptor: ProtobufCEnumDescriptor;
pub extern const onnx__attribute_proto__descriptor: ProtobufCMessageDescriptor;
pub extern const onnx__attribute_proto__attribute_type__descriptor: ProtobufCEnumDescriptor;
pub extern const onnx__value_info_proto__descriptor: ProtobufCMessageDescriptor;
pub extern const onnx__node_proto__descriptor: ProtobufCMessageDescriptor;
pub extern const onnx__training_info_proto__descriptor: ProtobufCMessageDescriptor;
pub extern const onnx__model_proto__descriptor: ProtobufCMessageDescriptor;
pub extern const onnx__string_string_entry_proto__descriptor: ProtobufCMessageDescriptor;
pub extern const onnx__tensor_annotation__descriptor: ProtobufCMessageDescriptor;
pub extern const onnx__graph_proto__descriptor: ProtobufCMessageDescriptor;
pub extern const onnx__tensor_proto__descriptor: ProtobufCMessageDescriptor;
pub extern const onnx__tensor_proto__segment__descriptor: ProtobufCMessageDescriptor;
pub extern const onnx__tensor_proto__data_type__descriptor: ProtobufCEnumDescriptor;
pub extern const onnx__tensor_proto__data_location__descriptor: ProtobufCEnumDescriptor;
pub extern const onnx__sparse_tensor_proto__descriptor: ProtobufCMessageDescriptor;
pub extern const onnx__tensor_shape_proto__descriptor: ProtobufCMessageDescriptor;
pub extern const onnx__tensor_shape_proto__dimension__descriptor: ProtobufCMessageDescriptor;
pub extern const onnx__type_proto__descriptor: ProtobufCMessageDescriptor;
pub extern const onnx__type_proto__tensor__descriptor: ProtobufCMessageDescriptor;
pub extern const onnx__type_proto__sequence__descriptor: ProtobufCMessageDescriptor;
pub extern const onnx__type_proto__map__descriptor: ProtobufCMessageDescriptor;
pub extern const onnx__type_proto__optional__descriptor: ProtobufCMessageDescriptor;
pub extern const onnx__type_proto__sparse_tensor__descriptor: ProtobufCMessageDescriptor;
pub extern const onnx__operator_set_id_proto__descriptor: ProtobufCMessageDescriptor;
pub extern const onnx__function_proto__descriptor: ProtobufCMessageDescriptor;
pub const onnx__attribute_proto__attribute_type__enum_values_by_number: [15]ProtobufCEnumValue = [15]ProtobufCEnumValue{
    ProtobufCEnumValue{
        .name = "UNDEFINED",
        .c_name = "ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__UNDEFINED",
        .value = @as(c_int, 0),
    },
    ProtobufCEnumValue{
        .name = "FLOAT",
        .c_name = "ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__FLOAT",
        .value = @as(c_int, 1),
    },
    ProtobufCEnumValue{
        .name = "INT",
        .c_name = "ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__INT",
        .value = @as(c_int, 2),
    },
    ProtobufCEnumValue{
        .name = "STRING",
        .c_name = "ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__STRING",
        .value = @as(c_int, 3),
    },
    ProtobufCEnumValue{
        .name = "TENSOR",
        .c_name = "ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__TENSOR",
        .value = @as(c_int, 4),
    },
    ProtobufCEnumValue{
        .name = "GRAPH",
        .c_name = "ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__GRAPH",
        .value = @as(c_int, 5),
    },
    ProtobufCEnumValue{
        .name = "FLOATS",
        .c_name = "ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__FLOATS",
        .value = @as(c_int, 6),
    },
    ProtobufCEnumValue{
        .name = "INTS",
        .c_name = "ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__INTS",
        .value = @as(c_int, 7),
    },
    ProtobufCEnumValue{
        .name = "STRINGS",
        .c_name = "ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__STRINGS",
        .value = @as(c_int, 8),
    },
    ProtobufCEnumValue{
        .name = "TENSORS",
        .c_name = "ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__TENSORS",
        .value = @as(c_int, 9),
    },
    ProtobufCEnumValue{
        .name = "GRAPHS",
        .c_name = "ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__GRAPHS",
        .value = @as(c_int, 10),
    },
    ProtobufCEnumValue{
        .name = "SPARSE_TENSOR",
        .c_name = "ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__SPARSE_TENSOR",
        .value = @as(c_int, 11),
    },
    ProtobufCEnumValue{
        .name = "SPARSE_TENSORS",
        .c_name = "ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__SPARSE_TENSORS",
        .value = @as(c_int, 12),
    },
    ProtobufCEnumValue{
        .name = "TYPE_PROTO",
        .c_name = "ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__TYPE_PROTO",
        .value = @as(c_int, 13),
    },
    ProtobufCEnumValue{
        .name = "TYPE_PROTOS",
        .c_name = "ONNX__ATTRIBUTE_PROTO__ATTRIBUTE_TYPE__TYPE_PROTOS",
        .value = @as(c_int, 14),
    },
};
pub const onnx__attribute_proto__attribute_type__value_ranges: [2]ProtobufCIntRange = [2]ProtobufCIntRange{
    ProtobufCIntRange{
        .start_value = @as(c_int, 0),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 0))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 0),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 15))),
    },
};
pub const onnx__attribute_proto__attribute_type__enum_values_by_name: [15]ProtobufCEnumValueIndex = [15]ProtobufCEnumValueIndex{
    ProtobufCEnumValueIndex{
        .name = "FLOAT",
        .index = @as(c_uint, @bitCast(@as(c_int, 1))),
    },
    ProtobufCEnumValueIndex{
        .name = "FLOATS",
        .index = @as(c_uint, @bitCast(@as(c_int, 6))),
    },
    ProtobufCEnumValueIndex{
        .name = "GRAPH",
        .index = @as(c_uint, @bitCast(@as(c_int, 5))),
    },
    ProtobufCEnumValueIndex{
        .name = "GRAPHS",
        .index = @as(c_uint, @bitCast(@as(c_int, 10))),
    },
    ProtobufCEnumValueIndex{
        .name = "INT",
        .index = @as(c_uint, @bitCast(@as(c_int, 2))),
    },
    ProtobufCEnumValueIndex{
        .name = "INTS",
        .index = @as(c_uint, @bitCast(@as(c_int, 7))),
    },
    ProtobufCEnumValueIndex{
        .name = "SPARSE_TENSOR",
        .index = @as(c_uint, @bitCast(@as(c_int, 11))),
    },
    ProtobufCEnumValueIndex{
        .name = "SPARSE_TENSORS",
        .index = @as(c_uint, @bitCast(@as(c_int, 12))),
    },
    ProtobufCEnumValueIndex{
        .name = "STRING",
        .index = @as(c_uint, @bitCast(@as(c_int, 3))),
    },
    ProtobufCEnumValueIndex{
        .name = "STRINGS",
        .index = @as(c_uint, @bitCast(@as(c_int, 8))),
    },
    ProtobufCEnumValueIndex{
        .name = "TENSOR",
        .index = @as(c_uint, @bitCast(@as(c_int, 4))),
    },
    ProtobufCEnumValueIndex{
        .name = "TENSORS",
        .index = @as(c_uint, @bitCast(@as(c_int, 9))),
    },
    ProtobufCEnumValueIndex{
        .name = "TYPE_PROTO",
        .index = @as(c_uint, @bitCast(@as(c_int, 13))),
    },
    ProtobufCEnumValueIndex{
        .name = "TYPE_PROTOS",
        .index = @as(c_uint, @bitCast(@as(c_int, 14))),
    },
    ProtobufCEnumValueIndex{
        .name = "UNDEFINED",
        .index = @as(c_uint, @bitCast(@as(c_int, 0))),
    },
};
pub const onnx__attribute_proto__field_descriptors: [18]ProtobufCFieldDescriptor = [18]ProtobufCFieldDescriptor{
    ProtobufCFieldDescriptor{
        .name = "name",
        .id = @as(u32, @bitCast(@as(c_int, 1))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_STRING)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__AttributeProto, "name"))))),
        .descriptor = null,
        .default_value = @as(?*const anyopaque, @ptrCast(&protobuf_c_empty_string)),
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "f",
        .id = @as(u32, @bitCast(@as(c_int, 2))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_FLOAT)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__AttributeProto, "f"))))),
        .descriptor = null,
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "i",
        .id = @as(u32, @bitCast(@as(c_int, 3))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_INT64)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__AttributeProto, "i"))))),
        .descriptor = null,
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "s",
        .id = @as(u32, @bitCast(@as(c_int, 4))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_BYTES)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__AttributeProto, "s"))))),
        .descriptor = null,
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "t",
        .id = @as(u32, @bitCast(@as(c_int, 5))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__AttributeProto, "t"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__tensor_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "g",
        .id = @as(u32, @bitCast(@as(c_int, 6))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__AttributeProto, "g"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__graph_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "floats",
        .id = @as(u32, @bitCast(@as(c_int, 7))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_FLOAT)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__AttributeProto, "n_floats"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__AttributeProto, "floats"))))),
        .descriptor = null,
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0) | PROTOBUF_C_FIELD_FLAG_PACKED)),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "ints",
        .id = @as(u32, @bitCast(@as(c_int, 8))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_INT64)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__AttributeProto, "n_ints"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__AttributeProto, "ints"))))),
        .descriptor = null,
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0) | PROTOBUF_C_FIELD_FLAG_PACKED)),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "strings",
        .id = @as(u32, @bitCast(@as(c_int, 9))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_BYTES)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__AttributeProto, "n_strings"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__AttributeProto, "strings"))))),
        .descriptor = null,
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "tensors",
        .id = @as(u32, @bitCast(@as(c_int, 10))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__AttributeProto, "n_tensors"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__AttributeProto, "tensors"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__tensor_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "graphs",
        .id = @as(u32, @bitCast(@as(c_int, 11))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__AttributeProto, "n_graphs"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__AttributeProto, "graphs"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__graph_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "doc_string",
        .id = @as(u32, @bitCast(@as(c_int, 13))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_STRING)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__AttributeProto, "doc_string"))))),
        .descriptor = null,
        .default_value = @as(?*const anyopaque, @ptrCast(&protobuf_c_empty_string)),
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "tp",
        .id = @as(u32, @bitCast(@as(c_int, 14))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__AttributeProto, "tp"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__type_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "type_protos",
        .id = @as(u32, @bitCast(@as(c_int, 15))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__AttributeProto, "n_type_protos"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__AttributeProto, "type_protos"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__type_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "type",
        .id = @as(u32, @bitCast(@as(c_int, 20))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_ENUM)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__AttributeProto, "type"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__attribute_proto__attribute_type__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "ref_attr_name",
        .id = @as(u32, @bitCast(@as(c_int, 21))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_STRING)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__AttributeProto, "ref_attr_name"))))),
        .descriptor = null,
        .default_value = @as(?*const anyopaque, @ptrCast(&protobuf_c_empty_string)),
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "sparse_tensor",
        .id = @as(u32, @bitCast(@as(c_int, 22))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__AttributeProto, "sparse_tensor"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__sparse_tensor_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "sparse_tensors",
        .id = @as(u32, @bitCast(@as(c_int, 23))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__AttributeProto, "n_sparse_tensors"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__AttributeProto, "sparse_tensors"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__sparse_tensor_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
};
pub const onnx__attribute_proto__field_indices_by_name: [18]c_uint = [18]c_uint{
    11,
    1,
    6,
    5,
    10,
    2,
    7,
    0,
    15,
    3,
    16,
    17,
    8,
    4,
    9,
    12,
    14,
    13,
};
pub const onnx__attribute_proto__number_ranges: [4]ProtobufCIntRange = [4]ProtobufCIntRange{
    ProtobufCIntRange{
        .start_value = @as(c_int, 1),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 0))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 13),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 11))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 20),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 14))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 0),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 18))),
    },
};
pub const onnx__value_info_proto__field_descriptors: [4]ProtobufCFieldDescriptor = [4]ProtobufCFieldDescriptor{
    ProtobufCFieldDescriptor{
        .name = "name",
        .id = @as(u32, @bitCast(@as(c_int, 1))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_STRING)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__ValueInfoProto, "name"))))),
        .descriptor = null,
        .default_value = @as(?*const anyopaque, @ptrCast(&protobuf_c_empty_string)),
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "type",
        .id = @as(u32, @bitCast(@as(c_int, 2))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__ValueInfoProto, "type"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__type_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "doc_string",
        .id = @as(u32, @bitCast(@as(c_int, 3))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_STRING)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__ValueInfoProto, "doc_string"))))),
        .descriptor = null,
        .default_value = @as(?*const anyopaque, @ptrCast(&protobuf_c_empty_string)),
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "metadata_props",
        .id = @as(u32, @bitCast(@as(c_int, 4))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__ValueInfoProto, "n_metadata_props"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__ValueInfoProto, "metadata_props"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__string_string_entry_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
};
pub const onnx__value_info_proto__field_indices_by_name: [4]c_uint = [4]c_uint{
    2,
    3,
    0,
    1,
};
pub const onnx__value_info_proto__number_ranges: [2]ProtobufCIntRange = [2]ProtobufCIntRange{
    ProtobufCIntRange{
        .start_value = @as(c_int, 1),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 0))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 0),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 4))),
    },
};
pub const onnx__node_proto__field_descriptors: [9]ProtobufCFieldDescriptor = [9]ProtobufCFieldDescriptor{
    ProtobufCFieldDescriptor{
        .name = "input",
        .id = @as(u32, @bitCast(@as(c_int, 1))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_STRING)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__NodeProto, "n_input"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__NodeProto, "input"))))),
        .descriptor = null,
        .default_value = @as(?*const anyopaque, @ptrCast(&protobuf_c_empty_string)),
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "output",
        .id = @as(u32, @bitCast(@as(c_int, 2))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_STRING)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__NodeProto, "n_output"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__NodeProto, "output"))))),
        .descriptor = null,
        .default_value = @as(?*const anyopaque, @ptrCast(&protobuf_c_empty_string)),
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "name",
        .id = @as(u32, @bitCast(@as(c_int, 3))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_STRING)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__NodeProto, "name"))))),
        .descriptor = null,
        .default_value = @as(?*const anyopaque, @ptrCast(&protobuf_c_empty_string)),
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "op_type",
        .id = @as(u32, @bitCast(@as(c_int, 4))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_STRING)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__NodeProto, "op_type"))))),
        .descriptor = null,
        .default_value = @as(?*const anyopaque, @ptrCast(&protobuf_c_empty_string)),
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "attribute",
        .id = @as(u32, @bitCast(@as(c_int, 5))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__NodeProto, "n_attribute"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__NodeProto, "attribute"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__attribute_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "doc_string",
        .id = @as(u32, @bitCast(@as(c_int, 6))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_STRING)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__NodeProto, "doc_string"))))),
        .descriptor = null,
        .default_value = @as(?*const anyopaque, @ptrCast(&protobuf_c_empty_string)),
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "domain",
        .id = @as(u32, @bitCast(@as(c_int, 7))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_STRING)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__NodeProto, "domain"))))),
        .descriptor = null,
        .default_value = @as(?*const anyopaque, @ptrCast(&protobuf_c_empty_string)),
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "overload",
        .id = @as(u32, @bitCast(@as(c_int, 8))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_STRING)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__NodeProto, "overload"))))),
        .descriptor = null,
        .default_value = @as(?*const anyopaque, @ptrCast(&protobuf_c_empty_string)),
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "metadata_props",
        .id = @as(u32, @bitCast(@as(c_int, 9))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__NodeProto, "n_metadata_props"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__NodeProto, "metadata_props"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__string_string_entry_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
};
pub const onnx__node_proto__field_indices_by_name: [9]c_uint = [9]c_uint{
    4,
    5,
    6,
    0,
    8,
    2,
    3,
    1,
    7,
};
pub const onnx__node_proto__number_ranges: [2]ProtobufCIntRange = [2]ProtobufCIntRange{
    ProtobufCIntRange{
        .start_value = @as(c_int, 1),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 0))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 0),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 9))),
    },
};
pub const onnx__training_info_proto__field_descriptors: [4]ProtobufCFieldDescriptor = [4]ProtobufCFieldDescriptor{
    ProtobufCFieldDescriptor{
        .name = "initialization",
        .id = @as(u32, @bitCast(@as(c_int, 1))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TrainingInfoProto, "initialization"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__graph_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "algorithm",
        .id = @as(u32, @bitCast(@as(c_int, 2))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TrainingInfoProto, "algorithm"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__graph_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "initialization_binding",
        .id = @as(u32, @bitCast(@as(c_int, 3))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TrainingInfoProto, "n_initialization_binding"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TrainingInfoProto, "initialization_binding"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__string_string_entry_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "update_binding",
        .id = @as(u32, @bitCast(@as(c_int, 4))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TrainingInfoProto, "n_update_binding"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TrainingInfoProto, "update_binding"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__string_string_entry_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
};
pub const onnx__training_info_proto__field_indices_by_name: [4]c_uint = [4]c_uint{
    1,
    0,
    2,
    3,
};
pub const onnx__training_info_proto__number_ranges: [2]ProtobufCIntRange = [2]ProtobufCIntRange{
    ProtobufCIntRange{
        .start_value = @as(c_int, 1),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 0))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 0),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 4))),
    },
};
pub const onnx__model_proto__field_descriptors: [11]ProtobufCFieldDescriptor = [11]ProtobufCFieldDescriptor{
    ProtobufCFieldDescriptor{
        .name = "ir_version",
        .id = @as(u32, @bitCast(@as(c_int, 1))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_INT64)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__ModelProto, "ir_version"))))),
        .descriptor = null,
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "producer_name",
        .id = @as(u32, @bitCast(@as(c_int, 2))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_STRING)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__ModelProto, "producer_name"))))),
        .descriptor = null,
        .default_value = @as(?*const anyopaque, @ptrCast(&protobuf_c_empty_string)),
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "producer_version",
        .id = @as(u32, @bitCast(@as(c_int, 3))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_STRING)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__ModelProto, "producer_version"))))),
        .descriptor = null,
        .default_value = @as(?*const anyopaque, @ptrCast(&protobuf_c_empty_string)),
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "domain",
        .id = @as(u32, @bitCast(@as(c_int, 4))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_STRING)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__ModelProto, "domain"))))),
        .descriptor = null,
        .default_value = @as(?*const anyopaque, @ptrCast(&protobuf_c_empty_string)),
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "model_version",
        .id = @as(u32, @bitCast(@as(c_int, 5))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_INT64)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__ModelProto, "model_version"))))),
        .descriptor = null,
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "doc_string",
        .id = @as(u32, @bitCast(@as(c_int, 6))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_STRING)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__ModelProto, "doc_string"))))),
        .descriptor = null,
        .default_value = @as(?*const anyopaque, @ptrCast(&protobuf_c_empty_string)),
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "graph",
        .id = @as(u32, @bitCast(@as(c_int, 7))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__ModelProto, "graph"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__graph_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "opset_import",
        .id = @as(u32, @bitCast(@as(c_int, 8))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__ModelProto, "n_opset_import"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__ModelProto, "opset_import"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__operator_set_id_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "metadata_props",
        .id = @as(u32, @bitCast(@as(c_int, 14))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__ModelProto, "n_metadata_props"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__ModelProto, "metadata_props"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__string_string_entry_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "training_info",
        .id = @as(u32, @bitCast(@as(c_int, 20))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__ModelProto, "n_training_info"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__ModelProto, "training_info"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__training_info_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "functions",
        .id = @as(u32, @bitCast(@as(c_int, 25))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__ModelProto, "n_functions"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__ModelProto, "functions"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__function_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
};
pub const onnx__model_proto__field_indices_by_name: [11]c_uint = [11]c_uint{
    5,
    3,
    10,
    6,
    0,
    8,
    4,
    7,
    1,
    2,
    9,
};
pub const onnx__model_proto__number_ranges: [5]ProtobufCIntRange = [5]ProtobufCIntRange{
    ProtobufCIntRange{
        .start_value = @as(c_int, 1),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 0))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 14),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 8))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 20),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 9))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 25),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 10))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 0),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 11))),
    },
};
pub const onnx__string_string_entry_proto__field_descriptors: [2]ProtobufCFieldDescriptor = [2]ProtobufCFieldDescriptor{
    ProtobufCFieldDescriptor{
        .name = "key",
        .id = @as(u32, @bitCast(@as(c_int, 1))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_STRING)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__StringStringEntryProto, "key"))))),
        .descriptor = null,
        .default_value = @as(?*const anyopaque, @ptrCast(&protobuf_c_empty_string)),
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "value",
        .id = @as(u32, @bitCast(@as(c_int, 2))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_STRING)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__StringStringEntryProto, "value"))))),
        .descriptor = null,
        .default_value = @as(?*const anyopaque, @ptrCast(&protobuf_c_empty_string)),
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
};
pub const onnx__string_string_entry_proto__field_indices_by_name: [2]c_uint = [2]c_uint{
    0,
    1,
};
pub const onnx__string_string_entry_proto__number_ranges: [2]ProtobufCIntRange = [2]ProtobufCIntRange{
    ProtobufCIntRange{
        .start_value = @as(c_int, 1),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 0))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 0),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 2))),
    },
};
pub const onnx__tensor_annotation__field_descriptors: [2]ProtobufCFieldDescriptor = [2]ProtobufCFieldDescriptor{
    ProtobufCFieldDescriptor{
        .name = "tensor_name",
        .id = @as(u32, @bitCast(@as(c_int, 1))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_STRING)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TensorAnnotation, "tensor_name"))))),
        .descriptor = null,
        .default_value = @as(?*const anyopaque, @ptrCast(&protobuf_c_empty_string)),
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "quant_parameter_tensor_names",
        .id = @as(u32, @bitCast(@as(c_int, 2))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TensorAnnotation, "n_quant_parameter_tensor_names"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TensorAnnotation, "quant_parameter_tensor_names"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__string_string_entry_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
};
pub const onnx__tensor_annotation__field_indices_by_name: [2]c_uint = [2]c_uint{
    1,
    0,
};
pub const onnx__tensor_annotation__number_ranges: [2]ProtobufCIntRange = [2]ProtobufCIntRange{
    ProtobufCIntRange{
        .start_value = @as(c_int, 1),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 0))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 0),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 2))),
    },
};
pub const onnx__graph_proto__field_descriptors: [10]ProtobufCFieldDescriptor = [10]ProtobufCFieldDescriptor{
    ProtobufCFieldDescriptor{
        .name = "node",
        .id = @as(u32, @bitCast(@as(c_int, 1))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__GraphProto, "n_node"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__GraphProto, "node"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__node_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "name",
        .id = @as(u32, @bitCast(@as(c_int, 2))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_STRING)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__GraphProto, "name"))))),
        .descriptor = null,
        .default_value = @as(?*const anyopaque, @ptrCast(&protobuf_c_empty_string)),
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "initializer",
        .id = @as(u32, @bitCast(@as(c_int, 5))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__GraphProto, "n_initializer"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__GraphProto, "initializer"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__tensor_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "doc_string",
        .id = @as(u32, @bitCast(@as(c_int, 10))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_STRING)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__GraphProto, "doc_string"))))),
        .descriptor = null,
        .default_value = @as(?*const anyopaque, @ptrCast(&protobuf_c_empty_string)),
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "input",
        .id = @as(u32, @bitCast(@as(c_int, 11))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__GraphProto, "n_input"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__GraphProto, "input"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__value_info_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "output",
        .id = @as(u32, @bitCast(@as(c_int, 12))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__GraphProto, "n_output"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__GraphProto, "output"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__value_info_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "value_info",
        .id = @as(u32, @bitCast(@as(c_int, 13))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__GraphProto, "n_value_info"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__GraphProto, "value_info"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__value_info_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "quantization_annotation",
        .id = @as(u32, @bitCast(@as(c_int, 14))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__GraphProto, "n_quantization_annotation"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__GraphProto, "quantization_annotation"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__tensor_annotation__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "sparse_initializer",
        .id = @as(u32, @bitCast(@as(c_int, 15))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__GraphProto, "n_sparse_initializer"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__GraphProto, "sparse_initializer"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__sparse_tensor_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "metadata_props",
        .id = @as(u32, @bitCast(@as(c_int, 16))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__GraphProto, "n_metadata_props"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__GraphProto, "metadata_props"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__string_string_entry_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
};
pub const onnx__graph_proto__field_indices_by_name: [10]c_uint = [10]c_uint{
    3,
    2,
    4,
    9,
    1,
    0,
    5,
    7,
    8,
    6,
};
pub const onnx__graph_proto__number_ranges: [4]ProtobufCIntRange = [4]ProtobufCIntRange{
    ProtobufCIntRange{
        .start_value = @as(c_int, 1),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 0))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 5),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 2))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 10),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 3))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 0),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 10))),
    },
};
pub const onnx__tensor_proto__segment__field_descriptors: [2]ProtobufCFieldDescriptor = [2]ProtobufCFieldDescriptor{
    ProtobufCFieldDescriptor{
        .name = "begin",
        .id = @as(u32, @bitCast(@as(c_int, 1))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_INT64)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TensorProto__Segment, "begin"))))),
        .descriptor = null,
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "end",
        .id = @as(u32, @bitCast(@as(c_int, 2))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_INT64)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TensorProto__Segment, "end"))))),
        .descriptor = null,
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
};
pub const onnx__tensor_proto__segment__field_indices_by_name: [2]c_uint = [2]c_uint{
    0,
    1,
};
pub const onnx__tensor_proto__segment__number_ranges: [2]ProtobufCIntRange = [2]ProtobufCIntRange{
    ProtobufCIntRange{
        .start_value = @as(c_int, 1),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 0))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 0),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 2))),
    },
};
pub const onnx__tensor_proto__data_type__enum_values_by_number: [24]ProtobufCEnumValue = [24]ProtobufCEnumValue{
    ProtobufCEnumValue{
        .name = "UNDEFINED",
        .c_name = "ONNX__TENSOR_PROTO__DATA_TYPE__UNDEFINED",
        .value = @as(c_int, 0),
    },
    ProtobufCEnumValue{
        .name = "FLOAT",
        .c_name = "ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT",
        .value = @as(c_int, 1),
    },
    ProtobufCEnumValue{
        .name = "UINT8",
        .c_name = "ONNX__TENSOR_PROTO__DATA_TYPE__UINT8",
        .value = @as(c_int, 2),
    },
    ProtobufCEnumValue{
        .name = "INT8",
        .c_name = "ONNX__TENSOR_PROTO__DATA_TYPE__INT8",
        .value = @as(c_int, 3),
    },
    ProtobufCEnumValue{
        .name = "UINT16",
        .c_name = "ONNX__TENSOR_PROTO__DATA_TYPE__UINT16",
        .value = @as(c_int, 4),
    },
    ProtobufCEnumValue{
        .name = "INT16",
        .c_name = "ONNX__TENSOR_PROTO__DATA_TYPE__INT16",
        .value = @as(c_int, 5),
    },
    ProtobufCEnumValue{
        .name = "INT32",
        .c_name = "ONNX__TENSOR_PROTO__DATA_TYPE__INT32",
        .value = @as(c_int, 6),
    },
    ProtobufCEnumValue{
        .name = "INT64",
        .c_name = "ONNX__TENSOR_PROTO__DATA_TYPE__INT64",
        .value = @as(c_int, 7),
    },
    ProtobufCEnumValue{
        .name = "STRING",
        .c_name = "ONNX__TENSOR_PROTO__DATA_TYPE__STRING",
        .value = @as(c_int, 8),
    },
    ProtobufCEnumValue{
        .name = "BOOL",
        .c_name = "ONNX__TENSOR_PROTO__DATA_TYPE__BOOL",
        .value = @as(c_int, 9),
    },
    ProtobufCEnumValue{
        .name = "FLOAT16",
        .c_name = "ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT16",
        .value = @as(c_int, 10),
    },
    ProtobufCEnumValue{
        .name = "DOUBLE",
        .c_name = "ONNX__TENSOR_PROTO__DATA_TYPE__DOUBLE",
        .value = @as(c_int, 11),
    },
    ProtobufCEnumValue{
        .name = "UINT32",
        .c_name = "ONNX__TENSOR_PROTO__DATA_TYPE__UINT32",
        .value = @as(c_int, 12),
    },
    ProtobufCEnumValue{
        .name = "UINT64",
        .c_name = "ONNX__TENSOR_PROTO__DATA_TYPE__UINT64",
        .value = @as(c_int, 13),
    },
    ProtobufCEnumValue{
        .name = "COMPLEX64",
        .c_name = "ONNX__TENSOR_PROTO__DATA_TYPE__COMPLEX64",
        .value = @as(c_int, 14),
    },
    ProtobufCEnumValue{
        .name = "COMPLEX128",
        .c_name = "ONNX__TENSOR_PROTO__DATA_TYPE__COMPLEX128",
        .value = @as(c_int, 15),
    },
    ProtobufCEnumValue{
        .name = "BFLOAT16",
        .c_name = "ONNX__TENSOR_PROTO__DATA_TYPE__BFLOAT16",
        .value = @as(c_int, 16),
    },
    ProtobufCEnumValue{
        .name = "FLOAT8E4M3FN",
        .c_name = "ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT8E4M3FN",
        .value = @as(c_int, 17),
    },
    ProtobufCEnumValue{
        .name = "FLOAT8E4M3FNUZ",
        .c_name = "ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT8E4M3FNUZ",
        .value = @as(c_int, 18),
    },
    ProtobufCEnumValue{
        .name = "FLOAT8E5M2",
        .c_name = "ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT8E5M2",
        .value = @as(c_int, 19),
    },
    ProtobufCEnumValue{
        .name = "FLOAT8E5M2FNUZ",
        .c_name = "ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT8E5M2FNUZ",
        .value = @as(c_int, 20),
    },
    ProtobufCEnumValue{
        .name = "UINT4",
        .c_name = "ONNX__TENSOR_PROTO__DATA_TYPE__UINT4",
        .value = @as(c_int, 21),
    },
    ProtobufCEnumValue{
        .name = "INT4",
        .c_name = "ONNX__TENSOR_PROTO__DATA_TYPE__INT4",
        .value = @as(c_int, 22),
    },
    ProtobufCEnumValue{
        .name = "FLOAT4E2M1",
        .c_name = "ONNX__TENSOR_PROTO__DATA_TYPE__FLOAT4E2M1",
        .value = @as(c_int, 23),
    },
};
pub const onnx__tensor_proto__data_type__value_ranges: [2]ProtobufCIntRange = [2]ProtobufCIntRange{
    ProtobufCIntRange{
        .start_value = @as(c_int, 0),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 0))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 0),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 24))),
    },
};
pub const onnx__tensor_proto__data_type__enum_values_by_name: [24]ProtobufCEnumValueIndex = [24]ProtobufCEnumValueIndex{
    ProtobufCEnumValueIndex{
        .name = "BFLOAT16",
        .index = @as(c_uint, @bitCast(@as(c_int, 16))),
    },
    ProtobufCEnumValueIndex{
        .name = "BOOL",
        .index = @as(c_uint, @bitCast(@as(c_int, 9))),
    },
    ProtobufCEnumValueIndex{
        .name = "COMPLEX128",
        .index = @as(c_uint, @bitCast(@as(c_int, 15))),
    },
    ProtobufCEnumValueIndex{
        .name = "COMPLEX64",
        .index = @as(c_uint, @bitCast(@as(c_int, 14))),
    },
    ProtobufCEnumValueIndex{
        .name = "DOUBLE",
        .index = @as(c_uint, @bitCast(@as(c_int, 11))),
    },
    ProtobufCEnumValueIndex{
        .name = "FLOAT",
        .index = @as(c_uint, @bitCast(@as(c_int, 1))),
    },
    ProtobufCEnumValueIndex{
        .name = "FLOAT16",
        .index = @as(c_uint, @bitCast(@as(c_int, 10))),
    },
    ProtobufCEnumValueIndex{
        .name = "FLOAT4E2M1",
        .index = @as(c_uint, @bitCast(@as(c_int, 23))),
    },
    ProtobufCEnumValueIndex{
        .name = "FLOAT8E4M3FN",
        .index = @as(c_uint, @bitCast(@as(c_int, 17))),
    },
    ProtobufCEnumValueIndex{
        .name = "FLOAT8E4M3FNUZ",
        .index = @as(c_uint, @bitCast(@as(c_int, 18))),
    },
    ProtobufCEnumValueIndex{
        .name = "FLOAT8E5M2",
        .index = @as(c_uint, @bitCast(@as(c_int, 19))),
    },
    ProtobufCEnumValueIndex{
        .name = "FLOAT8E5M2FNUZ",
        .index = @as(c_uint, @bitCast(@as(c_int, 20))),
    },
    ProtobufCEnumValueIndex{
        .name = "INT16",
        .index = @as(c_uint, @bitCast(@as(c_int, 5))),
    },
    ProtobufCEnumValueIndex{
        .name = "INT32",
        .index = @as(c_uint, @bitCast(@as(c_int, 6))),
    },
    ProtobufCEnumValueIndex{
        .name = "INT4",
        .index = @as(c_uint, @bitCast(@as(c_int, 22))),
    },
    ProtobufCEnumValueIndex{
        .name = "INT64",
        .index = @as(c_uint, @bitCast(@as(c_int, 7))),
    },
    ProtobufCEnumValueIndex{
        .name = "INT8",
        .index = @as(c_uint, @bitCast(@as(c_int, 3))),
    },
    ProtobufCEnumValueIndex{
        .name = "STRING",
        .index = @as(c_uint, @bitCast(@as(c_int, 8))),
    },
    ProtobufCEnumValueIndex{
        .name = "UINT16",
        .index = @as(c_uint, @bitCast(@as(c_int, 4))),
    },
    ProtobufCEnumValueIndex{
        .name = "UINT32",
        .index = @as(c_uint, @bitCast(@as(c_int, 12))),
    },
    ProtobufCEnumValueIndex{
        .name = "UINT4",
        .index = @as(c_uint, @bitCast(@as(c_int, 21))),
    },
    ProtobufCEnumValueIndex{
        .name = "UINT64",
        .index = @as(c_uint, @bitCast(@as(c_int, 13))),
    },
    ProtobufCEnumValueIndex{
        .name = "UINT8",
        .index = @as(c_uint, @bitCast(@as(c_int, 2))),
    },
    ProtobufCEnumValueIndex{
        .name = "UNDEFINED",
        .index = @as(c_uint, @bitCast(@as(c_int, 0))),
    },
};
pub const onnx__tensor_proto__data_location__enum_values_by_number: [2]ProtobufCEnumValue = [2]ProtobufCEnumValue{
    ProtobufCEnumValue{
        .name = "DEFAULT",
        .c_name = "ONNX__TENSOR_PROTO__DATA_LOCATION__DEFAULT",
        .value = @as(c_int, 0),
    },
    ProtobufCEnumValue{
        .name = "EXTERNAL",
        .c_name = "ONNX__TENSOR_PROTO__DATA_LOCATION__EXTERNAL",
        .value = @as(c_int, 1),
    },
};
pub const onnx__tensor_proto__data_location__value_ranges: [2]ProtobufCIntRange = [2]ProtobufCIntRange{
    ProtobufCIntRange{
        .start_value = @as(c_int, 0),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 0))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 0),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 2))),
    },
};
pub const onnx__tensor_proto__data_location__enum_values_by_name: [2]ProtobufCEnumValueIndex = [2]ProtobufCEnumValueIndex{
    ProtobufCEnumValueIndex{
        .name = "DEFAULT",
        .index = @as(c_uint, @bitCast(@as(c_int, 0))),
    },
    ProtobufCEnumValueIndex{
        .name = "EXTERNAL",
        .index = @as(c_uint, @bitCast(@as(c_int, 1))),
    },
};
pub const onnx__tensor_proto__field_descriptors: [15]ProtobufCFieldDescriptor = [15]ProtobufCFieldDescriptor{
    ProtobufCFieldDescriptor{
        .name = "dims",
        .id = @as(u32, @bitCast(@as(c_int, 1))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_INT64)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TensorProto, "n_dims"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TensorProto, "dims"))))),
        .descriptor = null,
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0) | PROTOBUF_C_FIELD_FLAG_PACKED)),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "data_type",
        .id = @as(u32, @bitCast(@as(c_int, 2))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_INT32)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TensorProto, "data_type"))))),
        .descriptor = null,
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "segment",
        .id = @as(u32, @bitCast(@as(c_int, 3))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TensorProto, "segment"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__tensor_proto__segment__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "float_data",
        .id = @as(u32, @bitCast(@as(c_int, 4))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_FLOAT)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TensorProto, "n_float_data"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TensorProto, "float_data"))))),
        .descriptor = null,
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0) | PROTOBUF_C_FIELD_FLAG_PACKED)),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "int32_data",
        .id = @as(u32, @bitCast(@as(c_int, 5))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_INT32)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TensorProto, "n_int32_data"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TensorProto, "int32_data"))))),
        .descriptor = null,
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0) | PROTOBUF_C_FIELD_FLAG_PACKED)),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "string_data",
        .id = @as(u32, @bitCast(@as(c_int, 6))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_BYTES)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TensorProto, "n_string_data"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TensorProto, "string_data"))))),
        .descriptor = null,
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "int64_data",
        .id = @as(u32, @bitCast(@as(c_int, 7))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_INT64)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TensorProto, "n_int64_data"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TensorProto, "int64_data"))))),
        .descriptor = null,
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0) | PROTOBUF_C_FIELD_FLAG_PACKED)),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "name",
        .id = @as(u32, @bitCast(@as(c_int, 8))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_STRING)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TensorProto, "name"))))),
        .descriptor = null,
        .default_value = @as(?*const anyopaque, @ptrCast(&protobuf_c_empty_string)),
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "raw_data",
        .id = @as(u32, @bitCast(@as(c_int, 9))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_BYTES)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TensorProto, "raw_data"))))),
        .descriptor = null,
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "double_data",
        .id = @as(u32, @bitCast(@as(c_int, 10))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_DOUBLE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TensorProto, "n_double_data"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TensorProto, "double_data"))))),
        .descriptor = null,
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0) | PROTOBUF_C_FIELD_FLAG_PACKED)),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "uint64_data",
        .id = @as(u32, @bitCast(@as(c_int, 11))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_UINT64)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TensorProto, "n_uint64_data"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TensorProto, "uint64_data"))))),
        .descriptor = null,
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0) | PROTOBUF_C_FIELD_FLAG_PACKED)),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "doc_string",
        .id = @as(u32, @bitCast(@as(c_int, 12))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_STRING)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TensorProto, "doc_string"))))),
        .descriptor = null,
        .default_value = @as(?*const anyopaque, @ptrCast(&protobuf_c_empty_string)),
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "external_data",
        .id = @as(u32, @bitCast(@as(c_int, 13))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TensorProto, "n_external_data"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TensorProto, "external_data"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__string_string_entry_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "data_location",
        .id = @as(u32, @bitCast(@as(c_int, 14))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_ENUM)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TensorProto, "data_location"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__tensor_proto__data_location__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "metadata_props",
        .id = @as(u32, @bitCast(@as(c_int, 16))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TensorProto, "n_metadata_props"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TensorProto, "metadata_props"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__string_string_entry_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
};
pub const onnx__tensor_proto__field_indices_by_name: [15]c_uint = [15]c_uint{
    13,
    1,
    0,
    11,
    9,
    12,
    3,
    4,
    6,
    14,
    7,
    8,
    2,
    5,
    10,
};
pub const onnx__tensor_proto__number_ranges: [3]ProtobufCIntRange = [3]ProtobufCIntRange{
    ProtobufCIntRange{
        .start_value = @as(c_int, 1),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 0))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 16),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 14))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 0),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 15))),
    },
};
pub const onnx__sparse_tensor_proto__field_descriptors: [3]ProtobufCFieldDescriptor = [3]ProtobufCFieldDescriptor{
    ProtobufCFieldDescriptor{
        .name = "values",
        .id = @as(u32, @bitCast(@as(c_int, 1))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__SparseTensorProto, "values"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__tensor_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "indices",
        .id = @as(u32, @bitCast(@as(c_int, 2))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__SparseTensorProto, "indices"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__tensor_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "dims",
        .id = @as(u32, @bitCast(@as(c_int, 3))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_INT64)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__SparseTensorProto, "n_dims"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__SparseTensorProto, "dims"))))),
        .descriptor = null,
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0) | PROTOBUF_C_FIELD_FLAG_PACKED)),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
};
pub const onnx__sparse_tensor_proto__field_indices_by_name: [3]c_uint = [3]c_uint{
    2,
    1,
    0,
};
pub const onnx__sparse_tensor_proto__number_ranges: [2]ProtobufCIntRange = [2]ProtobufCIntRange{
    ProtobufCIntRange{
        .start_value = @as(c_int, 1),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 0))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 0),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 3))),
    },
};
// /home/niels/.night.zig/zig-linux-x86_64-0.14.0-dev.2987+183bb8b08/lib/include/__stddef_offsetof.h:16:24: warning: TODO: implement complex OffsetOfExpr translation

// src/proto/onnx.proto3.pb-c.c:2159:39: warning: unable to translate variable initializer, demoted to extern
pub extern const onnx__tensor_shape_proto__dimension__field_descriptors: [3]ProtobufCFieldDescriptor;
pub const onnx__tensor_shape_proto__dimension__field_indices_by_name: [3]c_uint = [3]c_uint{
    2,
    1,
    0,
};
pub const onnx__tensor_shape_proto__dimension__number_ranges: [2]ProtobufCIntRange = [2]ProtobufCIntRange{
    ProtobufCIntRange{
        .start_value = @as(c_int, 1),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 0))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 0),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 3))),
    },
};
pub const onnx__tensor_shape_proto__field_descriptors: [1]ProtobufCFieldDescriptor = [1]ProtobufCFieldDescriptor{
    ProtobufCFieldDescriptor{
        .name = "dim",
        .id = @as(u32, @bitCast(@as(c_int, 1))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TensorShapeProto, "n_dim"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TensorShapeProto, "dim"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__tensor_shape_proto__dimension__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
};
pub const onnx__tensor_shape_proto__field_indices_by_name: [1]c_uint = [1]c_uint{
    0,
};
pub const onnx__tensor_shape_proto__number_ranges: [2]ProtobufCIntRange = [2]ProtobufCIntRange{
    ProtobufCIntRange{
        .start_value = @as(c_int, 1),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 0))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 0),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 1))),
    },
};
pub const onnx__type_proto__tensor__field_descriptors: [2]ProtobufCFieldDescriptor = [2]ProtobufCFieldDescriptor{
    ProtobufCFieldDescriptor{
        .name = "elem_type",
        .id = @as(u32, @bitCast(@as(c_int, 1))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_INT32)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TypeProto__Tensor, "elem_type"))))),
        .descriptor = null,
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "shape",
        .id = @as(u32, @bitCast(@as(c_int, 2))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TypeProto__Tensor, "shape"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__tensor_shape_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
};
pub const onnx__type_proto__tensor__field_indices_by_name: [2]c_uint = [2]c_uint{
    0,
    1,
};
pub const onnx__type_proto__tensor__number_ranges: [2]ProtobufCIntRange = [2]ProtobufCIntRange{
    ProtobufCIntRange{
        .start_value = @as(c_int, 1),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 0))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 0),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 2))),
    },
};
pub const onnx__type_proto__sequence__field_descriptors: [1]ProtobufCFieldDescriptor = [1]ProtobufCFieldDescriptor{
    ProtobufCFieldDescriptor{
        .name = "elem_type",
        .id = @as(u32, @bitCast(@as(c_int, 1))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TypeProto__Sequence, "elem_type"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__type_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
};
pub const onnx__type_proto__sequence__field_indices_by_name: [1]c_uint = [1]c_uint{
    0,
};
pub const onnx__type_proto__sequence__number_ranges: [2]ProtobufCIntRange = [2]ProtobufCIntRange{
    ProtobufCIntRange{
        .start_value = @as(c_int, 1),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 0))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 0),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 1))),
    },
};
pub const onnx__type_proto__map__field_descriptors: [2]ProtobufCFieldDescriptor = [2]ProtobufCFieldDescriptor{
    ProtobufCFieldDescriptor{
        .name = "key_type",
        .id = @as(u32, @bitCast(@as(c_int, 1))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_INT32)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TypeProto__Map, "key_type"))))),
        .descriptor = null,
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "value_type",
        .id = @as(u32, @bitCast(@as(c_int, 2))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TypeProto__Map, "value_type"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__type_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
};
pub const onnx__type_proto__map__field_indices_by_name: [2]c_uint = [2]c_uint{
    0,
    1,
};
pub const onnx__type_proto__map__number_ranges: [2]ProtobufCIntRange = [2]ProtobufCIntRange{
    ProtobufCIntRange{
        .start_value = @as(c_int, 1),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 0))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 0),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 2))),
    },
};
pub const onnx__type_proto__optional__field_descriptors: [1]ProtobufCFieldDescriptor = [1]ProtobufCFieldDescriptor{
    ProtobufCFieldDescriptor{
        .name = "elem_type",
        .id = @as(u32, @bitCast(@as(c_int, 1))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TypeProto__Optional, "elem_type"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__type_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
};
pub const onnx__type_proto__optional__field_indices_by_name: [1]c_uint = [1]c_uint{
    0,
};
pub const onnx__type_proto__optional__number_ranges: [2]ProtobufCIntRange = [2]ProtobufCIntRange{
    ProtobufCIntRange{
        .start_value = @as(c_int, 1),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 0))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 0),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 1))),
    },
};
pub const onnx__type_proto__sparse_tensor__field_descriptors: [2]ProtobufCFieldDescriptor = [2]ProtobufCFieldDescriptor{
    ProtobufCFieldDescriptor{
        .name = "elem_type",
        .id = @as(u32, @bitCast(@as(c_int, 1))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_INT32)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TypeProto__SparseTensor, "elem_type"))))),
        .descriptor = null,
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "shape",
        .id = @as(u32, @bitCast(@as(c_int, 2))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__TypeProto__SparseTensor, "shape"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__tensor_shape_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
};
pub const onnx__type_proto__sparse_tensor__field_indices_by_name: [2]c_uint = [2]c_uint{
    0,
    1,
};
pub const onnx__type_proto__sparse_tensor__number_ranges: [2]ProtobufCIntRange = [2]ProtobufCIntRange{
    ProtobufCIntRange{
        .start_value = @as(c_int, 1),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 0))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 0),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 2))),
    },
};
// /home/niels/.night.zig/zig-linux-x86_64-0.14.0-dev.2987+183bb8b08/lib/include/__stddef_offsetof.h:16:24: warning: TODO: implement complex OffsetOfExpr translation

// src/proto/onnx.proto3.pb-c.c:2490:39: warning: unable to translate variable initializer, demoted to extern
pub extern const onnx__type_proto__field_descriptors: [6]ProtobufCFieldDescriptor;
pub const onnx__type_proto__field_indices_by_name: [6]c_uint = [6]c_uint{
    3,
    2,
    5,
    1,
    4,
    0,
};
pub const onnx__type_proto__number_ranges: [4]ProtobufCIntRange = [4]ProtobufCIntRange{
    ProtobufCIntRange{
        .start_value = @as(c_int, 1),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 0))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 4),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 1))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 8),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 4))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 0),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 6))),
    },
};
pub const onnx__operator_set_id_proto__field_descriptors: [2]ProtobufCFieldDescriptor = [2]ProtobufCFieldDescriptor{
    ProtobufCFieldDescriptor{
        .name = "domain",
        .id = @as(u32, @bitCast(@as(c_int, 1))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_STRING)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__OperatorSetIdProto, "domain"))))),
        .descriptor = null,
        .default_value = @as(?*const anyopaque, @ptrCast(&protobuf_c_empty_string)),
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "version",
        .id = @as(u32, @bitCast(@as(c_int, 2))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_INT64)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__OperatorSetIdProto, "version"))))),
        .descriptor = null,
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
};
pub const onnx__operator_set_id_proto__field_indices_by_name: [2]c_uint = [2]c_uint{
    0,
    1,
};
pub const onnx__operator_set_id_proto__number_ranges: [2]ProtobufCIntRange = [2]ProtobufCIntRange{
    ProtobufCIntRange{
        .start_value = @as(c_int, 1),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 0))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 0),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 2))),
    },
};
pub const onnx__function_proto__field_descriptors: [12]ProtobufCFieldDescriptor = [12]ProtobufCFieldDescriptor{
    ProtobufCFieldDescriptor{
        .name = "name",
        .id = @as(u32, @bitCast(@as(c_int, 1))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_STRING)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__FunctionProto, "name"))))),
        .descriptor = null,
        .default_value = @as(?*const anyopaque, @ptrCast(&protobuf_c_empty_string)),
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "input",
        .id = @as(u32, @bitCast(@as(c_int, 4))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_STRING)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__FunctionProto, "n_input"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__FunctionProto, "input"))))),
        .descriptor = null,
        .default_value = @as(?*const anyopaque, @ptrCast(&protobuf_c_empty_string)),
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "output",
        .id = @as(u32, @bitCast(@as(c_int, 5))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_STRING)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__FunctionProto, "n_output"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__FunctionProto, "output"))))),
        .descriptor = null,
        .default_value = @as(?*const anyopaque, @ptrCast(&protobuf_c_empty_string)),
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "attribute",
        .id = @as(u32, @bitCast(@as(c_int, 6))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_STRING)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__FunctionProto, "n_attribute"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__FunctionProto, "attribute"))))),
        .descriptor = null,
        .default_value = @as(?*const anyopaque, @ptrCast(&protobuf_c_empty_string)),
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "node",
        .id = @as(u32, @bitCast(@as(c_int, 7))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__FunctionProto, "n_node"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__FunctionProto, "node"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__node_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "doc_string",
        .id = @as(u32, @bitCast(@as(c_int, 8))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_STRING)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__FunctionProto, "doc_string"))))),
        .descriptor = null,
        .default_value = @as(?*const anyopaque, @ptrCast(&protobuf_c_empty_string)),
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "opset_import",
        .id = @as(u32, @bitCast(@as(c_int, 9))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__FunctionProto, "n_opset_import"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__FunctionProto, "opset_import"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__operator_set_id_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "domain",
        .id = @as(u32, @bitCast(@as(c_int, 10))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_STRING)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__FunctionProto, "domain"))))),
        .descriptor = null,
        .default_value = @as(?*const anyopaque, @ptrCast(&protobuf_c_empty_string)),
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "attribute_proto",
        .id = @as(u32, @bitCast(@as(c_int, 11))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__FunctionProto, "n_attribute_proto"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__FunctionProto, "attribute_proto"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__attribute_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "value_info",
        .id = @as(u32, @bitCast(@as(c_int, 12))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__FunctionProto, "n_value_info"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__FunctionProto, "value_info"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__value_info_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "overload",
        .id = @as(u32, @bitCast(@as(c_int, 13))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_NONE)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_STRING)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_int, 0))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__FunctionProto, "overload"))))),
        .descriptor = null,
        .default_value = @as(?*const anyopaque, @ptrCast(&protobuf_c_empty_string)),
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
    ProtobufCFieldDescriptor{
        .name = "metadata_props",
        .id = @as(u32, @bitCast(@as(c_int, 14))),
        .label = @as(c_uint, @bitCast(PROTOBUF_C_LABEL_REPEATED)),
        .type = @as(c_uint, @bitCast(PROTOBUF_C_TYPE_MESSAGE)),
        .quantifier_offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__FunctionProto, "n_metadata_props"))))),
        .offset = @as(c_uint, @bitCast(@as(c_uint, @truncate(@offsetOf(struct__Onnx__FunctionProto, "metadata_props"))))),
        .descriptor = @as(?*const anyopaque, @ptrCast(&onnx__string_string_entry_proto__descriptor)),
        .default_value = null,
        .flags = @as(u32, @bitCast(@as(c_int, 0))),
        .reserved_flags = @as(c_uint, @bitCast(@as(c_int, 0))),
        .reserved2 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
        .reserved3 = @as(?*anyopaque, @ptrFromInt(@as(c_int, 0))),
    },
};
pub const onnx__function_proto__field_indices_by_name: [12]c_uint = [12]c_uint{
    3,
    8,
    5,
    7,
    1,
    11,
    0,
    4,
    6,
    2,
    10,
    9,
};
pub const onnx__function_proto__number_ranges: [3]ProtobufCIntRange = [3]ProtobufCIntRange{
    ProtobufCIntRange{
        .start_value = @as(c_int, 1),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 0))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 4),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 1))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 0),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 12))),
    },
};
pub const onnx__version__enum_values_by_number: [12]ProtobufCEnumValue = [12]ProtobufCEnumValue{
    ProtobufCEnumValue{
        .name = "_START_VERSION",
        .c_name = "ONNX__VERSION___START_VERSION",
        .value = @as(c_int, 0),
    },
    ProtobufCEnumValue{
        .name = "IR_VERSION_2017_10_10",
        .c_name = "ONNX__VERSION__IR_VERSION_2017_10_10",
        .value = @as(c_int, 1),
    },
    ProtobufCEnumValue{
        .name = "IR_VERSION_2017_10_30",
        .c_name = "ONNX__VERSION__IR_VERSION_2017_10_30",
        .value = @as(c_int, 2),
    },
    ProtobufCEnumValue{
        .name = "IR_VERSION_2017_11_3",
        .c_name = "ONNX__VERSION__IR_VERSION_2017_11_3",
        .value = @as(c_int, 3),
    },
    ProtobufCEnumValue{
        .name = "IR_VERSION_2019_1_22",
        .c_name = "ONNX__VERSION__IR_VERSION_2019_1_22",
        .value = @as(c_int, 4),
    },
    ProtobufCEnumValue{
        .name = "IR_VERSION_2019_3_18",
        .c_name = "ONNX__VERSION__IR_VERSION_2019_3_18",
        .value = @as(c_int, 5),
    },
    ProtobufCEnumValue{
        .name = "IR_VERSION_2019_9_19",
        .c_name = "ONNX__VERSION__IR_VERSION_2019_9_19",
        .value = @as(c_int, 6),
    },
    ProtobufCEnumValue{
        .name = "IR_VERSION_2020_5_8",
        .c_name = "ONNX__VERSION__IR_VERSION_2020_5_8",
        .value = @as(c_int, 7),
    },
    ProtobufCEnumValue{
        .name = "IR_VERSION_2021_7_30",
        .c_name = "ONNX__VERSION__IR_VERSION_2021_7_30",
        .value = @as(c_int, 8),
    },
    ProtobufCEnumValue{
        .name = "IR_VERSION_2023_5_5",
        .c_name = "ONNX__VERSION__IR_VERSION_2023_5_5",
        .value = @as(c_int, 9),
    },
    ProtobufCEnumValue{
        .name = "IR_VERSION_2024_3_25",
        .c_name = "ONNX__VERSION__IR_VERSION_2024_3_25",
        .value = @as(c_int, 10),
    },
    ProtobufCEnumValue{
        .name = "IR_VERSION",
        .c_name = "ONNX__VERSION__IR_VERSION",
        .value = @as(c_int, 11),
    },
};
pub const onnx__version__value_ranges: [2]ProtobufCIntRange = [2]ProtobufCIntRange{
    ProtobufCIntRange{
        .start_value = @as(c_int, 0),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 0))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 0),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 12))),
    },
};
pub const onnx__version__enum_values_by_name: [12]ProtobufCEnumValueIndex = [12]ProtobufCEnumValueIndex{
    ProtobufCEnumValueIndex{
        .name = "IR_VERSION",
        .index = @as(c_uint, @bitCast(@as(c_int, 11))),
    },
    ProtobufCEnumValueIndex{
        .name = "IR_VERSION_2017_10_10",
        .index = @as(c_uint, @bitCast(@as(c_int, 1))),
    },
    ProtobufCEnumValueIndex{
        .name = "IR_VERSION_2017_10_30",
        .index = @as(c_uint, @bitCast(@as(c_int, 2))),
    },
    ProtobufCEnumValueIndex{
        .name = "IR_VERSION_2017_11_3",
        .index = @as(c_uint, @bitCast(@as(c_int, 3))),
    },
    ProtobufCEnumValueIndex{
        .name = "IR_VERSION_2019_1_22",
        .index = @as(c_uint, @bitCast(@as(c_int, 4))),
    },
    ProtobufCEnumValueIndex{
        .name = "IR_VERSION_2019_3_18",
        .index = @as(c_uint, @bitCast(@as(c_int, 5))),
    },
    ProtobufCEnumValueIndex{
        .name = "IR_VERSION_2019_9_19",
        .index = @as(c_uint, @bitCast(@as(c_int, 6))),
    },
    ProtobufCEnumValueIndex{
        .name = "IR_VERSION_2020_5_8",
        .index = @as(c_uint, @bitCast(@as(c_int, 7))),
    },
    ProtobufCEnumValueIndex{
        .name = "IR_VERSION_2021_7_30",
        .index = @as(c_uint, @bitCast(@as(c_int, 8))),
    },
    ProtobufCEnumValueIndex{
        .name = "IR_VERSION_2023_5_5",
        .index = @as(c_uint, @bitCast(@as(c_int, 9))),
    },
    ProtobufCEnumValueIndex{
        .name = "IR_VERSION_2024_3_25",
        .index = @as(c_uint, @bitCast(@as(c_int, 10))),
    },
    ProtobufCEnumValueIndex{
        .name = "_START_VERSION",
        .index = @as(c_uint, @bitCast(@as(c_int, 0))),
    },
};
pub const onnx__operator_status__enum_values_by_number: [2]ProtobufCEnumValue = [2]ProtobufCEnumValue{
    ProtobufCEnumValue{
        .name = "EXPERIMENTAL",
        .c_name = "ONNX__OPERATOR_STATUS__EXPERIMENTAL",
        .value = @as(c_int, 0),
    },
    ProtobufCEnumValue{
        .name = "STABLE",
        .c_name = "ONNX__OPERATOR_STATUS__STABLE",
        .value = @as(c_int, 1),
    },
};
pub const onnx__operator_status__value_ranges: [2]ProtobufCIntRange = [2]ProtobufCIntRange{
    ProtobufCIntRange{
        .start_value = @as(c_int, 0),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 0))),
    },
    ProtobufCIntRange{
        .start_value = @as(c_int, 0),
        .orig_index = @as(c_uint, @bitCast(@as(c_int, 2))),
    },
};
pub const onnx__operator_status__enum_values_by_name: [2]ProtobufCEnumValueIndex = [2]ProtobufCEnumValueIndex{
    ProtobufCEnumValueIndex{
        .name = "EXPERIMENTAL",
        .index = @as(c_uint, @bitCast(@as(c_int, 0))),
    },
    ProtobufCEnumValueIndex{
        .name = "STABLE",
        .index = @as(c_uint, @bitCast(@as(c_int, 1))),
    },
};
pub const __llvm__ = @as(c_int, 1);
pub const __clang__ = @as(c_int, 1);
pub const __clang_major__ = @as(c_int, 19);
pub const __clang_minor__ = @as(c_int, 1);
pub const __clang_patchlevel__ = @as(c_int, 7);
pub const __clang_version__ = "19.1.7 (https://github.com/ziglang/zig-bootstrap 50d8e88ba329b5d58a212f9fd2e9b1ad59a88e7d)";
pub const __GNUC__ = @as(c_int, 4);
pub const __GNUC_MINOR__ = @as(c_int, 2);
pub const __GNUC_PATCHLEVEL__ = @as(c_int, 1);
pub const __GXX_ABI_VERSION = @as(c_int, 1002);
pub const __ATOMIC_RELAXED = @as(c_int, 0);
pub const __ATOMIC_CONSUME = @as(c_int, 1);
pub const __ATOMIC_ACQUIRE = @as(c_int, 2);
pub const __ATOMIC_RELEASE = @as(c_int, 3);
pub const __ATOMIC_ACQ_REL = @as(c_int, 4);
pub const __ATOMIC_SEQ_CST = @as(c_int, 5);
pub const __MEMORY_SCOPE_SYSTEM = @as(c_int, 0);
pub const __MEMORY_SCOPE_DEVICE = @as(c_int, 1);
pub const __MEMORY_SCOPE_WRKGRP = @as(c_int, 2);
pub const __MEMORY_SCOPE_WVFRNT = @as(c_int, 3);
pub const __MEMORY_SCOPE_SINGLE = @as(c_int, 4);
pub const __OPENCL_MEMORY_SCOPE_WORK_ITEM = @as(c_int, 0);
pub const __OPENCL_MEMORY_SCOPE_WORK_GROUP = @as(c_int, 1);
pub const __OPENCL_MEMORY_SCOPE_DEVICE = @as(c_int, 2);
pub const __OPENCL_MEMORY_SCOPE_ALL_SVM_DEVICES = @as(c_int, 3);
pub const __OPENCL_MEMORY_SCOPE_SUB_GROUP = @as(c_int, 4);
pub const __FPCLASS_SNAN = @as(c_int, 0x0001);
pub const __FPCLASS_QNAN = @as(c_int, 0x0002);
pub const __FPCLASS_NEGINF = @as(c_int, 0x0004);
pub const __FPCLASS_NEGNORMAL = @as(c_int, 0x0008);
pub const __FPCLASS_NEGSUBNORMAL = @as(c_int, 0x0010);
pub const __FPCLASS_NEGZERO = @as(c_int, 0x0020);
pub const __FPCLASS_POSZERO = @as(c_int, 0x0040);
pub const __FPCLASS_POSSUBNORMAL = @as(c_int, 0x0080);
pub const __FPCLASS_POSNORMAL = @as(c_int, 0x0100);
pub const __FPCLASS_POSINF = @as(c_int, 0x0200);
pub const __PRAGMA_REDEFINE_EXTNAME = @as(c_int, 1);
pub const __VERSION__ = "Clang 19.1.7 (https://github.com/ziglang/zig-bootstrap 50d8e88ba329b5d58a212f9fd2e9b1ad59a88e7d)";
pub const __OBJC_BOOL_IS_BOOL = @as(c_int, 0);
pub const __CONSTANT_CFSTRINGS__ = @as(c_int, 1);
pub const __clang_literal_encoding__ = "UTF-8";
pub const __clang_wide_literal_encoding__ = "UTF-32";
pub const __ORDER_LITTLE_ENDIAN__ = @as(c_int, 1234);
pub const __ORDER_BIG_ENDIAN__ = @as(c_int, 4321);
pub const __ORDER_PDP_ENDIAN__ = @as(c_int, 3412);
pub const __BYTE_ORDER__ = __ORDER_LITTLE_ENDIAN__;
pub const __LITTLE_ENDIAN__ = @as(c_int, 1);
pub const _LP64 = @as(c_int, 1);
pub const __LP64__ = @as(c_int, 1);
pub const __CHAR_BIT__ = @as(c_int, 8);
pub const __BOOL_WIDTH__ = @as(c_int, 8);
pub const __SHRT_WIDTH__ = @as(c_int, 16);
pub const __INT_WIDTH__ = @as(c_int, 32);
pub const __LONG_WIDTH__ = @as(c_int, 64);
pub const __LLONG_WIDTH__ = @as(c_int, 64);
pub const __BITINT_MAXWIDTH__ = @import("std").zig.c_translation.promoteIntLiteral(c_int, 8388608, .decimal);
pub const __SCHAR_MAX__ = @as(c_int, 127);
pub const __SHRT_MAX__ = @as(c_int, 32767);
pub const __INT_MAX__ = @import("std").zig.c_translation.promoteIntLiteral(c_int, 2147483647, .decimal);
pub const __LONG_MAX__ = @import("std").zig.c_translation.promoteIntLiteral(c_long, 9223372036854775807, .decimal);
pub const __LONG_LONG_MAX__ = @as(c_longlong, 9223372036854775807);
pub const __WCHAR_MAX__ = @import("std").zig.c_translation.promoteIntLiteral(c_int, 2147483647, .decimal);
pub const __WCHAR_WIDTH__ = @as(c_int, 32);
pub const __WINT_MAX__ = @import("std").zig.c_translation.promoteIntLiteral(c_uint, 4294967295, .decimal);
pub const __WINT_WIDTH__ = @as(c_int, 32);
pub const __INTMAX_MAX__ = @import("std").zig.c_translation.promoteIntLiteral(c_long, 9223372036854775807, .decimal);
pub const __INTMAX_WIDTH__ = @as(c_int, 64);
pub const __SIZE_MAX__ = @import("std").zig.c_translation.promoteIntLiteral(c_ulong, 18446744073709551615, .decimal);
pub const __SIZE_WIDTH__ = @as(c_int, 64);
pub const __UINTMAX_MAX__ = @import("std").zig.c_translation.promoteIntLiteral(c_ulong, 18446744073709551615, .decimal);
pub const __UINTMAX_WIDTH__ = @as(c_int, 64);
pub const __PTRDIFF_MAX__ = @import("std").zig.c_translation.promoteIntLiteral(c_long, 9223372036854775807, .decimal);
pub const __PTRDIFF_WIDTH__ = @as(c_int, 64);
pub const __INTPTR_MAX__ = @import("std").zig.c_translation.promoteIntLiteral(c_long, 9223372036854775807, .decimal);
pub const __INTPTR_WIDTH__ = @as(c_int, 64);
pub const __UINTPTR_MAX__ = @import("std").zig.c_translation.promoteIntLiteral(c_ulong, 18446744073709551615, .decimal);
pub const __UINTPTR_WIDTH__ = @as(c_int, 64);
pub const __SIZEOF_DOUBLE__ = @as(c_int, 8);
pub const __SIZEOF_FLOAT__ = @as(c_int, 4);
pub const __SIZEOF_INT__ = @as(c_int, 4);
pub const __SIZEOF_LONG__ = @as(c_int, 8);
pub const __SIZEOF_LONG_DOUBLE__ = @as(c_int, 16);
pub const __SIZEOF_LONG_LONG__ = @as(c_int, 8);
pub const __SIZEOF_POINTER__ = @as(c_int, 8);
pub const __SIZEOF_SHORT__ = @as(c_int, 2);
pub const __SIZEOF_PTRDIFF_T__ = @as(c_int, 8);
pub const __SIZEOF_SIZE_T__ = @as(c_int, 8);
pub const __SIZEOF_WCHAR_T__ = @as(c_int, 4);
pub const __SIZEOF_WINT_T__ = @as(c_int, 4);
pub const __SIZEOF_INT128__ = @as(c_int, 16);
pub const __INTMAX_TYPE__ = c_long;
pub const __INTMAX_FMTd__ = "ld";
pub const __INTMAX_FMTi__ = "li";
pub const __INTMAX_C_SUFFIX__ = @compileError("unable to translate macro: undefined identifier `L`");
// (no file):95:9
pub const __UINTMAX_TYPE__ = c_ulong;
pub const __UINTMAX_FMTo__ = "lo";
pub const __UINTMAX_FMTu__ = "lu";
pub const __UINTMAX_FMTx__ = "lx";
pub const __UINTMAX_FMTX__ = "lX";
pub const __UINTMAX_C_SUFFIX__ = @compileError("unable to translate macro: undefined identifier `UL`");
// (no file):101:9
pub const __PTRDIFF_TYPE__ = c_long;
pub const __PTRDIFF_FMTd__ = "ld";
pub const __PTRDIFF_FMTi__ = "li";
pub const __INTPTR_TYPE__ = c_long;
pub const __INTPTR_FMTd__ = "ld";
pub const __INTPTR_FMTi__ = "li";
pub const __SIZE_TYPE__ = c_ulong;
pub const __SIZE_FMTo__ = "lo";
pub const __SIZE_FMTu__ = "lu";
pub const __SIZE_FMTx__ = "lx";
pub const __SIZE_FMTX__ = "lX";
pub const __WCHAR_TYPE__ = c_int;
pub const __WINT_TYPE__ = c_uint;
pub const __SIG_ATOMIC_MAX__ = @import("std").zig.c_translation.promoteIntLiteral(c_int, 2147483647, .decimal);
pub const __SIG_ATOMIC_WIDTH__ = @as(c_int, 32);
pub const __CHAR16_TYPE__ = c_ushort;
pub const __CHAR32_TYPE__ = c_uint;
pub const __UINTPTR_TYPE__ = c_ulong;
pub const __UINTPTR_FMTo__ = "lo";
pub const __UINTPTR_FMTu__ = "lu";
pub const __UINTPTR_FMTx__ = "lx";
pub const __UINTPTR_FMTX__ = "lX";
pub const __FLT16_DENORM_MIN__ = @as(f16, 5.9604644775390625e-8);
pub const __FLT16_NORM_MAX__ = @as(f16, 6.5504e+4);
pub const __FLT16_HAS_DENORM__ = @as(c_int, 1);
pub const __FLT16_DIG__ = @as(c_int, 3);
pub const __FLT16_DECIMAL_DIG__ = @as(c_int, 5);
pub const __FLT16_EPSILON__ = @as(f16, 9.765625e-4);
pub const __FLT16_HAS_INFINITY__ = @as(c_int, 1);
pub const __FLT16_HAS_QUIET_NAN__ = @as(c_int, 1);
pub const __FLT16_MANT_DIG__ = @as(c_int, 11);
pub const __FLT16_MAX_10_EXP__ = @as(c_int, 4);
pub const __FLT16_MAX_EXP__ = @as(c_int, 16);
pub const __FLT16_MAX__ = @as(f16, 6.5504e+4);
pub const __FLT16_MIN_10_EXP__ = -@as(c_int, 4);
pub const __FLT16_MIN_EXP__ = -@as(c_int, 13);
pub const __FLT16_MIN__ = @as(f16, 6.103515625e-5);
pub const __FLT_DENORM_MIN__ = @as(f32, 1.40129846e-45);
pub const __FLT_NORM_MAX__ = @as(f32, 3.40282347e+38);
pub const __FLT_HAS_DENORM__ = @as(c_int, 1);
pub const __FLT_DIG__ = @as(c_int, 6);
pub const __FLT_DECIMAL_DIG__ = @as(c_int, 9);
pub const __FLT_EPSILON__ = @as(f32, 1.19209290e-7);
pub const __FLT_HAS_INFINITY__ = @as(c_int, 1);
pub const __FLT_HAS_QUIET_NAN__ = @as(c_int, 1);
pub const __FLT_MANT_DIG__ = @as(c_int, 24);
pub const __FLT_MAX_10_EXP__ = @as(c_int, 38);
pub const __FLT_MAX_EXP__ = @as(c_int, 128);
pub const __FLT_MAX__ = @as(f32, 3.40282347e+38);
pub const __FLT_MIN_10_EXP__ = -@as(c_int, 37);
pub const __FLT_MIN_EXP__ = -@as(c_int, 125);
pub const __FLT_MIN__ = @as(f32, 1.17549435e-38);
pub const __DBL_DENORM_MIN__ = @as(f64, 4.9406564584124654e-324);
pub const __DBL_NORM_MAX__ = @as(f64, 1.7976931348623157e+308);
pub const __DBL_HAS_DENORM__ = @as(c_int, 1);
pub const __DBL_DIG__ = @as(c_int, 15);
pub const __DBL_DECIMAL_DIG__ = @as(c_int, 17);
pub const __DBL_EPSILON__ = @as(f64, 2.2204460492503131e-16);
pub const __DBL_HAS_INFINITY__ = @as(c_int, 1);
pub const __DBL_HAS_QUIET_NAN__ = @as(c_int, 1);
pub const __DBL_MANT_DIG__ = @as(c_int, 53);
pub const __DBL_MAX_10_EXP__ = @as(c_int, 308);
pub const __DBL_MAX_EXP__ = @as(c_int, 1024);
pub const __DBL_MAX__ = @as(f64, 1.7976931348623157e+308);
pub const __DBL_MIN_10_EXP__ = -@as(c_int, 307);
pub const __DBL_MIN_EXP__ = -@as(c_int, 1021);
pub const __DBL_MIN__ = @as(f64, 2.2250738585072014e-308);
pub const __LDBL_DENORM_MIN__ = @as(c_longdouble, 3.64519953188247460253e-4951);
pub const __LDBL_NORM_MAX__ = @as(c_longdouble, 1.18973149535723176502e+4932);
pub const __LDBL_HAS_DENORM__ = @as(c_int, 1);
pub const __LDBL_DIG__ = @as(c_int, 18);
pub const __LDBL_DECIMAL_DIG__ = @as(c_int, 21);
pub const __LDBL_EPSILON__ = @as(c_longdouble, 1.08420217248550443401e-19);
pub const __LDBL_HAS_INFINITY__ = @as(c_int, 1);
pub const __LDBL_HAS_QUIET_NAN__ = @as(c_int, 1);
pub const __LDBL_MANT_DIG__ = @as(c_int, 64);
pub const __LDBL_MAX_10_EXP__ = @as(c_int, 4932);
pub const __LDBL_MAX_EXP__ = @as(c_int, 16384);
pub const __LDBL_MAX__ = @as(c_longdouble, 1.18973149535723176502e+4932);
pub const __LDBL_MIN_10_EXP__ = -@as(c_int, 4931);
pub const __LDBL_MIN_EXP__ = -@as(c_int, 16381);
pub const __LDBL_MIN__ = @as(c_longdouble, 3.36210314311209350626e-4932);
pub const __POINTER_WIDTH__ = @as(c_int, 64);
pub const __BIGGEST_ALIGNMENT__ = @as(c_int, 16);
pub const __WINT_UNSIGNED__ = @as(c_int, 1);
pub const __INT8_TYPE__ = i8;
pub const __INT8_FMTd__ = "hhd";
pub const __INT8_FMTi__ = "hhi";
pub const __INT8_C_SUFFIX__ = "";
pub const __INT16_TYPE__ = c_short;
pub const __INT16_FMTd__ = "hd";
pub const __INT16_FMTi__ = "hi";
pub const __INT16_C_SUFFIX__ = "";
pub const __INT32_TYPE__ = c_int;
pub const __INT32_FMTd__ = "d";
pub const __INT32_FMTi__ = "i";
pub const __INT32_C_SUFFIX__ = "";
pub const __INT64_TYPE__ = c_long;
pub const __INT64_FMTd__ = "ld";
pub const __INT64_FMTi__ = "li";
pub const __INT64_C_SUFFIX__ = @compileError("unable to translate macro: undefined identifier `L`");
// (no file):202:9
pub const __UINT8_TYPE__ = u8;
pub const __UINT8_FMTo__ = "hho";
pub const __UINT8_FMTu__ = "hhu";
pub const __UINT8_FMTx__ = "hhx";
pub const __UINT8_FMTX__ = "hhX";
pub const __UINT8_C_SUFFIX__ = "";
pub const __UINT8_MAX__ = @as(c_int, 255);
pub const __INT8_MAX__ = @as(c_int, 127);
pub const __UINT16_TYPE__ = c_ushort;
pub const __UINT16_FMTo__ = "ho";
pub const __UINT16_FMTu__ = "hu";
pub const __UINT16_FMTx__ = "hx";
pub const __UINT16_FMTX__ = "hX";
pub const __UINT16_C_SUFFIX__ = "";
pub const __UINT16_MAX__ = @import("std").zig.c_translation.promoteIntLiteral(c_int, 65535, .decimal);
pub const __INT16_MAX__ = @as(c_int, 32767);
pub const __UINT32_TYPE__ = c_uint;
pub const __UINT32_FMTo__ = "o";
pub const __UINT32_FMTu__ = "u";
pub const __UINT32_FMTx__ = "x";
pub const __UINT32_FMTX__ = "X";
pub const __UINT32_C_SUFFIX__ = @compileError("unable to translate macro: undefined identifier `U`");
// (no file):224:9
pub const __UINT32_MAX__ = @import("std").zig.c_translation.promoteIntLiteral(c_uint, 4294967295, .decimal);
pub const __INT32_MAX__ = @import("std").zig.c_translation.promoteIntLiteral(c_int, 2147483647, .decimal);
pub const __UINT64_TYPE__ = c_ulong;
pub const __UINT64_FMTo__ = "lo";
pub const __UINT64_FMTu__ = "lu";
pub const __UINT64_FMTx__ = "lx";
pub const __UINT64_FMTX__ = "lX";
pub const __UINT64_C_SUFFIX__ = @compileError("unable to translate macro: undefined identifier `UL`");
// (no file):232:9
pub const __UINT64_MAX__ = @import("std").zig.c_translation.promoteIntLiteral(c_ulong, 18446744073709551615, .decimal);
pub const __INT64_MAX__ = @import("std").zig.c_translation.promoteIntLiteral(c_long, 9223372036854775807, .decimal);
pub const __INT_LEAST8_TYPE__ = i8;
pub const __INT_LEAST8_MAX__ = @as(c_int, 127);
pub const __INT_LEAST8_WIDTH__ = @as(c_int, 8);
pub const __INT_LEAST8_FMTd__ = "hhd";
pub const __INT_LEAST8_FMTi__ = "hhi";
pub const __UINT_LEAST8_TYPE__ = u8;
pub const __UINT_LEAST8_MAX__ = @as(c_int, 255);
pub const __UINT_LEAST8_FMTo__ = "hho";
pub const __UINT_LEAST8_FMTu__ = "hhu";
pub const __UINT_LEAST8_FMTx__ = "hhx";
pub const __UINT_LEAST8_FMTX__ = "hhX";
pub const __INT_LEAST16_TYPE__ = c_short;
pub const __INT_LEAST16_MAX__ = @as(c_int, 32767);
pub const __INT_LEAST16_WIDTH__ = @as(c_int, 16);
pub const __INT_LEAST16_FMTd__ = "hd";
pub const __INT_LEAST16_FMTi__ = "hi";
pub const __UINT_LEAST16_TYPE__ = c_ushort;
pub const __UINT_LEAST16_MAX__ = @import("std").zig.c_translation.promoteIntLiteral(c_int, 65535, .decimal);
pub const __UINT_LEAST16_FMTo__ = "ho";
pub const __UINT_LEAST16_FMTu__ = "hu";
pub const __UINT_LEAST16_FMTx__ = "hx";
pub const __UINT_LEAST16_FMTX__ = "hX";
pub const __INT_LEAST32_TYPE__ = c_int;
pub const __INT_LEAST32_MAX__ = @import("std").zig.c_translation.promoteIntLiteral(c_int, 2147483647, .decimal);
pub const __INT_LEAST32_WIDTH__ = @as(c_int, 32);
pub const __INT_LEAST32_FMTd__ = "d";
pub const __INT_LEAST32_FMTi__ = "i";
pub const __UINT_LEAST32_TYPE__ = c_uint;
pub const __UINT_LEAST32_MAX__ = @import("std").zig.c_translation.promoteIntLiteral(c_uint, 4294967295, .decimal);
pub const __UINT_LEAST32_FMTo__ = "o";
pub const __UINT_LEAST32_FMTu__ = "u";
pub const __UINT_LEAST32_FMTx__ = "x";
pub const __UINT_LEAST32_FMTX__ = "X";
pub const __INT_LEAST64_TYPE__ = c_long;
pub const __INT_LEAST64_MAX__ = @import("std").zig.c_translation.promoteIntLiteral(c_long, 9223372036854775807, .decimal);
pub const __INT_LEAST64_WIDTH__ = @as(c_int, 64);
pub const __INT_LEAST64_FMTd__ = "ld";
pub const __INT_LEAST64_FMTi__ = "li";
pub const __UINT_LEAST64_TYPE__ = c_ulong;
pub const __UINT_LEAST64_MAX__ = @import("std").zig.c_translation.promoteIntLiteral(c_ulong, 18446744073709551615, .decimal);
pub const __UINT_LEAST64_FMTo__ = "lo";
pub const __UINT_LEAST64_FMTu__ = "lu";
pub const __UINT_LEAST64_FMTx__ = "lx";
pub const __UINT_LEAST64_FMTX__ = "lX";
pub const __INT_FAST8_TYPE__ = i8;
pub const __INT_FAST8_MAX__ = @as(c_int, 127);
pub const __INT_FAST8_WIDTH__ = @as(c_int, 8);
pub const __INT_FAST8_FMTd__ = "hhd";
pub const __INT_FAST8_FMTi__ = "hhi";
pub const __UINT_FAST8_TYPE__ = u8;
pub const __UINT_FAST8_MAX__ = @as(c_int, 255);
pub const __UINT_FAST8_FMTo__ = "hho";
pub const __UINT_FAST8_FMTu__ = "hhu";
pub const __UINT_FAST8_FMTx__ = "hhx";
pub const __UINT_FAST8_FMTX__ = "hhX";
pub const __INT_FAST16_TYPE__ = c_short;
pub const __INT_FAST16_MAX__ = @as(c_int, 32767);
pub const __INT_FAST16_WIDTH__ = @as(c_int, 16);
pub const __INT_FAST16_FMTd__ = "hd";
pub const __INT_FAST16_FMTi__ = "hi";
pub const __UINT_FAST16_TYPE__ = c_ushort;
pub const __UINT_FAST16_MAX__ = @import("std").zig.c_translation.promoteIntLiteral(c_int, 65535, .decimal);
pub const __UINT_FAST16_FMTo__ = "ho";
pub const __UINT_FAST16_FMTu__ = "hu";
pub const __UINT_FAST16_FMTx__ = "hx";
pub const __UINT_FAST16_FMTX__ = "hX";
pub const __INT_FAST32_TYPE__ = c_int;
pub const __INT_FAST32_MAX__ = @import("std").zig.c_translation.promoteIntLiteral(c_int, 2147483647, .decimal);
pub const __INT_FAST32_WIDTH__ = @as(c_int, 32);
pub const __INT_FAST32_FMTd__ = "d";
pub const __INT_FAST32_FMTi__ = "i";
pub const __UINT_FAST32_TYPE__ = c_uint;
pub const __UINT_FAST32_MAX__ = @import("std").zig.c_translation.promoteIntLiteral(c_uint, 4294967295, .decimal);
pub const __UINT_FAST32_FMTo__ = "o";
pub const __UINT_FAST32_FMTu__ = "u";
pub const __UINT_FAST32_FMTx__ = "x";
pub const __UINT_FAST32_FMTX__ = "X";
pub const __INT_FAST64_TYPE__ = c_long;
pub const __INT_FAST64_MAX__ = @import("std").zig.c_translation.promoteIntLiteral(c_long, 9223372036854775807, .decimal);
pub const __INT_FAST64_WIDTH__ = @as(c_int, 64);
pub const __INT_FAST64_FMTd__ = "ld";
pub const __INT_FAST64_FMTi__ = "li";
pub const __UINT_FAST64_TYPE__ = c_ulong;
pub const __UINT_FAST64_MAX__ = @import("std").zig.c_translation.promoteIntLiteral(c_ulong, 18446744073709551615, .decimal);
pub const __UINT_FAST64_FMTo__ = "lo";
pub const __UINT_FAST64_FMTu__ = "lu";
pub const __UINT_FAST64_FMTx__ = "lx";
pub const __UINT_FAST64_FMTX__ = "lX";
pub const __USER_LABEL_PREFIX__ = "";
pub const __FINITE_MATH_ONLY__ = @as(c_int, 0);
pub const __GNUC_STDC_INLINE__ = @as(c_int, 1);
pub const __GCC_ATOMIC_TEST_AND_SET_TRUEVAL = @as(c_int, 1);
pub const __GCC_DESTRUCTIVE_SIZE = @as(c_int, 64);
pub const __GCC_CONSTRUCTIVE_SIZE = @as(c_int, 64);
pub const __CLANG_ATOMIC_BOOL_LOCK_FREE = @as(c_int, 2);
pub const __CLANG_ATOMIC_CHAR_LOCK_FREE = @as(c_int, 2);
pub const __CLANG_ATOMIC_CHAR16_T_LOCK_FREE = @as(c_int, 2);
pub const __CLANG_ATOMIC_CHAR32_T_LOCK_FREE = @as(c_int, 2);
pub const __CLANG_ATOMIC_WCHAR_T_LOCK_FREE = @as(c_int, 2);
pub const __CLANG_ATOMIC_SHORT_LOCK_FREE = @as(c_int, 2);
pub const __CLANG_ATOMIC_INT_LOCK_FREE = @as(c_int, 2);
pub const __CLANG_ATOMIC_LONG_LOCK_FREE = @as(c_int, 2);
pub const __CLANG_ATOMIC_LLONG_LOCK_FREE = @as(c_int, 2);
pub const __CLANG_ATOMIC_POINTER_LOCK_FREE = @as(c_int, 2);
pub const __GCC_ATOMIC_BOOL_LOCK_FREE = @as(c_int, 2);
pub const __GCC_ATOMIC_CHAR_LOCK_FREE = @as(c_int, 2);
pub const __GCC_ATOMIC_CHAR16_T_LOCK_FREE = @as(c_int, 2);
pub const __GCC_ATOMIC_CHAR32_T_LOCK_FREE = @as(c_int, 2);
pub const __GCC_ATOMIC_WCHAR_T_LOCK_FREE = @as(c_int, 2);
pub const __GCC_ATOMIC_SHORT_LOCK_FREE = @as(c_int, 2);
pub const __GCC_ATOMIC_INT_LOCK_FREE = @as(c_int, 2);
pub const __GCC_ATOMIC_LONG_LOCK_FREE = @as(c_int, 2);
pub const __GCC_ATOMIC_LLONG_LOCK_FREE = @as(c_int, 2);
pub const __GCC_ATOMIC_POINTER_LOCK_FREE = @as(c_int, 2);
pub const __NO_INLINE__ = @as(c_int, 1);
pub const __FLT_RADIX__ = @as(c_int, 2);
pub const __DECIMAL_DIG__ = __LDBL_DECIMAL_DIG__;
pub const __ELF__ = @as(c_int, 1);
pub const __GCC_ASM_FLAG_OUTPUTS__ = @as(c_int, 1);
pub const __code_model_small__ = @as(c_int, 1);
pub const __amd64__ = @as(c_int, 1);
pub const __amd64 = @as(c_int, 1);
pub const __x86_64 = @as(c_int, 1);
pub const __x86_64__ = @as(c_int, 1);
pub const __SEG_GS = @as(c_int, 1);
pub const __SEG_FS = @as(c_int, 1);
pub const __seg_gs = @compileError("unable to translate macro: undefined identifier `address_space`");
// (no file):363:9
pub const __seg_fs = @compileError("unable to translate macro: undefined identifier `address_space`");
// (no file):364:9
pub const __znver4 = @as(c_int, 1);
pub const __znver4__ = @as(c_int, 1);
pub const __tune_znver4__ = @as(c_int, 1);
pub const __REGISTER_PREFIX__ = "";
pub const __NO_MATH_INLINES = @as(c_int, 1);
pub const __AES__ = @as(c_int, 1);
pub const __VAES__ = @as(c_int, 1);
pub const __PCLMUL__ = @as(c_int, 1);
pub const __VPCLMULQDQ__ = @as(c_int, 1);
pub const __LAHF_SAHF__ = @as(c_int, 1);
pub const __LZCNT__ = @as(c_int, 1);
pub const __RDRND__ = @as(c_int, 1);
pub const __FSGSBASE__ = @as(c_int, 1);
pub const __BMI__ = @as(c_int, 1);
pub const __BMI2__ = @as(c_int, 1);
pub const __POPCNT__ = @as(c_int, 1);
pub const __PRFCHW__ = @as(c_int, 1);
pub const __RDSEED__ = @as(c_int, 1);
pub const __ADX__ = @as(c_int, 1);
pub const __MOVBE__ = @as(c_int, 1);
pub const __SSE4A__ = @as(c_int, 1);
pub const __FMA__ = @as(c_int, 1);
pub const __F16C__ = @as(c_int, 1);
pub const __GFNI__ = @as(c_int, 1);
pub const __EVEX512__ = @as(c_int, 1);
pub const __AVX512CD__ = @as(c_int, 1);
pub const __AVX512VPOPCNTDQ__ = @as(c_int, 1);
pub const __AVX512VNNI__ = @as(c_int, 1);
pub const __AVX512BF16__ = @as(c_int, 1);
pub const __AVX512DQ__ = @as(c_int, 1);
pub const __AVX512BITALG__ = @as(c_int, 1);
pub const __AVX512BW__ = @as(c_int, 1);
pub const __AVX512VL__ = @as(c_int, 1);
pub const __EVEX256__ = @as(c_int, 1);
pub const __AVX512VBMI__ = @as(c_int, 1);
pub const __AVX512VBMI2__ = @as(c_int, 1);
pub const __AVX512IFMA__ = @as(c_int, 1);
pub const __SHA__ = @as(c_int, 1);
pub const __FXSR__ = @as(c_int, 1);
pub const __XSAVE__ = @as(c_int, 1);
pub const __XSAVEOPT__ = @as(c_int, 1);
pub const __XSAVEC__ = @as(c_int, 1);
pub const __XSAVES__ = @as(c_int, 1);
pub const __CLFLUSHOPT__ = @as(c_int, 1);
pub const __CLWB__ = @as(c_int, 1);
pub const __SHSTK__ = @as(c_int, 1);
pub const __CLZERO__ = @as(c_int, 1);
pub const __RDPID__ = @as(c_int, 1);
pub const __RDPRU__ = @as(c_int, 1);
pub const __INVPCID__ = @as(c_int, 1);
pub const __CRC32__ = @as(c_int, 1);
pub const __AVX512F__ = @as(c_int, 1);
pub const __AVX2__ = @as(c_int, 1);
pub const __AVX__ = @as(c_int, 1);
pub const __SSE4_2__ = @as(c_int, 1);
pub const __SSE4_1__ = @as(c_int, 1);
pub const __SSSE3__ = @as(c_int, 1);
pub const __SSE3__ = @as(c_int, 1);
pub const __SSE2__ = @as(c_int, 1);
pub const __SSE2_MATH__ = @as(c_int, 1);
pub const __SSE__ = @as(c_int, 1);
pub const __SSE_MATH__ = @as(c_int, 1);
pub const __MMX__ = @as(c_int, 1);
pub const __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 = @as(c_int, 1);
pub const __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 = @as(c_int, 1);
pub const __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 = @as(c_int, 1);
pub const __GCC_HAVE_SYNC_COMPARE_AND_SWAP_8 = @as(c_int, 1);
pub const __GCC_HAVE_SYNC_COMPARE_AND_SWAP_16 = @as(c_int, 1);
pub const __SIZEOF_FLOAT128__ = @as(c_int, 16);
pub const unix = @as(c_int, 1);
pub const __unix = @as(c_int, 1);
pub const __unix__ = @as(c_int, 1);
pub const linux = @as(c_int, 1);
pub const __linux = @as(c_int, 1);
pub const __linux__ = @as(c_int, 1);
pub const __gnu_linux__ = @as(c_int, 1);
pub const __FLOAT128__ = @as(c_int, 1);
pub const __STDC__ = @as(c_int, 1);
pub const __STDC_HOSTED__ = @as(c_int, 1);
pub const __STDC_VERSION__ = @as(c_long, 201710);
pub const __STDC_UTF_16__ = @as(c_int, 1);
pub const __STDC_UTF_32__ = @as(c_int, 1);
pub const __STDC_EMBED_NOT_FOUND__ = @as(c_int, 0);
pub const __STDC_EMBED_FOUND__ = @as(c_int, 1);
pub const __STDC_EMBED_EMPTY__ = @as(c_int, 2);
pub const _DEBUG = @as(c_int, 1);
pub const __GCC_HAVE_DWARF2_CFI_ASM = @as(c_int, 1);
pub const PROTOBUF_C__NO_DEPRECATED = "";
pub const PROTOBUF_C_onnx_2eproto3__INCLUDED = "";
pub const PROTOBUF_C_H = "";
pub const _ASSERT_H = @as(c_int, 1);
pub const _FEATURES_H = @as(c_int, 1);
pub const __KERNEL_STRICT_NAMES = "";
pub inline fn __GNUC_PREREQ(maj: anytype, min: anytype) @TypeOf(((__GNUC__ << @as(c_int, 16)) + __GNUC_MINOR__) >= ((maj << @as(c_int, 16)) + min)) {
    _ = &maj;
    _ = &min;
    return ((__GNUC__ << @as(c_int, 16)) + __GNUC_MINOR__) >= ((maj << @as(c_int, 16)) + min);
}
pub inline fn __glibc_clang_prereq(maj: anytype, min: anytype) @TypeOf(((__clang_major__ << @as(c_int, 16)) + __clang_minor__) >= ((maj << @as(c_int, 16)) + min)) {
    _ = &maj;
    _ = &min;
    return ((__clang_major__ << @as(c_int, 16)) + __clang_minor__) >= ((maj << @as(c_int, 16)) + min);
}
pub const __GLIBC_USE = @compileError("unable to translate macro: undefined identifier `__GLIBC_USE_`");
// /usr/include/features.h:186:9
pub const _DEFAULT_SOURCE = @as(c_int, 1);
pub const __GLIBC_USE_ISOC2X = @as(c_int, 0);
pub const __USE_ISOC11 = @as(c_int, 1);
pub const __USE_ISOC99 = @as(c_int, 1);
pub const __USE_ISOC95 = @as(c_int, 1);
pub const __USE_POSIX_IMPLICITLY = @as(c_int, 1);
pub const _POSIX_SOURCE = @as(c_int, 1);
pub const _POSIX_C_SOURCE = @as(c_long, 200809);
pub const __USE_POSIX = @as(c_int, 1);
pub const __USE_POSIX2 = @as(c_int, 1);
pub const __USE_POSIX199309 = @as(c_int, 1);
pub const __USE_POSIX199506 = @as(c_int, 1);
pub const __USE_XOPEN2K = @as(c_int, 1);
pub const __USE_XOPEN2K8 = @as(c_int, 1);
pub const _ATFILE_SOURCE = @as(c_int, 1);
pub const __WORDSIZE = @as(c_int, 64);
pub const __WORDSIZE_TIME64_COMPAT32 = @as(c_int, 1);
pub const __SYSCALL_WORDSIZE = @as(c_int, 64);
pub const __TIMESIZE = __WORDSIZE;
pub const __USE_MISC = @as(c_int, 1);
pub const __USE_ATFILE = @as(c_int, 1);
pub const __USE_FORTIFY_LEVEL = @as(c_int, 0);
pub const __GLIBC_USE_DEPRECATED_GETS = @as(c_int, 0);
pub const __GLIBC_USE_DEPRECATED_SCANF = @as(c_int, 0);
pub const _STDC_PREDEF_H = @as(c_int, 1);
pub const __STDC_IEC_559__ = @as(c_int, 1);
pub const __STDC_IEC_60559_BFP__ = @as(c_long, 201404);
pub const __STDC_IEC_559_COMPLEX__ = @as(c_int, 1);
pub const __STDC_IEC_60559_COMPLEX__ = @as(c_long, 201404);
pub const __STDC_ISO_10646__ = @as(c_long, 201706);
pub const __GNU_LIBRARY__ = @as(c_int, 6);
pub const __GLIBC__ = @as(c_int, 2);
pub const __GLIBC_MINOR__ = @as(c_int, 35);
pub inline fn __GLIBC_PREREQ(maj: anytype, min: anytype) @TypeOf(((__GLIBC__ << @as(c_int, 16)) + __GLIBC_MINOR__) >= ((maj << @as(c_int, 16)) + min)) {
    _ = &maj;
    _ = &min;
    return ((__GLIBC__ << @as(c_int, 16)) + __GLIBC_MINOR__) >= ((maj << @as(c_int, 16)) + min);
}
pub const _SYS_CDEFS_H = @as(c_int, 1);
pub const __glibc_has_attribute = @compileError("unable to translate macro: undefined identifier `__has_attribute`");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:45:10
pub inline fn __glibc_has_builtin(name: anytype) @TypeOf(__has_builtin(name)) {
    _ = &name;
    return __has_builtin(name);
}
pub const __glibc_has_extension = @compileError("unable to translate macro: undefined identifier `__has_extension`");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:55:10
pub const __LEAF = "";
pub const __LEAF_ATTR = "";
pub const __THROW = @compileError("unable to translate macro: undefined identifier `__nothrow__`");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:79:11
pub const __THROWNL = @compileError("unable to translate macro: undefined identifier `__nothrow__`");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:80:11
pub const __NTH = @compileError("unable to translate macro: undefined identifier `__nothrow__`");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:81:11
pub const __NTHNL = @compileError("unable to translate macro: undefined identifier `__nothrow__`");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:82:11
pub inline fn __P(args: anytype) @TypeOf(args) {
    _ = &args;
    return args;
}
pub inline fn __PMT(args: anytype) @TypeOf(args) {
    _ = &args;
    return args;
}
pub const __CONCAT = @compileError("unable to translate C expr: unexpected token '##'");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:124:9
pub const __STRING = @compileError("unable to translate C expr: unexpected token '#'");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:125:9
pub const __ptr_t = ?*anyopaque;
pub const __BEGIN_DECLS = "";
pub const __END_DECLS = "";
pub inline fn __bos(ptr: anytype) @TypeOf(__builtin_object_size(ptr, __USE_FORTIFY_LEVEL > @as(c_int, 1))) {
    _ = &ptr;
    return __builtin_object_size(ptr, __USE_FORTIFY_LEVEL > @as(c_int, 1));
}
pub inline fn __bos0(ptr: anytype) @TypeOf(__builtin_object_size(ptr, @as(c_int, 0))) {
    _ = &ptr;
    return __builtin_object_size(ptr, @as(c_int, 0));
}
pub inline fn __glibc_objsize0(__o: anytype) @TypeOf(__bos0(__o)) {
    _ = &__o;
    return __bos0(__o);
}
pub inline fn __glibc_objsize(__o: anytype) @TypeOf(__bos(__o)) {
    _ = &__o;
    return __bos(__o);
}
pub inline fn __glibc_safe_len_cond(__l: anytype, __s: anytype, __osz: anytype) @TypeOf(__l <= @import("std").zig.c_translation.MacroArithmetic.div(__osz, __s)) {
    _ = &__l;
    _ = &__s;
    _ = &__osz;
    return __l <= @import("std").zig.c_translation.MacroArithmetic.div(__osz, __s);
}
pub const __glibc_unsigned_or_positive = @compileError("unable to translate C expr: unexpected token '__typeof'");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:160:9
pub inline fn __glibc_safe_or_unknown_len(__l: anytype, __s: anytype, __osz: anytype) @TypeOf(((__glibc_unsigned_or_positive(__l) != 0) and (__builtin_constant_p(__glibc_safe_len_cond(__SIZE_TYPE__(__l), __s, __osz)) != 0)) and (__glibc_safe_len_cond(__SIZE_TYPE__(__l), __s, __osz) != 0)) {
    _ = &__l;
    _ = &__s;
    _ = &__osz;
    return ((__glibc_unsigned_or_positive(__l) != 0) and (__builtin_constant_p(__glibc_safe_len_cond(__SIZE_TYPE__(__l), __s, __osz)) != 0)) and (__glibc_safe_len_cond(__SIZE_TYPE__(__l), __s, __osz) != 0);
}
pub inline fn __glibc_unsafe_len(__l: anytype, __s: anytype, __osz: anytype) @TypeOf(((__glibc_unsigned_or_positive(__l) != 0) and (__builtin_constant_p(__glibc_safe_len_cond(__SIZE_TYPE__(__l), __s, __osz)) != 0)) and !(__glibc_safe_len_cond(__SIZE_TYPE__(__l), __s, __osz) != 0)) {
    _ = &__l;
    _ = &__s;
    _ = &__osz;
    return ((__glibc_unsigned_or_positive(__l) != 0) and (__builtin_constant_p(__glibc_safe_len_cond(__SIZE_TYPE__(__l), __s, __osz)) != 0)) and !(__glibc_safe_len_cond(__SIZE_TYPE__(__l), __s, __osz) != 0);
}
pub const __glibc_fortify = @compileError("unable to translate C expr: expected ')' instead got '...'");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:185:9
pub const __glibc_fortify_n = @compileError("unable to translate C expr: expected ')' instead got '...'");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:195:9
pub const __warnattr = @compileError("unable to translate C expr: unexpected token ''");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:207:10
pub const __errordecl = @compileError("unable to translate C expr: unexpected token 'extern'");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:208:10
pub const __flexarr = @compileError("unable to translate C expr: unexpected token '['");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:216:10
pub const __glibc_c99_flexarr_available = @as(c_int, 1);
pub const __REDIRECT = @compileError("unable to translate C expr: unexpected token '__asm__'");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:247:10
pub const __REDIRECT_NTH = @compileError("unable to translate C expr: unexpected token '__asm__'");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:254:11
pub const __REDIRECT_NTHNL = @compileError("unable to translate C expr: unexpected token '__asm__'");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:256:11
pub const __ASMNAME = @compileError("unable to translate C expr: unexpected token ','");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:259:10
pub inline fn __ASMNAME2(prefix: anytype, cname: anytype) @TypeOf(__STRING(prefix) ++ cname) {
    _ = &prefix;
    _ = &cname;
    return __STRING(prefix) ++ cname;
}
pub const __attribute_malloc__ = @compileError("unable to translate macro: undefined identifier `__malloc__`");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:281:10
pub const __attribute_alloc_size__ = @compileError("unable to translate C expr: unexpected token ''");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:292:10
pub const __attribute_alloc_align__ = @compileError("unable to translate macro: undefined identifier `__alloc_align__`");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:298:10
pub const __attribute_pure__ = @compileError("unable to translate macro: undefined identifier `__pure__`");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:308:10
pub const __attribute_const__ = @compileError("unable to translate C expr: unexpected token '__attribute__'");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:315:10
pub const __attribute_maybe_unused__ = @compileError("unable to translate macro: undefined identifier `__unused__`");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:321:10
pub const __attribute_used__ = @compileError("unable to translate macro: undefined identifier `__used__`");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:330:10
pub const __attribute_noinline__ = @compileError("unable to translate macro: undefined identifier `__noinline__`");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:331:10
pub const __attribute_deprecated__ = @compileError("unable to translate macro: undefined identifier `__deprecated__`");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:339:10
pub const __attribute_deprecated_msg__ = @compileError("unable to translate macro: undefined identifier `__deprecated__`");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:349:10
pub const __attribute_format_arg__ = @compileError("unable to translate macro: undefined identifier `__format_arg__`");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:362:10
pub const __attribute_format_strfmon__ = @compileError("unable to translate macro: undefined identifier `__format__`");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:372:10
pub const __attribute_nonnull__ = @compileError("unable to translate macro: undefined identifier `__nonnull__`");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:384:11
pub inline fn __nonnull(params: anytype) @TypeOf(__attribute_nonnull__(params)) {
    _ = &params;
    return __attribute_nonnull__(params);
}
pub const __returns_nonnull = @compileError("unable to translate macro: undefined identifier `__returns_nonnull__`");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:397:10
pub const __attribute_warn_unused_result__ = @compileError("unable to translate macro: undefined identifier `__warn_unused_result__`");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:406:10
pub const __wur = "";
pub const __always_inline = @compileError("unable to translate macro: undefined identifier `__always_inline__`");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:424:10
pub const __attribute_artificial__ = @compileError("unable to translate macro: undefined identifier `__artificial__`");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:433:10
pub const __extern_inline = @compileError("unable to translate macro: undefined identifier `__gnu_inline__`");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:451:11
pub const __extern_always_inline = @compileError("unable to translate macro: undefined identifier `__gnu_inline__`");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:452:11
pub const __fortify_function = __extern_always_inline ++ __attribute_artificial__;
pub const __restrict_arr = @compileError("unable to translate C expr: unexpected token '__restrict'");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:495:10
pub inline fn __glibc_unlikely(cond: anytype) @TypeOf(__builtin_expect(cond, @as(c_int, 0))) {
    _ = &cond;
    return __builtin_expect(cond, @as(c_int, 0));
}
pub inline fn __glibc_likely(cond: anytype) @TypeOf(__builtin_expect(cond, @as(c_int, 1))) {
    _ = &cond;
    return __builtin_expect(cond, @as(c_int, 1));
}
pub const __attribute_nonstring__ = "";
pub const __attribute_copy__ = @compileError("unable to translate C expr: unexpected token ''");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:544:10
pub const __LDOUBLE_REDIRECTS_TO_FLOAT128_ABI = @as(c_int, 0);
pub inline fn __LDBL_REDIR1(name: anytype, proto: anytype, alias: anytype) @TypeOf(name ++ proto) {
    _ = &name;
    _ = &proto;
    _ = &alias;
    return name ++ proto;
}
pub inline fn __LDBL_REDIR(name: anytype, proto: anytype) @TypeOf(name ++ proto) {
    _ = &name;
    _ = &proto;
    return name ++ proto;
}
pub inline fn __LDBL_REDIR1_NTH(name: anytype, proto: anytype, alias: anytype) @TypeOf(name ++ proto ++ __THROW) {
    _ = &name;
    _ = &proto;
    _ = &alias;
    return name ++ proto ++ __THROW;
}
pub inline fn __LDBL_REDIR_NTH(name: anytype, proto: anytype) @TypeOf(name ++ proto ++ __THROW) {
    _ = &name;
    _ = &proto;
    return name ++ proto ++ __THROW;
}
pub const __LDBL_REDIR2_DECL = @compileError("unable to translate C expr: unexpected token ''");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:620:10
pub const __LDBL_REDIR_DECL = @compileError("unable to translate C expr: unexpected token ''");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:621:10
pub inline fn __REDIRECT_LDBL(name: anytype, proto: anytype, alias: anytype) @TypeOf(__REDIRECT(name, proto, alias)) {
    _ = &name;
    _ = &proto;
    _ = &alias;
    return __REDIRECT(name, proto, alias);
}
pub inline fn __REDIRECT_NTH_LDBL(name: anytype, proto: anytype, alias: anytype) @TypeOf(__REDIRECT_NTH(name, proto, alias)) {
    _ = &name;
    _ = &proto;
    _ = &alias;
    return __REDIRECT_NTH(name, proto, alias);
}
pub const __glibc_macro_warning1 = @compileError("unable to translate macro: undefined identifier `_Pragma`");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:635:10
pub const __glibc_macro_warning = @compileError("unable to translate macro: undefined identifier `GCC`");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:636:10
pub const __HAVE_GENERIC_SELECTION = @as(c_int, 1);
pub const __fortified_attr_access = @compileError("unable to translate C expr: unexpected token ''");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:681:11
pub const __attr_access = @compileError("unable to translate C expr: unexpected token ''");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:682:11
pub const __attr_access_none = @compileError("unable to translate C expr: unexpected token ''");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:683:11
pub const __attr_dealloc = @compileError("unable to translate C expr: unexpected token ''");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:693:10
pub const __attr_dealloc_free = "";
pub const __attribute_returns_twice__ = @compileError("unable to translate macro: undefined identifier `__returns_twice__`");
// /usr/include/x86_64-linux-gnu/sys/cdefs.h:700:10
pub const __stub___compat_bdflush = "";
pub const __stub_chflags = "";
pub const __stub_fchflags = "";
pub const __stub_gtty = "";
pub const __stub_revoke = "";
pub const __stub_setlogin = "";
pub const __stub_sigreturn = "";
pub const __stub_stty = "";
pub const __ASSERT_VOID_CAST = @compileError("unable to translate C expr: unexpected token ''");
// /usr/include/assert.h:40:10
pub const _ASSERT_H_DECLS = "";
pub const assert = @compileError("unable to translate macro: undefined identifier `__FILE__`");
// /usr/include/assert.h:107:11
pub const __ASSERT_FUNCTION = @compileError("unable to translate C expr: unexpected token '__extension__'");
// /usr/include/assert.h:129:12
pub const static_assert = @compileError("unable to translate C expr: unexpected token '_Static_assert'");
// /usr/include/assert.h:143:10
pub const __CLANG_LIMITS_H = "";
pub const _GCC_LIMITS_H_ = "";
pub const _LIBC_LIMITS_H_ = @as(c_int, 1);
pub const __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION = "";
pub const __GLIBC_USE_LIB_EXT2 = @as(c_int, 0);
pub const __GLIBC_USE_IEC_60559_BFP_EXT = @as(c_int, 0);
pub const __GLIBC_USE_IEC_60559_BFP_EXT_C2X = @as(c_int, 0);
pub const __GLIBC_USE_IEC_60559_EXT = @as(c_int, 0);
pub const __GLIBC_USE_IEC_60559_FUNCS_EXT = @as(c_int, 0);
pub const __GLIBC_USE_IEC_60559_FUNCS_EXT_C2X = @as(c_int, 0);
pub const __GLIBC_USE_IEC_60559_TYPES_EXT = @as(c_int, 0);
pub const MB_LEN_MAX = @as(c_int, 16);
pub const LLONG_MIN = -LLONG_MAX - @as(c_int, 1);
pub const LLONG_MAX = __LONG_LONG_MAX__;
pub const ULLONG_MAX = (LLONG_MAX * @as(c_ulonglong, 2)) + @as(c_int, 1);
pub const _BITS_POSIX1_LIM_H = @as(c_int, 1);
pub const _POSIX_AIO_LISTIO_MAX = @as(c_int, 2);
pub const _POSIX_AIO_MAX = @as(c_int, 1);
pub const _POSIX_ARG_MAX = @as(c_int, 4096);
pub const _POSIX_CHILD_MAX = @as(c_int, 25);
pub const _POSIX_DELAYTIMER_MAX = @as(c_int, 32);
pub const _POSIX_HOST_NAME_MAX = @as(c_int, 255);
pub const _POSIX_LINK_MAX = @as(c_int, 8);
pub const _POSIX_LOGIN_NAME_MAX = @as(c_int, 9);
pub const _POSIX_MAX_CANON = @as(c_int, 255);
pub const _POSIX_MAX_INPUT = @as(c_int, 255);
pub const _POSIX_MQ_OPEN_MAX = @as(c_int, 8);
pub const _POSIX_MQ_PRIO_MAX = @as(c_int, 32);
pub const _POSIX_NAME_MAX = @as(c_int, 14);
pub const _POSIX_NGROUPS_MAX = @as(c_int, 8);
pub const _POSIX_OPEN_MAX = @as(c_int, 20);
pub const _POSIX_PATH_MAX = @as(c_int, 256);
pub const _POSIX_PIPE_BUF = @as(c_int, 512);
pub const _POSIX_RE_DUP_MAX = @as(c_int, 255);
pub const _POSIX_RTSIG_MAX = @as(c_int, 8);
pub const _POSIX_SEM_NSEMS_MAX = @as(c_int, 256);
pub const _POSIX_SEM_VALUE_MAX = @as(c_int, 32767);
pub const _POSIX_SIGQUEUE_MAX = @as(c_int, 32);
pub const _POSIX_SSIZE_MAX = @as(c_int, 32767);
pub const _POSIX_STREAM_MAX = @as(c_int, 8);
pub const _POSIX_SYMLINK_MAX = @as(c_int, 255);
pub const _POSIX_SYMLOOP_MAX = @as(c_int, 8);
pub const _POSIX_TIMER_MAX = @as(c_int, 32);
pub const _POSIX_TTY_NAME_MAX = @as(c_int, 9);
pub const _POSIX_TZNAME_MAX = @as(c_int, 6);
pub const _POSIX_CLOCKRES_MIN = @import("std").zig.c_translation.promoteIntLiteral(c_int, 20000000, .decimal);
pub const __undef_NR_OPEN = "";
pub const __undef_LINK_MAX = "";
pub const __undef_OPEN_MAX = "";
pub const __undef_ARG_MAX = "";
pub const _LINUX_LIMITS_H = "";
pub const NR_OPEN = @as(c_int, 1024);
pub const NGROUPS_MAX = @import("std").zig.c_translation.promoteIntLiteral(c_int, 65536, .decimal);
pub const ARG_MAX = @import("std").zig.c_translation.promoteIntLiteral(c_int, 131072, .decimal);
pub const LINK_MAX = @as(c_int, 127);
pub const MAX_CANON = @as(c_int, 255);
pub const MAX_INPUT = @as(c_int, 255);
pub const NAME_MAX = @as(c_int, 255);
pub const PATH_MAX = @as(c_int, 4096);
pub const PIPE_BUF = @as(c_int, 4096);
pub const XATTR_NAME_MAX = @as(c_int, 255);
pub const XATTR_SIZE_MAX = @import("std").zig.c_translation.promoteIntLiteral(c_int, 65536, .decimal);
pub const XATTR_LIST_MAX = @import("std").zig.c_translation.promoteIntLiteral(c_int, 65536, .decimal);
pub const RTSIG_MAX = @as(c_int, 32);
pub const _POSIX_THREAD_KEYS_MAX = @as(c_int, 128);
pub const PTHREAD_KEYS_MAX = @as(c_int, 1024);
pub const _POSIX_THREAD_DESTRUCTOR_ITERATIONS = @as(c_int, 4);
pub const PTHREAD_DESTRUCTOR_ITERATIONS = _POSIX_THREAD_DESTRUCTOR_ITERATIONS;
pub const _POSIX_THREAD_THREADS_MAX = @as(c_int, 64);
pub const AIO_PRIO_DELTA_MAX = @as(c_int, 20);
pub const PTHREAD_STACK_MIN = @as(c_int, 16384);
pub const DELAYTIMER_MAX = @import("std").zig.c_translation.promoteIntLiteral(c_int, 2147483647, .decimal);
pub const TTY_NAME_MAX = @as(c_int, 32);
pub const LOGIN_NAME_MAX = @as(c_int, 256);
pub const HOST_NAME_MAX = @as(c_int, 64);
pub const MQ_PRIO_MAX = @import("std").zig.c_translation.promoteIntLiteral(c_int, 32768, .decimal);
pub const SEM_VALUE_MAX = @import("std").zig.c_translation.promoteIntLiteral(c_int, 2147483647, .decimal);
pub const SSIZE_MAX = LONG_MAX;
pub const _BITS_POSIX2_LIM_H = @as(c_int, 1);
pub const _POSIX2_BC_BASE_MAX = @as(c_int, 99);
pub const _POSIX2_BC_DIM_MAX = @as(c_int, 2048);
pub const _POSIX2_BC_SCALE_MAX = @as(c_int, 99);
pub const _POSIX2_BC_STRING_MAX = @as(c_int, 1000);
pub const _POSIX2_COLL_WEIGHTS_MAX = @as(c_int, 2);
pub const _POSIX2_EXPR_NEST_MAX = @as(c_int, 32);
pub const _POSIX2_LINE_MAX = @as(c_int, 2048);
pub const _POSIX2_RE_DUP_MAX = @as(c_int, 255);
pub const _POSIX2_CHARCLASS_NAME_MAX = @as(c_int, 14);
pub const BC_BASE_MAX = _POSIX2_BC_BASE_MAX;
pub const BC_DIM_MAX = _POSIX2_BC_DIM_MAX;
pub const BC_SCALE_MAX = _POSIX2_BC_SCALE_MAX;
pub const BC_STRING_MAX = _POSIX2_BC_STRING_MAX;
pub const COLL_WEIGHTS_MAX = @as(c_int, 255);
pub const EXPR_NEST_MAX = _POSIX2_EXPR_NEST_MAX;
pub const LINE_MAX = _POSIX2_LINE_MAX;
pub const CHARCLASS_NAME_MAX = @as(c_int, 2048);
pub const RE_DUP_MAX = @as(c_int, 0x7fff);
pub const SCHAR_MAX = __SCHAR_MAX__;
pub const SHRT_MAX = __SHRT_MAX__;
pub const INT_MAX = __INT_MAX__;
pub const LONG_MAX = __LONG_MAX__;
pub const SCHAR_MIN = -__SCHAR_MAX__ - @as(c_int, 1);
pub const SHRT_MIN = -__SHRT_MAX__ - @as(c_int, 1);
pub const INT_MIN = -__INT_MAX__ - @as(c_int, 1);
pub const LONG_MIN = -__LONG_MAX__ - @as(c_long, 1);
pub const UCHAR_MAX = (__SCHAR_MAX__ * @as(c_int, 2)) + @as(c_int, 1);
pub const USHRT_MAX = (__SHRT_MAX__ * @as(c_int, 2)) + @as(c_int, 1);
pub const UINT_MAX = (__INT_MAX__ * @as(c_uint, 2)) + @as(c_uint, 1);
pub const ULONG_MAX = (__LONG_MAX__ * @as(c_ulong, 2)) + @as(c_ulong, 1);
pub const CHAR_BIT = __CHAR_BIT__;
pub const CHAR_MIN = SCHAR_MIN;
pub const CHAR_MAX = __SCHAR_MAX__;
pub const __need_ptrdiff_t = "";
pub const __need_size_t = "";
pub const __need_wchar_t = "";
pub const __need_NULL = "";
pub const __need_max_align_t = "";
pub const __need_offsetof = "";
pub const __STDDEF_H = "";
pub const _PTRDIFF_T = "";
pub const _SIZE_T = "";
pub const _WCHAR_T = "";
pub const NULL = @import("std").zig.c_translation.cast(?*anyopaque, @as(c_int, 0));
pub const __CLANG_MAX_ALIGN_T_DEFINED = "";
pub const offsetof = @compileError("unable to translate C expr: unexpected token 'an identifier'");
// /home/niels/.night.zig/zig-linux-x86_64-0.14.0-dev.2987+183bb8b08/lib/include/__stddef_offsetof.h:16:9
pub const __CLANG_STDINT_H = "";
pub const _STDINT_H = @as(c_int, 1);
pub const _BITS_TYPES_H = @as(c_int, 1);
pub const __S16_TYPE = c_short;
pub const __U16_TYPE = c_ushort;
pub const __S32_TYPE = c_int;
pub const __U32_TYPE = c_uint;
pub const __SLONGWORD_TYPE = c_long;
pub const __ULONGWORD_TYPE = c_ulong;
pub const __SQUAD_TYPE = c_long;
pub const __UQUAD_TYPE = c_ulong;
pub const __SWORD_TYPE = c_long;
pub const __UWORD_TYPE = c_ulong;
pub const __SLONG32_TYPE = c_int;
pub const __ULONG32_TYPE = c_uint;
pub const __S64_TYPE = c_long;
pub const __U64_TYPE = c_ulong;
pub const __STD_TYPE = @compileError("unable to translate C expr: unexpected token 'typedef'");
// /usr/include/x86_64-linux-gnu/bits/types.h:137:10
pub const _BITS_TYPESIZES_H = @as(c_int, 1);
pub const __SYSCALL_SLONG_TYPE = __SLONGWORD_TYPE;
pub const __SYSCALL_ULONG_TYPE = __ULONGWORD_TYPE;
pub const __DEV_T_TYPE = __UQUAD_TYPE;
pub const __UID_T_TYPE = __U32_TYPE;
pub const __GID_T_TYPE = __U32_TYPE;
pub const __INO_T_TYPE = __SYSCALL_ULONG_TYPE;
pub const __INO64_T_TYPE = __UQUAD_TYPE;
pub const __MODE_T_TYPE = __U32_TYPE;
pub const __NLINK_T_TYPE = __SYSCALL_ULONG_TYPE;
pub const __FSWORD_T_TYPE = __SYSCALL_SLONG_TYPE;
pub const __OFF_T_TYPE = __SYSCALL_SLONG_TYPE;
pub const __OFF64_T_TYPE = __SQUAD_TYPE;
pub const __PID_T_TYPE = __S32_TYPE;
pub const __RLIM_T_TYPE = __SYSCALL_ULONG_TYPE;
pub const __RLIM64_T_TYPE = __UQUAD_TYPE;
pub const __BLKCNT_T_TYPE = __SYSCALL_SLONG_TYPE;
pub const __BLKCNT64_T_TYPE = __SQUAD_TYPE;
pub const __FSBLKCNT_T_TYPE = __SYSCALL_ULONG_TYPE;
pub const __FSBLKCNT64_T_TYPE = __UQUAD_TYPE;
pub const __FSFILCNT_T_TYPE = __SYSCALL_ULONG_TYPE;
pub const __FSFILCNT64_T_TYPE = __UQUAD_TYPE;
pub const __ID_T_TYPE = __U32_TYPE;
pub const __CLOCK_T_TYPE = __SYSCALL_SLONG_TYPE;
pub const __TIME_T_TYPE = __SYSCALL_SLONG_TYPE;
pub const __USECONDS_T_TYPE = __U32_TYPE;
pub const __SUSECONDS_T_TYPE = __SYSCALL_SLONG_TYPE;
pub const __SUSECONDS64_T_TYPE = __SQUAD_TYPE;
pub const __DADDR_T_TYPE = __S32_TYPE;
pub const __KEY_T_TYPE = __S32_TYPE;
pub const __CLOCKID_T_TYPE = __S32_TYPE;
pub const __TIMER_T_TYPE = ?*anyopaque;
pub const __BLKSIZE_T_TYPE = __SYSCALL_SLONG_TYPE;
pub const __FSID_T_TYPE = @compileError("unable to translate macro: undefined identifier `__val`");
// /usr/include/x86_64-linux-gnu/bits/typesizes.h:73:9
pub const __SSIZE_T_TYPE = __SWORD_TYPE;
pub const __CPU_MASK_TYPE = __SYSCALL_ULONG_TYPE;
pub const __OFF_T_MATCHES_OFF64_T = @as(c_int, 1);
pub const __INO_T_MATCHES_INO64_T = @as(c_int, 1);
pub const __RLIM_T_MATCHES_RLIM64_T = @as(c_int, 1);
pub const __STATFS_MATCHES_STATFS64 = @as(c_int, 1);
pub const __KERNEL_OLD_TIMEVAL_MATCHES_TIMEVAL64 = @as(c_int, 1);
pub const __FD_SETSIZE = @as(c_int, 1024);
pub const _BITS_TIME64_H = @as(c_int, 1);
pub const __TIME64_T_TYPE = __TIME_T_TYPE;
pub const _BITS_WCHAR_H = @as(c_int, 1);
pub const __WCHAR_MAX = __WCHAR_MAX__;
pub const __WCHAR_MIN = -__WCHAR_MAX - @as(c_int, 1);
pub const _BITS_STDINT_INTN_H = @as(c_int, 1);
pub const _BITS_STDINT_UINTN_H = @as(c_int, 1);
pub const __intptr_t_defined = "";
pub const __INT64_C = @import("std").zig.c_translation.Macros.L_SUFFIX;
pub const __UINT64_C = @import("std").zig.c_translation.Macros.UL_SUFFIX;
pub const INT8_MIN = -@as(c_int, 128);
pub const INT16_MIN = -@as(c_int, 32767) - @as(c_int, 1);
pub const INT32_MIN = -@import("std").zig.c_translation.promoteIntLiteral(c_int, 2147483647, .decimal) - @as(c_int, 1);
pub const INT64_MIN = -__INT64_C(@import("std").zig.c_translation.promoteIntLiteral(c_int, 9223372036854775807, .decimal)) - @as(c_int, 1);
pub const INT8_MAX = @as(c_int, 127);
pub const INT16_MAX = @as(c_int, 32767);
pub const INT32_MAX = @import("std").zig.c_translation.promoteIntLiteral(c_int, 2147483647, .decimal);
pub const INT64_MAX = __INT64_C(@import("std").zig.c_translation.promoteIntLiteral(c_int, 9223372036854775807, .decimal));
pub const UINT8_MAX = @as(c_int, 255);
pub const UINT16_MAX = @import("std").zig.c_translation.promoteIntLiteral(c_int, 65535, .decimal);
pub const UINT32_MAX = @import("std").zig.c_translation.promoteIntLiteral(c_uint, 4294967295, .decimal);
pub const UINT64_MAX = __UINT64_C(@import("std").zig.c_translation.promoteIntLiteral(c_int, 18446744073709551615, .decimal));
pub const INT_LEAST8_MIN = -@as(c_int, 128);
pub const INT_LEAST16_MIN = -@as(c_int, 32767) - @as(c_int, 1);
pub const INT_LEAST32_MIN = -@import("std").zig.c_translation.promoteIntLiteral(c_int, 2147483647, .decimal) - @as(c_int, 1);
pub const INT_LEAST64_MIN = -__INT64_C(@import("std").zig.c_translation.promoteIntLiteral(c_int, 9223372036854775807, .decimal)) - @as(c_int, 1);
pub const INT_LEAST8_MAX = @as(c_int, 127);
pub const INT_LEAST16_MAX = @as(c_int, 32767);
pub const INT_LEAST32_MAX = @import("std").zig.c_translation.promoteIntLiteral(c_int, 2147483647, .decimal);
pub const INT_LEAST64_MAX = __INT64_C(@import("std").zig.c_translation.promoteIntLiteral(c_int, 9223372036854775807, .decimal));
pub const UINT_LEAST8_MAX = @as(c_int, 255);
pub const UINT_LEAST16_MAX = @import("std").zig.c_translation.promoteIntLiteral(c_int, 65535, .decimal);
pub const UINT_LEAST32_MAX = @import("std").zig.c_translation.promoteIntLiteral(c_uint, 4294967295, .decimal);
pub const UINT_LEAST64_MAX = __UINT64_C(@import("std").zig.c_translation.promoteIntLiteral(c_int, 18446744073709551615, .decimal));
pub const INT_FAST8_MIN = -@as(c_int, 128);
pub const INT_FAST16_MIN = -@import("std").zig.c_translation.promoteIntLiteral(c_long, 9223372036854775807, .decimal) - @as(c_int, 1);
pub const INT_FAST32_MIN = -@import("std").zig.c_translation.promoteIntLiteral(c_long, 9223372036854775807, .decimal) - @as(c_int, 1);
pub const INT_FAST64_MIN = -__INT64_C(@import("std").zig.c_translation.promoteIntLiteral(c_int, 9223372036854775807, .decimal)) - @as(c_int, 1);
pub const INT_FAST8_MAX = @as(c_int, 127);
pub const INT_FAST16_MAX = @import("std").zig.c_translation.promoteIntLiteral(c_long, 9223372036854775807, .decimal);
pub const INT_FAST32_MAX = @import("std").zig.c_translation.promoteIntLiteral(c_long, 9223372036854775807, .decimal);
pub const INT_FAST64_MAX = __INT64_C(@import("std").zig.c_translation.promoteIntLiteral(c_int, 9223372036854775807, .decimal));
pub const UINT_FAST8_MAX = @as(c_int, 255);
pub const UINT_FAST16_MAX = @import("std").zig.c_translation.promoteIntLiteral(c_ulong, 18446744073709551615, .decimal);
pub const UINT_FAST32_MAX = @import("std").zig.c_translation.promoteIntLiteral(c_ulong, 18446744073709551615, .decimal);
pub const UINT_FAST64_MAX = __UINT64_C(@import("std").zig.c_translation.promoteIntLiteral(c_int, 18446744073709551615, .decimal));
pub const INTPTR_MIN = -@import("std").zig.c_translation.promoteIntLiteral(c_long, 9223372036854775807, .decimal) - @as(c_int, 1);
pub const INTPTR_MAX = @import("std").zig.c_translation.promoteIntLiteral(c_long, 9223372036854775807, .decimal);
pub const UINTPTR_MAX = @import("std").zig.c_translation.promoteIntLiteral(c_ulong, 18446744073709551615, .decimal);
pub const INTMAX_MIN = -__INT64_C(@import("std").zig.c_translation.promoteIntLiteral(c_int, 9223372036854775807, .decimal)) - @as(c_int, 1);
pub const INTMAX_MAX = __INT64_C(@import("std").zig.c_translation.promoteIntLiteral(c_int, 9223372036854775807, .decimal));
pub const UINTMAX_MAX = __UINT64_C(@import("std").zig.c_translation.promoteIntLiteral(c_int, 18446744073709551615, .decimal));
pub const PTRDIFF_MIN = -@import("std").zig.c_translation.promoteIntLiteral(c_long, 9223372036854775807, .decimal) - @as(c_int, 1);
pub const PTRDIFF_MAX = @import("std").zig.c_translation.promoteIntLiteral(c_long, 9223372036854775807, .decimal);
pub const SIG_ATOMIC_MIN = -@import("std").zig.c_translation.promoteIntLiteral(c_int, 2147483647, .decimal) - @as(c_int, 1);
pub const SIG_ATOMIC_MAX = @import("std").zig.c_translation.promoteIntLiteral(c_int, 2147483647, .decimal);
pub const SIZE_MAX = @import("std").zig.c_translation.promoteIntLiteral(c_ulong, 18446744073709551615, .decimal);
pub const WCHAR_MIN = __WCHAR_MIN;
pub const WCHAR_MAX = __WCHAR_MAX;
pub const WINT_MIN = @as(c_uint, 0);
pub const WINT_MAX = @import("std").zig.c_translation.promoteIntLiteral(c_uint, 4294967295, .decimal);
pub inline fn INT8_C(c: anytype) @TypeOf(c) {
    _ = &c;
    return c;
}
pub inline fn INT16_C(c: anytype) @TypeOf(c) {
    _ = &c;
    return c;
}
pub inline fn INT32_C(c: anytype) @TypeOf(c) {
    _ = &c;
    return c;
}
pub const INT64_C = @import("std").zig.c_translation.Macros.L_SUFFIX;
pub inline fn UINT8_C(c: anytype) @TypeOf(c) {
    _ = &c;
    return c;
}
pub inline fn UINT16_C(c: anytype) @TypeOf(c) {
    _ = &c;
    return c;
}
pub const UINT32_C = @import("std").zig.c_translation.Macros.U_SUFFIX;
pub const UINT64_C = @import("std").zig.c_translation.Macros.UL_SUFFIX;
pub const INTMAX_C = @import("std").zig.c_translation.Macros.L_SUFFIX;
pub const UINTMAX_C = @import("std").zig.c_translation.Macros.UL_SUFFIX;
pub const PROTOBUF_C__BEGIN_DECLS = "";
pub const PROTOBUF_C__END_DECLS = "";
pub const PROTOBUF_C__API = "";
pub const PROTOBUF_C__DEPRECATED = "";
pub const PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE = @compileError("unable to translate macro: undefined identifier `_`");
// /usr/include/protobuf-c/protobuf-c.h:232:10
pub const PROTOBUF_C__SERVICE_DESCRIPTOR_MAGIC = @import("std").zig.c_translation.promoteIntLiteral(c_int, 0x14159bc3, .hex);
pub const PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC = @import("std").zig.c_translation.promoteIntLiteral(c_int, 0x28aaeef9, .hex);
pub const PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC = @import("std").zig.c_translation.promoteIntLiteral(c_int, 0x114315af, .hex);
pub const PROTOBUF_C_VERSION = "1.3.3";
pub const PROTOBUF_C_VERSION_NUMBER = @import("std").zig.c_translation.promoteIntLiteral(c_int, 1003003, .decimal);
pub const PROTOBUF_C_MIN_COMPILER_VERSION = @import("std").zig.c_translation.promoteIntLiteral(c_int, 1000000, .decimal);
pub const PROTOBUF_C_MESSAGE_INIT = @compileError("unable to translate C expr: unexpected token '{'");
// /usr/include/protobuf-c/protobuf-c.h:995:9
pub const PROTOBUF_C_BUFFER_SIMPLE_INIT = @compileError("unable to translate C expr: unexpected token '{'");
// /usr/include/protobuf-c/protobuf-c.h:1043:9
pub const PROTOBUF_C_BUFFER_SIMPLE_CLEAR = @compileError("unable to translate macro: undefined identifier `free`");
// /usr/include/protobuf-c/protobuf-c.h:1056:9
pub const ONNX__ATTRIBUTE_PROTO__INIT = @compileError("unable to translate C expr: unexpected token '{'");
// src/proto/onnx.proto3.pb-c.h:391:9
pub const ONNX__VALUE_INFO_PROTO__INIT = @compileError("unable to translate C expr: unexpected token '{'");
// src/proto/onnx.proto3.pb-c.h:425:9
pub const ONNX__NODE_PROTO__INIT = @compileError("unable to translate C expr: unexpected token '{'");
// src/proto/onnx.proto3.pb-c.h:491:9
pub const ONNX__TRAINING_INFO_PROTO__INIT = @compileError("unable to translate C expr: unexpected token '{'");
// src/proto/onnx.proto3.pb-c.h:609:9
pub const ONNX__MODEL_PROTO__INIT = @compileError("unable to translate C expr: unexpected token '{'");
// src/proto/onnx.proto3.pb-c.h:706:9
pub const ONNX__STRING_STRING_ENTRY_PROTO__INIT = @compileError("unable to translate C expr: unexpected token '{'");
// src/proto/onnx.proto3.pb-c.h:721:9
pub const ONNX__TENSOR_ANNOTATION__INIT = @compileError("unable to translate C expr: unexpected token '{'");
// src/proto/onnx.proto3.pb-c.h:739:9
pub const ONNX__GRAPH_PROTO__INIT = @compileError("unable to translate C expr: unexpected token '{'");
// src/proto/onnx.proto3.pb-c.h:810:9
pub const ONNX__TENSOR_PROTO__SEGMENT__INIT = @compileError("unable to translate C expr: unexpected token '{'");
// src/proto/onnx.proto3.pb-c.h:826:9
pub const ONNX__TENSOR_PROTO__INIT = @compileError("unable to translate C expr: unexpected token '{'");
// src/proto/onnx.proto3.pb-c.h:959:9
pub const ONNX__SPARSE_TENSOR_PROTO__INIT = @compileError("unable to translate C expr: unexpected token '{'");
// src/proto/onnx.proto3.pb-c.h:996:9
pub const ONNX__TENSOR_SHAPE_PROTO__DIMENSION__INIT = @compileError("unable to translate C expr: unexpected token '{'");
// src/proto/onnx.proto3.pb-c.h:1028:9
pub const ONNX__TENSOR_SHAPE_PROTO__INIT = @compileError("unable to translate C expr: unexpected token '{'");
// src/proto/onnx.proto3.pb-c.h:1044:9
pub const ONNX__TYPE_PROTO__TENSOR__INIT = @compileError("unable to translate C expr: unexpected token '{'");
// src/proto/onnx.proto3.pb-c.h:1060:9
pub const ONNX__TYPE_PROTO__SEQUENCE__INIT = @compileError("unable to translate C expr: unexpected token '{'");
// src/proto/onnx.proto3.pb-c.h:1077:9
pub const ONNX__TYPE_PROTO__MAP__INIT = @compileError("unable to translate C expr: unexpected token '{'");
// src/proto/onnx.proto3.pb-c.h:1099:9
pub const ONNX__TYPE_PROTO__OPTIONAL__INIT = @compileError("unable to translate C expr: unexpected token '{'");
// src/proto/onnx.proto3.pb-c.h:1117:9
pub const ONNX__TYPE_PROTO__SPARSE_TENSOR__INIT = @compileError("unable to translate C expr: unexpected token '{'");
// src/proto/onnx.proto3.pb-c.h:1133:9
pub const ONNX__TYPE_PROTO__INIT = @compileError("unable to translate C expr: unexpected token '{'");
// src/proto/onnx.proto3.pb-c.h:1186:9
pub const ONNX__OPERATOR_SET_ID_PROTO__INIT = @compileError("unable to translate C expr: unexpected token '{'");
// src/proto/onnx.proto3.pb-c.h:1211:9
pub const ONNX__FUNCTION_PROTO__INIT = @compileError("unable to translate C expr: unexpected token '{'");
// src/proto/onnx.proto3.pb-c.h:1280:9
pub const _Onnx__AttributeProto__AttributeType = enum__Onnx__AttributeProto__AttributeType;
pub const _Onnx__TensorProto__Segment = struct__Onnx__TensorProto__Segment;
pub const _Onnx__StringStringEntryProto = struct__Onnx__StringStringEntryProto;
pub const _Onnx__TensorProto__DataLocation = enum__Onnx__TensorProto__DataLocation;
pub const _Onnx__TensorProto = struct__Onnx__TensorProto;
pub const _Onnx__NodeProto = struct__Onnx__NodeProto;
pub const _Onnx__SparseTensorProto = struct__Onnx__SparseTensorProto;
pub const _Onnx__TensorShapeProto__Dimension = struct__Onnx__TensorShapeProto__Dimension;
pub const _Onnx__TensorShapeProto = struct__Onnx__TensorShapeProto;
pub const _Onnx__TypeProto__Tensor = struct__Onnx__TypeProto__Tensor;
pub const _Onnx__TypeProto__Sequence = struct__Onnx__TypeProto__Sequence;
pub const _Onnx__TypeProto__Map = struct__Onnx__TypeProto__Map;
pub const _Onnx__TypeProto__Optional = struct__Onnx__TypeProto__Optional;
pub const _Onnx__TypeProto__SparseTensor = struct__Onnx__TypeProto__SparseTensor;
pub const _Onnx__TypeProto = struct__Onnx__TypeProto;
pub const _Onnx__ValueInfoProto = struct__Onnx__ValueInfoProto;
pub const _Onnx__TensorAnnotation = struct__Onnx__TensorAnnotation;
pub const _Onnx__GraphProto = struct__Onnx__GraphProto;
pub const _Onnx__AttributeProto = struct__Onnx__AttributeProto;
pub const _Onnx__TrainingInfoProto = struct__Onnx__TrainingInfoProto;
pub const _Onnx__OperatorSetIdProto = struct__Onnx__OperatorSetIdProto;
pub const _Onnx__FunctionProto = struct__Onnx__FunctionProto;
pub const _Onnx__ModelProto = struct__Onnx__ModelProto;
pub const _Onnx__TensorProto__DataType = enum__Onnx__TensorProto__DataType;
pub const _Onnx__Version = enum__Onnx__Version;
pub const _Onnx__OperatorStatus = enum__Onnx__OperatorStatus;
