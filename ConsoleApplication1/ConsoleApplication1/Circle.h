#pragma once
class c_Circle
{
private:
    int diametr;
public:
    c_Circle();
    c_Circle(int diametr);
    c_Circle(c_Circle& circle)
    {
        this->diametr = this->diametr + diametr;
    }
    void info() const {
        std::cout << "diametr: " << diametr;
    }
    int GetDiametr()
    {
        return diametr;
    }
};

