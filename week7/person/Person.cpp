/*****************************************************************************
** Author: Wu, Ziwei
** Date: 2017-07-28
** Description: A implementation file for class Person. It includes a
   constructor with two parameter to initilize member variable;
   member functions defintions for getName and getAge.
*****************************************************************************/
#include"Person.hpp"
#include<string>


/*****************************************************************************
                                Person::Person
    This is the constructor. It initializes member variables name and age
    by the two parameters.
*****************************************************************************/
Person::Person(std::string name_input, double age_input)
{
    name = name_input;
    age = age_input;
}


/*****************************************************************************
                                Person::getName()
    Return the name of person.
*****************************************************************************/
std::string Person::getName()
{
    return name;
}


/*****************************************************************************
                                Person::getAge()
    Return the Age of person.
*****************************************************************************/
double Person::getAge()
{
    return age;
}
