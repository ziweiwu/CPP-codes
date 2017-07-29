/*****************************************************************************
** Author: Wu, Ziwei
** Date: 2017-07-28
** Description: a header file for class Person. It includes member variable
   name, age; a constructor that takes two parameters to initilize member
   variables; member function prototypes getName and getAge.
*****************************************************************************/

//header guard
#ifndef Person_H
#define Person_H

#include<string>

//Person class declaration
class Person
{
    private:
        //member variables
        std::string name;
        double age;

    public:
        //default constructors with two parameters
        Person(std::string, double);

        //method prototypes
        std::string getName();
        double getAge();
};

#endif
