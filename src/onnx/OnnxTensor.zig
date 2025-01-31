const std = @import("std");

const OnnxSegment = @import("OnnxSegment.zig").OnnxSegment;
const parseOnnxSegment = @import("OnnxSegment.zig").parseOnnxSegment;
const OnnxDataType = @import("OnnxDataType.zig").OnnxDataType;
const OnnxDataUnion = @import("OnnxDataUnion.zig").OnnxDataUnion;
const OnnxStringStringEntry = @import("OnnxStringStringEntry.zig").OnnxStringStringEntry;
const parseOnnxStringStringEntryList = @import("OnnxStringStringEntry.zig").parseOnnxStringStringEntryList;
const OnnxDataLocation = @import("OnnxDataLocation.zig").OnnxDataLocation;
const fromCString = @import("util.zig").fromCString;

pub const OnnxTensor = struct {
    dims: []i64,
    data_type: OnnxDataType,
    segment: ?OnnxSegment,
    data: OnnxDataUnion,
    name: []const u8,
    doc_string: []const u8,
    external_data: []OnnxStringStringEntry,
    data_location: OnnxDataLocation,
    metadata_props: []OnnxStringStringEntry,
};

pub fn parseOnnxTensorList(
    allocator: anytype,
    value: anytype,
    len: usize,
) !std.ArrayList(OnnxTensor) {
    std.log.debug(
        "Attempting to parse a OnnxTensor list of len '{}'",
        .{len},
    );
    var list = std.ArrayList(OnnxTensor).init(allocator);
    for (0..len) |i| {
        const item = (value + i).*.*;

        try list.append(try parseOnnxTensor(allocator, item));
    }

    return list;
}

pub fn parseOnnxTensor(
    allocator: anytype,
    value: anytype,
) !OnnxTensor {
    std.log.debug(
        "Attempting to parse a OnnxTensor",
        .{},
    );

    const dims = try allocator.alloc(i64, value.n_dims);
    for (0..value.n_dims) |j| {
        dims[j] = (value.dims + j).*;
    }
    std.log.debug("Read dims '{any}'", .{dims});

    const data_type = @as(OnnxDataType, @enumFromInt(value.data_type));
    std.log.debug("Read data type '{s}'", .{@tagName(data_type)});

    const segment = try parseOnnxSegment(allocator, value.segment);

    const data = switch (data_type) {
        OnnxDataType.FLOAT => blk: {
            const inner = try allocator.alloc(f32, value.n_float_data);
            for (0..value.n_float_data) |j| {
                inner[j] = (value.float_data + j).*;
            }
            if (inner.len <= 4) {
                std.log.debug("Parsed as []f32 with values {any}", .{inner});
            } else {
                std.log.debug("Parsed as []f32 of length {}", .{inner.len});
            }
            break :blk @unionInit(
                OnnxDataUnion,
                "FLOAT",
                inner,
            );
        },
        OnnxDataType.INT64 => blk: {
            const inner = try allocator.alloc(i64, value.n_int64_data);
            for (0..value.n_int64_data) |j| {
                inner[j] = (value.int64_data + j).*;
            }
            if (inner.len < 8) {
                std.log.debug("Parsed as []i64 with values {any}", .{inner});
            } else {
                std.log.debug("Parsed as []i64 of length {}", .{inner.len});
            }
            break :blk @unionInit(
                OnnxDataUnion,
                "INT64",
                inner,
            );
        },
        else => {
            unreachable;
        },
    };

    const name = try fromCString(allocator, value.name);

    const doc_string = try fromCString(allocator, value.doc_string);

    var external_data = try parseOnnxStringStringEntryList(
        allocator,
        value.external_data,
        value.n_external_data,
    );

    const data_location = @as(OnnxDataLocation, @enumFromInt(value.data_location));
    std.log.debug("Read data location '{s}'", .{@tagName(data_location)});

    var metadata_props = try parseOnnxStringStringEntryList(
        allocator,
        value.metadata_props,
        value.n_metadata_props,
    );

    return .{
        .dims = dims,
        .data_type = data_type,
        .segment = segment,
        .data = data,
        .name = name,
        .doc_string = doc_string,
        .external_data = try external_data.toOwnedSlice(),
        .data_location = data_location,
        .metadata_props = try metadata_props.toOwnedSlice(),
    };
}
