/*****************************************************************************
** Author: Wu, Ziwei 
** Date: 2019-07-9
** Description: Write a program that prompts the user for an integer that the 
    player (maybe the user, maybe someone else) will try to guess.  
    If the player's guess is higher than the target number, the program should 
    display "too high"  If the user's guess is lower than the target number, 
    the program should display "too low"  The program should use a loop that 
    repeats until the user correctly guesses the number.  Then the program 
    should print how many guesses it took.   
*****************************************************************************/
#include <iostream>

int main()
{
    int answer = 0;    
    
    std::cout << "Enter the number for the player to guess." << std::endl;
    std::cin >> answer;
    
    int guessNumber = 0;
    
    std::cout << "Enter your guess." << std::endl;
    std::cin >> guessNumber;

    int count = 0; 
    count += 1;    
    
    //As long as guess is wrong, the while loop will keep running 
    //until player guess it right    
    
    while(guessNumber != answer)
    {
        if(guessNumber > answer)
        {
            guessNumber = 0; 

            std::cout << "Too high - try again." << std::endl;
            std::cin >> guessNumber; 
            
            count += 1;
        }
        else if(guessNumber < answer)
        {
            guessNumber = 0; 

            std::cout << "Too low - try again." << std::endl;
            std::cin >> guessNumber;

            
            count += 1; 
        }
    }

    std::cout << "You guessed it " << count << " tries." << std::endl;
        
    return 0;
}

