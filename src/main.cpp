#include "generated.h"

struct StringArray {
    const char** strings;
    size_t len;
};

extern "C" {
    StringArray freecad_folders();
    void free_string_array(StringArray array);
}

int main()
{
    auto main_window = AppWindow::create();

    StringArray folders_from_zig = freecad_folders();

    //Run
    main_window->run();

    return 0;
}

