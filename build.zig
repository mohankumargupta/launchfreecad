const std = @import("std");

pub fn build(b: *std.Build) void {
    const target = b.standardTargetOptions(.{});
    const optimize = b.standardOptimizeOption(.{});

    const slint_install_path = "C:/Program Files/Slint-cpp 1.13.1";

    const slint_compiler_cmd = b.addSystemCommand(&.{
        slint_install_path ++ "/bin/slint-compiler.exe",
        "-f",
        "cpp",
        "-o",
        "src/generated.h",
        "app.slint", // Input file
    });

    const exe = b.addExecutable(.{
        .name = "launchfreecad",
        .root_module = b.createModule(.{
            .target = target,
            .optimize = optimize,
        }),
    });

    exe.addCSourceFile(.{
        .file = b.path("src/main.cpp"),
        .flags = &.{},
    });

    const include_path = std.Build.LazyPath{ .cwd_relative = slint_install_path ++ "/include" };
    exe.root_module.addIncludePath(include_path);
    //exe.addLibraryPath(b.path(slint_install_path ++ "/lib"));

    exe.step.dependOn(&slint_compiler_cmd.step);
    exe.linkLibCpp();
    b.installArtifact(exe);

    const run_cmd = b.addRunArtifact(exe);
    run_cmd.step.dependOn(b.getInstallStep());

    const run_step = b.step("run", "Run the app");
    run_step.dependOn(&run_cmd.step);
}
