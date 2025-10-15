#include "generated.h"
#include <vector>

struct StringArray {
    const char** strings;
    size_t len;
};

extern "C" {
    StringArray freecad_folders();
    void free_folders(StringArray array);
}

int main()
{
    auto main_window = AppWindow::create();

    StringArray folders_from_zig = freecad_folders();
    std::vector<slint::SharedString> folder_vec;
    for (size_t i = 0; i < folders_from_zig.len; ++i) {
        folder_vec.push_back(folders_from_zig.strings[i]);
    }

    // 5. Create a Slint model from the C++ vector. This model will be
    //    used by the ComboBox in your UI.
    auto folder_model = std::make_shared<slint::VectorModel<slint::SharedString>>(folder_vec);

    // 6. Set the `freecads` property in your Slint component with the new model.
    main_window->set_freecads(folder_model);

    // 7. IMPORTANT: Free the memory that was allocated by Zig to avoid memory leaks.
    free_folders(folders_from_zig);
    //Run
    main_window->run();

    return 0;
}

