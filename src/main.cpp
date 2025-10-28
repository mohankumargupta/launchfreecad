#include "generated.h"
#include <vector>

struct StringArray {
    const char** strings;
    size_t len;
};

extern "C" {
    StringArray freecad_folders();
    void free_folders(StringArray array);
    void run_freecad(const char* path);
}

int main()
{
    auto main_window = AppWindow::create();
    main_window->on_launch_freecad([](slint::SharedString freecad){
        run_freecad(freecad.data());
    });
    StringArray folders_from_zig = freecad_folders();
    std::vector<slint::SharedString> folder_vec;
    for (size_t i = 0; i < folders_from_zig.len; ++i) {
        folder_vec.push_back(folders_from_zig.strings[i]);
    }
    auto folder_model = std::make_shared<slint::VectorModel<slint::SharedString>>(folder_vec);
    main_window->set_freecads(folder_model);
    free_folders(folders_from_zig);
    //Run
    main_window->run();
    return 0;
}
