/****************************************************************************
** Author: Ziwei Wu
** Date: 2019-07-1
** Description: a program that asks the user for a (integer) number of cents, 
from 0 to 99, and outputs how many of each type of coin would represent that 
amount with the fewest total number of coins.
*****************************************************************************/
#include <iostream>

int main()
{
    //assign the value to each coin type.
    const int QUARTER_VALUE = 25;
    const int DIME_VALUE = 10;
    const int NICKEL_VALUE = 5;
    const int PENNY_VALUE = 1;
    
    int amount=0; 
    
    int quarter = 0;
    int dime = 0;
    int nickel = 0;
    int penny = 0;
    
    std::cout << "Please enter an amount in cents less than a dollar." << std::endl;
    std::cin >> amount;
    
    quarter = amount / QUARTER_VALUE;
    amount = amount % QUARTER_VALUE;

    dime = amount / DIME_VALUE;
    amount = amount % DIME_VALUE; 

    nickel = amount / NICKEL_VALUE;
    amount = amount % NICKEL_VALUE;

    penny = amount / PENNY_VALUE;


    std::cout << "Your Change will be: " << std::endl;
    std::cout << "Q: " << quarter <<std::endl;
    std::cout << "D: " << dime <<std::endl;
    std::cout << "N: " << nickel <<std::endl;
    std::cout << "P: " << penny <<std::endl;
    return 0;
}


