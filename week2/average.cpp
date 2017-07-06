/*****************************************************************************
** Author: Wu, Ziwei 
** Date: 2019-07-1
** Description: a program that asks the user for five numbers and then prints 
   out the average of those numbers. 
*****************************************************************************/
#include <iostream>

int main()
{
    double sum = 0;
    double numberInput = 0;
    double average = 0;
    
    std::cout << "Please enter five numbers." << std::endl;
    
    for (int i = 0; i < 5; i = i + 1)
    { 
        std::cin >> numberInput;
        sum = sum + numberInput;
    }
    
    average = sum / 5;

    std::cout << "The average of those numbers is: "<< std::endl;
    std::cout <<average << std::endl;

    return 0;
}
