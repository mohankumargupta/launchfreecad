const std = @import("std");
const builtin = @import("builtin");

pub const StringArray = extern struct {
    strings: [*c][*c]const u8,
    len: usize,
};

export fn freecad_folders() StringArray {
    const allocator = std.heap.c_allocator;

    var home_dir: []u8 = undefined;
    defer allocator.free(home_dir);
    if (builtin.os.tag == .windows) {
        home_dir = std.process.getEnvVarOwned(allocator, "USERPROFILE") catch &[_]u8{};
    } else {
        home_dir = std.process.getEnvVarOwned(allocator, "HOME") catch &[_]u8{};
    }

    const downloads_dir = std.fs.path.join(allocator, &[_][]const u8{
        home_dir,
        "Downloads",
    }) catch &[_]u8{};

    var dir = std.fs.cwd().openDir(downloads_dir, .{ .iterate = true }) catch {
        return StringArray{ .strings = null, .len = 0 };
    };
    defer dir.close();

    var it = dir.iterate();
    while (it.next() catch |err| {
        // An error occurred during iteration. Log it and stop.
        std.debug.print("Error iterating directory: {any}\n", .{err});

        return StringArray{ .strings = null, .len = 0 };
        //break outer; // Exit the while loop.
    }) |entry| {
        if (entry.kind == .directory) {
            std.debug.print("Directory: {s}\n", .{entry.name});
        }
    }

    const items = [_][]const u8{ "one", "two" };
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
