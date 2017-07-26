/*****************************************************************************
*** Author: Wu, Ziwei
*** Date: 2017-07-24
*** Description: a header file for class Entree. It includes member variables 
    entree_name and entree_calorie; a default constructor and a constructor
    that takes two parameters for entree_name and entree_calorie; member
    function prototypes getName and getNumCalorie.    
*****************************************************************************/

//header guard
#ifndef Entree_H 
#define Entree_H

#include<string>

//Entree class declaration
class Entree
{
    private:
        //member variables
        std::string entree_name;
        int entree_calorie;

    public:
        //constructors: one with no parmeters, one with two parameters
        Entree();
        Entree(std::string, int);

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
