#pragma once
#include "Square.h"
#include "Circle.h"
class c_Stiralka
{
private:
    c_Square a;
    c_Circle b;
    int size;
public:
    c_Stiralka();
    c_Stiralka(int size);
    c_Stiralka(c_Stiralka& stiralka)
    {

    }
    void info() const {
        std::cout << "size: " << size;
    }
    int GetSize()
    {
        return size;
    }
};