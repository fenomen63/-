#pragma once
class c_Square
{
private:
    int size;
public:
    c_Square();
    c_Square(int size);
    c_Square(c_Square& square)
    {
        this->size = this->size + size;
    }
    void info() const {
        std::cout << "size: " << size;
    }
};