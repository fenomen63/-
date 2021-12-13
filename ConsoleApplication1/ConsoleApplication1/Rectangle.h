#pragma once
#include "Square.h"
#include "Line.h"
class c_Rectangle
{
private:
	c_Square a;
	c_Line b;
    int size;
public:
    c_Rectangle();
    c_Rectangle(int size);
    c_Rectangle(c_Rectangle& rectangle)
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

