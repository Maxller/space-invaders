#include <iostream>
#include <string>
#include <ftxui/component/component.hpp>
#include <ftxui/component/screen_interactive.hpp>
#include <Dibujo.hpp>
#include <thread>


using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    Dibujo palabra1("Hola",0,0), palabra2("Adios",5,5);
    auto Pantalla = Screen::Create(Dimension::Full(),Dimension::Full());
   
    while(true)
    {
        palabra1.Dibujar(&Pantalla);
        palabra2.Dibujar(&Pantalla);
        this_thread::sleep_for(0.1s);
        Pantalla.Print();
        Pantalla.Clear();
        cout << Pantalla.ResetPosition();
    }
 return 0;

}