#pragma once
class c_Line
{
private:
    int width;
public:
    c_Line();
    c_Line(int width);
    c_Line(c_Line& line)
    {
        this->width = this->width + width;
    }
    void info() const {
        std::cout << "width: " << width;
    }
};
