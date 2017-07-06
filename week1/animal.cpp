/*****************************************************************************
** Author: Ziwei Wu 
** Date: 2018-06-25
** Description: a function that ask for an input for favorite animal and print it.
*****************************************************************************/

#include <iostream>
#include <string>

// a simple example program
int main()
{
	std::string faveAnimal;
	std::cout << "Please enter your favorite animal." << std::endl;
    std::cin >> faveAnimal;
    std::cout << "Your favorite animal is the " << faveAnimal;
    std::cout << "." << std::endl;

    return 1;
}


