/*****************************************************************************
** Author: Wu, Ziwei
** Date: 2017-07-24
** Description: a header file for class EntreeSampler. It has four member
    variable entree1, entree2, entree3 and entree4; It has a constructor
    that takes 4 parameters; it has member functions listEntrees and
    totalCalories.
*****************************************************************************/

//header guard
#ifndef ENTREESAMPLER_H
#define ENTREESAMPLER_H

#include"Entree.hpp"
#include<string>

//EntreeSampler class declaration
class EntreeSampler
{
    private:
        //member variables
        Entree entree1;
        Entree entree2;
        Entree entree3;
        Entree entree4;

    public:
        //a constructor that takes four parameters
        EntreeSampler(Entree, Entree, Entree, Entree);

        //method prototypes
        void listEntrees();
        int totalCalories();
};

#endif
