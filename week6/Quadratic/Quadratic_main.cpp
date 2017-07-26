#include "Quadratic.hpp"
#include<iostream>

int main()
{
    std::cout<<"please enter three numbers for a,b,c: "<<std::endl;
    double a = 0;
    double b = 0;
    double c = 0;
    std::cin >> a >> b >> c;
    Quadratic quad(a,b,c);
    
    std::cout<<"get A: "<<quad.getA()<<std::endl;

    double x = 0;
    std::cout<<"enter a value for x: "<<std::endl;
    std::cin >> x;  
    std::cout<<"result of equation is: "<<quad.valueFor(x)<<std::endl;
    std::cout<<"number of real roots is: " <<quad.numRealRoots()<<std::endl;
    return 0;    
}
