#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/string.hpp>
#include <iostream>

using namespace ftxui;

int main(int argc, char const *argv[])
{
    // Vesion 1 del codigo
    //auto label = text("Hola mundo");
    //auto container = hbox({label});

    Element container =
    hbox({
      text("left")   | border,
      text("middle") | border | flex,
      text("right")  | border,
    });

    auto screen = Screen::Create(
        Dimension::Full(),
        Dimension::Fit(container)
    );
    Render(screen, container);
    screen.Print();

    return 0;
}
