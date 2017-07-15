/*****************************************************************************
** Author: Wu, Ziwei
** Date: 2020-07-15
** Description: A function that takes time as variables to calculate fall
   distance.
*****************************************************************************/

#include <iostream>
#include <cmath>

/*****************************************************************************
** Definition of function  fallDistance.
** It uses one double variable time, and it will return the falling distance
** as a floating number.
*****************************************************************************/

double fallDistance(double time)
{
    //Use const casting to gravity because it's a constant value.
    const double gravity = 9.8;
    double fall_distance = 0;

    fall_distance = 0.5 * gravity * pow(time, 2);

    return fall_distance;
}

/*
int main()
{
    double time=0;

    std::cout << "Please enter a time in seconds: "<<std::endl;
    std::cin >> time;

    double fall_distance = 0;
    //Call the fallDistance function
    fall_distance = fallDistance(time);

    std::cout <<"The falling distance is: "<< fall_distance << std::endl;

    return 0;
}
*/
