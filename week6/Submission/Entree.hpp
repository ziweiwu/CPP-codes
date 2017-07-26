/*****************************************************************************
** Author: Wu, Ziwei
** Date: 2017-07-24
** Description: a header file for class Entree. It includes member variable
   entree_name, entree_calories; a default constructor and a constructor
   that takes two parameters; member function prototypes getName and
   getNumCalories.
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
        int entree_calories;

    public:
        //default constructors: one with no argument, one with two parameters
        Entree();
        Entree(std::string, int);

        //method prototypes
        void setName(std::string);
        void setCalories(int);

        std::string getName();
        int getNumCalories();
};

#endif
