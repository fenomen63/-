#include <iostream>

class c_Circle {
private:
    int diametr;
public:
    c_Circle();
    c_Circle(int diametr);
    c_Circle(c_Circle& circle)
    {
        this->diametr;
    }
    void info() const {
        std::cout << "diametr: " << diametr;
    }
    int GetDiametr()
    {
        return diametr;
    }
};

int main()
{

}
