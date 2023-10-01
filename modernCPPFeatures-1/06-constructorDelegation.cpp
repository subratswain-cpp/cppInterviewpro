#include <iostream>

class Rect
{
public:
    Rect() : Rect{0.0, 0.0} { std::cout << "Zero Arg constructor\n"; }

    Rect(double w) : Rect{w, w} { std::cout << "1 Arg constructor-Build SQUARE\n"; }

    Rect(double w, double h) : w{w}, h{h} { std::cout << "2 Arg constructor\n"; }

    void print()
    {
        std::cout << "Rectangle having width = " << w << " height = " << h << '\n';
    }

private:
    double w;
    double h;
};

int main()
{

    Rect r1;
    r1.print();

    Rect r2(10);
    r2.print();

    Rect r3(10, 20);
    r3.print();
    {
        Rect r3{100, 200};
        r3.print();
    }
    return 0;
}
