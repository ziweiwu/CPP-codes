/*****************************************************************************
** Author: Wu, Ziwei
** Date: 2017-07-24
** Description: a header file for class Entree. It includes member variables
   a, b, c; a default constructor prototype that sets the member variables to 
   1, a constructor protoype that takes three double parameters; member 
   function protoypes including: getA, getB, getC, setA, setB, setC, valueFor, 
   and numRealRoots. 
*****************************************************************************/

//header guard
#ifndef Quadratic_H
#define Quadratic_H

//Quadratic class declaration
class Quadratic  
{
    private:
        //member variables
        double a;
        double b;
        double c;

    public:
        //default constructors: one with no argument, one with three parameters
        Quadratic();
        Quadratic(double a, double b, double c);

        //method prototypes
        void setA(double);
        void setB(double);
        void setC(double);

        double getA();
        double getB();
        double getC();

        double valueFor(double input_x);
        int numRealRoots(); 
};

#endif
