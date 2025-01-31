const std = @import("std");

const OnnxAttribute = @import("OnnxAttribute.zig").OnnxAttribute;
const OnnxNode = @import("OnnxNode.zig").OnnxNode;
const OnnxOperatorSetId = @import("OnnxOperatorSetId.zig").OnnxOperatorSetId;
const OnnxValueInfo = @import("OnnxValueInfo.zig").OnnxValueInfo;
const OnnxStringStringEntry = @import("OnnxStringStringEntry.zig").OnnxStringStringEntry;

pub const OnnxFunction = struct {
    name: []const u8,
    input: [][]const u8,
    output: [][]const u8,
    attribute: [][]const u8,
    attribute_proto: []OnnxAttribute,
    node: []OnnxNode,
    doc_string: []const u8,
    opset_import: []OnnxOperatorSetId,
    domain: []const u8,
    overload: []const u8,
    value_info: []OnnxValueInfo,
    metadata_props: []OnnxStringStringEntry,
};
