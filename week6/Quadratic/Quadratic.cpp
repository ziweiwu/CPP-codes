/*****************************************************************************
** Author: Wu, Ziwei
** Date: 2019-07-24
** Description: A implementation file for class quadratic. It includes a 
    default constructor, another constructor that takes three parameters. 
    Member functions including setA, setB, setB, getA, getB, getC, valueFor,
    and numRealRoots. 
*****************************************************************************/

#include"Quadratic.hpp"
#include<cmath>

/*****************************************************************************
                                Quadratic::Quadratic
    This is the default constructor. It initializes the a, b and c  to 1.0 
    by using member variable set methods.
*****************************************************************************/
Quadratic::Quadratic()
{
    setA(1.0);
    setB(1.0);
    setC(1.0);
}

/*****************************************************************************
                                Quadratic::Quadratic
    This is a constructor that takes three parameters and pass them set
    functions for a, b and c.  
*****************************************************************************/
Quadratic::Quadratic(double a, double b, double c)
{
    setA(a);
    setB(b);
    setC(c);
}


/*****************************************************************************
                              Quadratic::setA
Pass an argument to set the value for a, if a is equal to zero, the
function set it to default value 1.0. 
 
*****************************************************************************/
void Quadratic::setA(double a_input)
{
   if ( a_input == 0 )          //a can not equal to zero for quadratic equation
   {
        a = 1.0;       //if a is equal to zero, set it to 1.0
   }
   else
   {
        a = a_input;    //if a is not equal to zero, set it to a_input 
   }
}

/*****************************************************************************
                              Quadratic::setB
Pass the parameter to set the value for b.
*****************************************************************************/
void Quadratic::setB(double b_input)
{
    b = b_input;     
}

/*****************************************************************************
                              Quadratic::setC
Pass the parameter to set the value for c.
*****************************************************************************/
void Quadratic::setC(double c_input)
{
    c = c_input;     
}

/*****************************************************************************
                              Quadratic::getA
Return the value of member variable a.
*****************************************************************************/
double Quadratic::getA()
{
    return a; 
}

/*****************************************************************************
                              Quadratic::getB
Return the value of member variable a.
*****************************************************************************/
double Quadratic::getB()
{
    return b; 
}

/*****************************************************************************
                              Quadratic::getC
Return the value of member variable c.
*****************************************************************************/
double Quadratic::getC()
{
    return c; 
}

/*****************************************************************************
                              Quadratic::valueFor
Take input as x value and return the result of quadratic equation.
*****************************************************************************/
double Quadratic::valueFor(double x)
{
    double result = 0;
    result = a*pow(x,2) + b*x + c; //Calculate the value of Quadratic equation
    
    return  result;      
}

/*****************************************************************************
                              Quadratic::numRealRoots
Takes no parameter and returns the number of real roots of quadratic equation.
*****************************************************************************/
int Quadratic::numRealRoots()
{
    double result = 0;
    result = pow(b,2) - 4*a*c; 

    if(result < 0)  //if result is negative
        {
            return 0;
        }
    else if (result < 0.00001 && result >= 0)  //if result is zero
        {
            return 1;
        }
    else     //if result is positive
        {
            return 2;  
        }
}
