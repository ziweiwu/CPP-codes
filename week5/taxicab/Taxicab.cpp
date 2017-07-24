/*****************************************************************************
** Author: Wu, Ziwei
** Date: 2019-07-19
* Description: A implementation file for class Taxicab. It includes a
    default constructor that set x, y, odometer to 0, and another
    constructor takes two parameters to set x and y and set odometer to 0.
    It includes member functions moveX, moveY, and getDistanceTraveled.
*****************************************************************************/

#include "Taxicab.hpp"
#include<stdlib.h>  //needed for abs function

/*****************************************************************************
                            Taxicab::Taxicab
    This is the default constructor. It initializes x, y coordinates and
    total distance traveled to 0.
*****************************************************************************/

Taxicab::Taxicab()
{
    x_coor = 0;
    y_coor = 0;
    totalDistanceTraveled = 0;
}


/*****************************************************************************
                            Taxicab::Taxicab
    This is the default constructor. It takes two x, y coordinates as
    parameter and initialize total distance traveled to 0.
*****************************************************************************/

Taxicab::Taxicab(int x_input, int y_input)
{
    x_coor = x_input;
    y_coor = y_input;
    totalDistanceTraveled = 0;
}


/*****************************************************************************
                            Taxicab::moveX
    moveX method takes one int parameter and add the value to x coordinate.
*****************************************************************************/

void Taxicab::moveX(int x_input)
{
    x_coor += x_input;

    //std::abs is used here because distance is a unsigned magnitude
    totalDistanceTraveled += abs(x_input);
}


/*****************************************************************************
                            Taxicab::moveY
    moveY method takes one int parameter and add the value to Y coordinate.
*****************************************************************************/

void Taxicab::moveY(int y_input)
{
    y_coor += y_input;

    //std::abs is used here because distance is a unsigned magnitude
    totalDistanceTraveled += abs(y_input);
}

/*****************************************************************************
                            Taxicab::getY
    Return the current Y coordinate.
*****************************************************************************/

int Taxicab::getYCoord()
{
    return y_coor;
}

/*****************************************************************************
                            Taxicab:getX
    Return the current X coordinate.
*****************************************************************************/

int Taxicab::getXCoord()
{
    return x_coor;
}


/*****************************************************************************
                            Taxicab::getDistanceTraveled
    Return the total distance that taxi traveled so far.
*****************************************************************************/

int Taxicab::getDistanceTraveled()
{
    return totalDistanceTraveled;
}
