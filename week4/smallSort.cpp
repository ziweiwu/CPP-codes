/*****************************************************************************
** Author: Wu, Ziwei
** Date: 2020-07-15
** Description: A function that takes three integer variables, and sort them
   from the smallest to largest.
*****************************************************************************/

#include <iostream>

/*****************************************************************************
** Definition of function smallSort.
** Take three integer variables, and sort them from smallest to largest.
*****************************************************************************/

void smallSort(int &num1, int &num2, int &num3)
{
        //if num2 is smaller than num 1, swap them
        if(num2 < num1)
        {
            int temp = 0;

            num1 = temp;
            num1 = num2;
            num2 = temp;
        }

        //if num3 is smaller than num 2, swap them
        if(num3 < num2)
        {
            int temp = 0;

            num2 = temp;
            num2 = num3;
            num3 = temp;
        }
}

/*
int main()
{
    int a = 14;
    int b = -90;
    int c = 2;

    smallSort(a, b, c);

    std::cout << a << ", " << b << ", " << c << std::endl;

    return 0;
}
*/
