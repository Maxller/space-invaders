#include <iostream>
#include <fstream>
#include <string>
#include <thread>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <Dibujo.hpp>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    Dibujo dTanque("./assets/images/canon.txt");
    Dibujo dAlien("./assets/images/alien.txt");
    
    int fotograma = 0;
    
    while (true)
    {
    fotograma++;
    Element personaje = spinner(21,fotograma) | bold | color(Color::Aquamarine1Bis);
    Element tanque = dTanque.GetElement();
    Element lienzo = hbox({personaje, tanque, dAlien.GetElement()});
    Screen pantalla = Screen::Create(
        Dimension::Full(),
        Dimension::Fit(lienzo)
        );



    Render(pantalla,lienzo);
    pantalla.Print();
    cout<<pantalla.ResetPosition();

    this_thread::sleep_for(0.1s);
    }

    return 0;
}