/*****************************************************************************
** Author: Wu, Ziwei
** Date: 2019-07-24
** Description: A implementation file for class EntreeSampler. It includes a
   constructor that four parameters; member functions listEntrees and
   totalCalories.
*****************************************************************************/

#include"EntreeSampler.hpp"
#include<string>
#include<iostream>

/*****************************************************************************
                                EntreeSampler::EntreeSampler
    This is the default constructor. It take four parameters entree1,
    entree2, entree3, and entree4.
*****************************************************************************/
EntreeSampler::EntreeSampler(Entree entree_1, Entree entree_2,
                             Entree entree_3, Entree entree_4)
{
  entree1 = entree_1;
  entree2 = entree_2;
  entree3 = entree_3;
  entree4 = entree_4;
}

/*****************************************************************************
                              Entree::listEntrees
Print out the names of four entrees
*****************************************************************************/
void EntreeSampler::listEntrees()
{
  std::cout << entree1.getName() << std::endl;
  std::cout << entree2.getName() << std::endl;
  std::cout << entree3.getName() << std::endl;
  std::cout << entree4.getName() << std::endl;
}

/*****************************************************************************
                              EntreeSampler::totalCalories
Calculate and return the total calories of four entrees.
*****************************************************************************/
int EntreeSampler::totalCalories()
{
  int total_calories = 0;
  total_calories = entree1.getNumCalories() + entree2.getNumCalories() +
                  entree3.getNumCalories() + entree4.getNumCalories();

  return total_calories;
}
