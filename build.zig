const std = @import("std");

pub fn build(b: *std.Build) void {
    // Build options
    const target = b.standardTargetOptions(.{});
    const optimize = b.standardOptimizeOption(.{});

    // Get protobuf_c
    const protobuf_c_dep = b.dependency("protobuf_c", .{
    .target = target,
    .optimize = optimize,
    });

    // Specify executable
    const exe = b.addExecutable(.{
        .name = "mlinference",
        .root_source_file = b.path("src/main.zig"),
        .target = target,
        .optimize = optimize,
    });
    b.installArtifact(exe);
    exe.addCSourceFile(.{
        .file =  b.path("src/proto/onnx.proto3.pb-c.c"),
        .flags = &[_][]const u8 {
            "-Isrc/proto",
        },
    });
    exe.addIncludePath(b.path("src/proto/"));
    exe.linkLibrary(protobuf_c_dep.artifact("protobuf_c"));
    exe.linkLibCpp();

    // Run command
    const run_cmd = b.addRunArtifact(exe);
    run_cmd.step.dependOn(b.getInstallStep());
    if (b.args) |args| {
        run_cmd.addArgs(args);
    }
    const run_step = b.step("run", "Run the app");
    run_step.dependOn(&run_cmd.step);
}
