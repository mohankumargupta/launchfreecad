const std = @import("std");
const builtin = @import("builtin");

pub const StringArray = extern struct {
    strings: [*c][*c]const u8,
    len: usize,
};

fn downloads_directory(allocator: std.mem.Allocator) ![]u8 {
    const home_env_var = if (builtin.os.tag == .windows) "USERPROFILE" else "HOME";

    const home_dir = try std.process.getEnvVarOwned(allocator, home_env_var);
    defer allocator.free(home_dir);

    const downloads_path = try std.fs.path.join(allocator, &.{
        home_dir,
        "Downloads",
    });

    return downloads_path;
}

export fn freecad_folders() StringArray {
    const allocator = std.heap.c_allocator;

    const downloads_dir = downloads_directory(allocator) catch |err| {
        std.debug.print("Error getting downloads path: {any}\n", .{err});
        return StringArray{ .strings = null, .len = 0 };
    };
    defer allocator.free(downloads_dir);

    var dir = std.fs.cwd().openDir(downloads_dir, .{ .iterate = true }) catch {
        return StringArray{ .strings = null, .len = 0 };
    };
    defer dir.close();

    var found_folders: std.ArrayList([]const u8) = .empty;
    defer found_folders.deinit(allocator);

    var it = dir.iterate();
    while (it.next() catch |err| {
        std.debug.print("Error iterating directory: {any}\n", .{err});
        for (found_folders.items) |folder| {
            allocator.free(folder);
        }
        return StringArray{ .strings = null, .len = 0 };
    }) |entry| {
        if (entry.kind == .directory and std.mem.startsWith(u8, entry.name, "FreeCAD")) {
            const name_copy = allocator.dupe(u8, entry.name) catch {
                std.debug.print("Failed to allocate memory for folder name\n", .{});
                break;
            };
            found_folders.append(allocator, name_copy) catch {
                allocator.free(name_copy);
                break;
            };
        }
    }

    const items = found_folders.items;
    //const items = [_][]const u8{ "one", "two" };
    const string_pointers = allocator.alloc([*c]const u8, items.len) catch @panic("Failed to allocate pointer array");

    for (items, 0..) |item, i| {
        const c_string = allocator.dupeZ(u8, item) catch @panic("Failed to allocate string");
        string_pointers[i] = @ptrCast(c_string.ptr);
    }

    return StringArray{
        .strings = @ptrCast(string_pointers.ptr),
        .len = items.len,
    };
}

export fn free_folders(array: StringArray) void {
    const allocator = std.heap.c_allocator;
    const ptr_slice = array.strings[0..array.len];

    for (ptr_slice) |s| {
        allocator.free(std.mem.span(s));
    }

    allocator.free(ptr_slice);
}

export fn run_freecad(freecad: [*c]const u8) void {
    const allocator = std.heap.c_allocator;
    const base_path_slice = std.mem.span(freecad);
    const exe_name = "freecad.exe";
    const downloads_dir = downloads_directory(allocator) catch {
        return;
    };
    defer allocator.free(downloads_dir);
    const exe_path = std.fs.path.join(allocator, &.{
        downloads_dir,
        base_path_slice,
        "bin",
        exe_name,
    }) catch {
        return;
    };
    launch(exe_path);
}

fn launch(freecad: []const u8) void {
    const allocator = std.heap.c_allocator;
    std.debug.print("{s}\n", .{freecad});
    const args = &[_][]const u8{freecad};
    var child = std.process.Child.init(args, allocator);
    const term = child.spawnAndWait() catch |err| {
        std.debug.print("!!! FAILED TO LAUNCH PROCESS: {any}\n", .{err});
        return;
    };

    switch (term) {
        .Exited => |code| std.debug.print("FreeCAD process exited with code: {}\n", .{code}),
        else => std.debug.print("FreeCAD process exited with a non-standard status.\n", .{}),
    }
}
