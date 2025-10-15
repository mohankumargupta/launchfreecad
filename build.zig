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

    //"-I", slint_install_path ++ "/include/slint/",
    exe.addCSourceFile(.{
        .file = b.path("src/main.cpp"),
        .flags = &.{
            "-std=c++20",
        },
    });

    const include_path = std.Build.LazyPath{ .cwd_relative = slint_install_path ++ "/include/slint/" };
    exe.root_module.addIncludePath(include_path);
    exe.addLibraryPath(.{ .cwd_relative = slint_install_path ++ "/lib" });
    exe.linkSystemLibrary("slint_cpp");

    exe.step.dependOn(&slint_compiler_cmd.step);
    exe.linkLibCpp();

    const zig_lib = b.addLibrary(.{
        .name = "zig_lib",
        .root_module = b.createModule(.{
            .root_source_file = b.path("src/lib.zig"),
            .target = target,
            .optimize = optimize,
        }),
    });
    zig_lib.linkLibC();

    exe.linkLibrary(zig_lib);
    b.installArtifact(exe);

    const dll_source = slint_install_path ++ "/lib/slint_cpp.dll";
    const copy_dll_step = b.addInstallFile(.{
        .cwd_relative = dll_source,
    }, "bin/slint_cpp.dll");

    b.getInstallStep().dependOn(&copy_dll_step.step);

    const run_cmd = b.addRunArtifact(exe);
    run_cmd.step.dependOn(b.getInstallStep());

    const run_step = b.step("run", "Run the app");
    run_step.dependOn(&run_cmd.step);
    run_cmd.step.dependOn(&copy_dll_step.step);
}
