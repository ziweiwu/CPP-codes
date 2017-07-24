/*****************************************************************************
** Author: Wu, Ziwei
** Date: 2019-07-19
** Description: A implementation file for class Box. It includes a default
    constructor, another constructor that takes three parameters. Member
    functions including setLength, setWidth and setHeight
*****************************************************************************/

#include "Box.hpp"

/*****************************************************************************
                                Box::Box
    This is the default constructor. It initializes the height, length and
    Width to 1.0 by using set methods.
*****************************************************************************/
Box::Box()
{
    setHeight(1.0) ;
    setWidth(1.0);
    setLength(1.0);
}



/*****************************************************************************
                                Box::Box
    This is a constructor. It takes three parameters and set height, width,
    and length with set methods.
*****************************************************************************/
Box::Box(double hei, double wid, double len)
{
    setHeight(hei) ;
    setWidth(wid);
    setLength(len);
}



/*****************************************************************************
                              Box::setHeight
  If the argument passed to the setLength function is zero or greater, it is
  copied into the member variable height, and true is returned. If the
  argument is negative, the value of height remains unchanged and false is
  returned.
*****************************************************************************/
void Box::setHeight(double hei)
{
   if ( hei >= 0 )          //if the hei is valid
    {
        height = hei;       //copy it to height
    }
   else
   {
        height = 1.0;      //if not valid, set to 1.0
   }

}



/*****************************************************************************
                              Box::setLength
  If the argument passed to the setLength function is zero or greater, it is
  copied into the member variable length, and true is returned. If the
  argument is negative, the value of length remains unchanged and false is
  returned.
*****************************************************************************/
void Box::setLength(double len)
{

   if ( len >= 0)           //if the len is valid
    {
        length = len;       //copy it to length
    }
   else
   {
        length = 1.0;      //if not valid, set to 1.0
    }
}


/*****************************************************************************
                                Box::setWidth
  If the argument passed to the setWidth function is zero or greater, it is
  copied into the member variable width, and true is returned. If the
  argument is negative, the value of width remains unchanged and false is
  returned.
*****************************************************************************/
void Box::setWidth(double wid)
{
   if ( wid >= 0)           //if the wid is valid
    {
        width = wid;       //copy it to width
    }
   else
   {
        width = 1.0;       //if not valid, set to 1.0
   }
}


/*****************************************************************************
                                Box::calcVolume
    Calculate the volume of box using height. width and length.
*****************************************************************************/
double Box::calcVolume()
{
    double volume = 0;

    volume = height * width * length;

    return  volume;
}


/*****************************************************************************
                                Box::calcVolume
    Calculate the surface area of box using width and length.
*****************************************************************************/
double Box::calcSurfaceArea()
{
    double surfaceArea= 0;

    surfaceArea = width * length;

    return surfaceArea;
}


