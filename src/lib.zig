const std = @import("std");

pub const StringArray = extern struct {
    strings: [*c][*c]const u8,
    len: usize,
};

export fn freecad_folders() StringArray {
    const allocator = std.heap.c_allocator;
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
