#include <iostream>
#include <cmath>

class Circle
{
    private:
        double radius;

    public:
        void setRadius(double r)
        { radius = r; }    

        double calcArea()
        { return 3.14 * pow (radius, 2); }

};


int main()
{
    Circle circle1;
    Circle circle2;

    circle1.setRadius(560);
    circle2.setRadius(1.68);

    std::cout<<circle1.calcArea() << std::endl;
    std::cout<<circle2.calcArea() << std::endl;

    return 0;    
}
