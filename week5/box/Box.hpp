/*****************************************************************************
** Author: Wu, Ziwei
** Date: 2019-07-19
** Description: a header file for class Box. It includes member variables
   height, width, length; member function protoype setHeight, setWidth,
   setLength.
*****************************************************************************/

//header guard
#ifndef BOX_H
#define BOX_H

//Box class declaration
class Box
{
    private:
        //member variables
        double height;
        double width;
        double length;

    public:
        //default constructors: one with no argument, one with three parameters
        Box();
        Box(double height, double width, double length);

        //method prototypes
        void setHeight(double);
        void setWidth(double);
        void setLength(double);

        double calcVolume();
        double calcSurfaceArea();
};
#endif
