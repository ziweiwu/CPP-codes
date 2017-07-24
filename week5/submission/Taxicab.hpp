/*****************************************************************************
** Author: Wu, Ziwei
** Date: 2019-07-19
** Description: a header file for class Taxicab. It includes member variables
    x_coor, y_coor, totalDistanceTraveled, and member function moveX, moveY,
    getDistanceTravelled.
*****************************************************************************/

//header guard
#ifndef TAXICAB_H
#define TAXICAB_H

//Taxicab class declaration
class Taxicab
{
    private:
        //member variables
        int x_coor;
        int y_coor;
        int totalDistanceTraveled;

    public:
        //default constructors: one with no parameter, one with two parameters
        Taxicab();
        Taxicab(int x_coor, int y_coor);

        //method prototypes
        void moveX(int);
        void moveY(int);
        int getXCoord();
        int getYCoord();
        int getDistanceTraveled();

};
#endif
