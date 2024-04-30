#pragma once
#include <string>
#include <iostream>
#include <ftxui/screen/screen.hpp>

class Dibujo
{
private:
    int posicionX, posicionY;
    std::string palabra;
public:
    Dibujo(/* args */){
        this -> posicionX = 0;
        this -> posicionY = 0;
    }
    Dibujo(int posicionX, int posicionY){
        this -> posicionX = posicionX;
        this -> posicionY = posicionY;
    }
    Dibujo(std::string palabra, int posicionX, int posicionY){
        this -> posicionX = posicionX;
        this -> posicionY = posicionY;
        this -> palabra = palabra;
    }
    void Dibujar(ftxui::Screen *Pantalla){
        this -> posicionX++;
        this -> posicionY++;
        int posicionPalabraX=0;
        int posicionPalabraY=0;
        for (auto &&letra : palabra)
        {
            int posicionFinalX = this->posicionX + posicionPalabraX;
            int posicionFinalY = this->posicionY + posicionPalabraY;
            Pantalla->PixelAt(posicionFinalX, posicionFinalY).character = letra;
            posicionPalabraX++;
        }
    }
    ~Dibujo(){}
};

