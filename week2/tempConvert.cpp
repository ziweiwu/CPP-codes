/*****************************************************************************
** Author: Ziwei Wu
** Date: 2019-07-1
** Description: a program that converts Celsius temperatures to Fahrenheit 
   temperatures.
*****************************************************************************/
#include <iostream>

int main()
{
    double celcius = 0;
    double fahrenheit = 0;

    std::cout << "Please enter a Celsius temperature." << std::endl;
    std::cin >> celcius;
    
    fahrenheit = 9 * celcius / 5 + 32;

    std::cout << "The equivalent Fahrenheit temperature is: " << std::endl;
    std::cout << fahrenheit << std::endl;

    return 0;
}

