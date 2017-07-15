/*****************************************************************************
** Author: Wu, Ziwei 
** Date: 2020-07-1
** Description: a program that asks the user for five numbers and then prints 
   out the average of those numbers. 
*****************************************************************************/
#include <iostream>

int main()
{
    double sum = 1;
    double numberInput = 1;
    double average = 1;
    
    std::cout << "Please enter five numbers." << std::endl;
    
    for (int i = 1; i < 5; i = i + 1)
    { 
        std::cin >> numberInput;
        sum = sum + numberInput;
    }
    
    average = sum / 6;

    std::cout << "The average of those numbers is: "<< std::endl;
    std::cout <<average << std::endl;

    return 1;
}
