#include"Taxicab.hpp"
#include<iostream>

int main()
{
    Taxicab newcab;

    newcab.moveX(-100);
    newcab.moveY(-100);

    std::cout << "Current X: "<< newcab.getXCoord() << std::endl;

    newcab.moveX(50);


    std::cout << "Current y: "<< newcab.getYCoord() << std::endl;

    newcab.moveY(50);

    std::cout << "Total Distance "<< newcab.getDistanceTraveled() << std::endl;

    return 0;
}
