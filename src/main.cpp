#include <iostream>
#include <string>
#include <thread>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    
    Element liezo = hbox({
        spinner(5,3) | bold
    });

    auto screen = Screen::Create(
        Dimension::Full(),
        Dimension::Fit(liezo)
    );
    Render(screen, liezo);
    screen.Print();
    screen.ResetPosition();
 
    this_thread::sleep_for(0.1s);
    
    return 0;
}
