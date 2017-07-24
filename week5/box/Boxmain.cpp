#include "Box.hpp"

#include<iostream>

int main()
{
    Box newBox(100,200,300);

    std::cout << "Volume: "<< newBox.calcVolume() << std::endl;

    std::cout << "Surface area: "<< newBox.calcSurfaceArea() << std::endl;

    return 0;
}
