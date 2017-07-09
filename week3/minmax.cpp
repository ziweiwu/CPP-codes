/*****************************************************************************
** Author: Wu, Ziwei 
** Date: 2019-07-9
** Description: a program that asks the user how many integers they would like 
   to enter.  You can assume they will enter a number >= 1.  The program will 
   then prompt the user to enter that many integers.  After all the numbers 
   have been entered, the program should display the largest and smallest of 
   those numbers
*****************************************************************************/
#include <iostream>

int main()
{
    int numberOfInput = 0;

    std::cout << "How many integers would you like to enter?"<< std::endl;
    std::cin >> numberOfInput;

    int num = 0; 
    int minNum = 0;
    int maxNum = 0;

    std::cout << "Please enter " << numberOfInput << " integers." << std::endl;
    std::cin >> num;

    minNum = num;
    maxNum = num;      
    
    //The loop will keep asking for inputs until numberOfInput -1. 
    //Each time it will compare the input with minNum and maxNum. 
    //Then update the minNum and maxNum if required.  
    for (int i = 0; i < numberOfInput - 1; i++)
    {
        //re-initialize num to store the integer 
        num = 0; 
        std::cin >> num;
        
        if (num < minNum)
        {
           minNum = num; 
        }
        else if (num > maxNum)
        {
           maxNum = num;     
        }  
    }
    
    std::cout << "min: " << minNum << std::endl;
    std::cout << "max: " << maxNum << std::endl;

    return 0;
}

