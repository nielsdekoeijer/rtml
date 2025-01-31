const std = @import("std");

const OnnxGraph = @import("OnnxGraph.zig").OnnxGraph;
const OnnxStringStringEntry = @import("OnnxStringStringEntry.zig").OnnxStringStringEntry;

pub const OnnxTrainingInfo = struct {
    initialization: OnnxGraph,
    algorithm: OnnxGraph,
    initialization_binding: []OnnxStringStringEntry,
    update_binding: []OnnxStringStringEntry,
};
