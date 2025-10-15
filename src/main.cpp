#include "generated.h"

int main()
{
    // Create an instance of the AppWindow component
    auto main_window = AppWindow::create();

    // Set the property defined in the .slint file
    //main_window->set_greeting("Hello from Zig + C++ + Slint!");

    // Run the event loop
    main_window->run();

    return 0;
}

