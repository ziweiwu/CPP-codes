/*****************************************************************************
** Author: Wu, Ziwei
** Date: 2020-07-15
** Description: A function that takes an integer as starting parameter,
    generates a hailstone sequence, and return how many steps to reach 1.
*****************************************************************************/

#include <iostream>

/*****************************************************************************
** Definition of function smallSort.
** Takes an integer as the starting parameter, and generates a hailstone
    sequence, and return how many steps it takes to reach 1.

*****************************************************************************/

int hailstone(int num)
{
    int count = 0;

    while(num != 1)
    {
        //if the num is even, divides it by 2
        if(num % 2 == 0)
        {
            num /= 2;

            count += 1;
        }
        //if the num is odd, times it by 3 and add 1
        else
        {
            num = num * 3 + 1;

            count += 1;
        }
    }
    return count;
}
/*
int main()
{
    int num = 3;

    std::cout << hailstone(num) << std::endl;

    return 0;
}
*/
