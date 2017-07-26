/*****************************************************************************
** Author: Wu, Ziwei
** Date: 2019-07-24
** Description: A implementation file for class Entree. It includes a default
   constructor and a constructor with takes two parameter; member functions
   including getName, getNumCalories setName and setCalories.
*****************************************************************************/
#include"Entree.hpp"
#include<string>

/*****************************************************************************
                                Entree::Entree
    This is the default constructor. It initializes member variables
    entree_name to an empty string and entree_calories to zero.
*****************************************************************************/
Entree::Entree()
{
  setName("");
  setCalories(0);
}

/*****************************************************************************
                                Entree::Entree
    This is a constructor that takes two parameters, and pass the values to
    member variables entree_name and entree_calories.
*****************************************************************************/
Entree::Entree(std::string name, int calories)
{
  setName(name);
  setCalories(calories);
}

/*****************************************************************************
                              Entree::setName
set the value of entree_name variable.
*****************************************************************************/
void Entree::setName(std::string name_input)
{
  entree_name = name_input;
}

/*****************************************************************************
                              Entree::setCalories
set the value of entree_calories variable.
*****************************************************************************/
void Entree::setCalories(int calories_input)
{
  entree_calories = calories_input;
}

/*****************************************************************************
                              Entree::getName
Return the value of entree_name variable.
*****************************************************************************/
std::string Entree::getName()
{
  return entree_name;
}

/*****************************************************************************
                              Entree::getNumCalories
Return the value of entree_calories variable.
*****************************************************************************/
int Entree::getNumCalories()
{
  return entree_calories;
}
