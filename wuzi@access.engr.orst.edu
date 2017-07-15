/*****************************************************************************
** Author: Wu, Ziwei 
** Date: 2019-07-9
** Description: a program that prompts the user for the name of a ﬁle and 
   then tries to open it. If the input ﬁle is there and can be opened, 
   the program should read the list of integers in the ﬁle, 
   which will have one integer per line. The program will then add together 
   all the integers in the ﬁle, create an output ﬁle called sum.txt, 
   and write the sum to that ﬁle.
 ****************************************************************************/
#include <iostream>
#include <fstream>

int main()
{  
    std::ifstream inputFile;
    int integer = 0;
    
    //open the file
    inputFile.open("integer.txt");

    int sum = 0;
   
    //as long as there is value to input  to variable interger
    //the while loop continues, when there is no more data
    //the while loop ends 
    while (inputFile >> integer)
    {
        sum += integer; 
    }
    
    //create an output called sum.txt and write sum amount to it 
    std::ofstream outputFile;
    outputFile.open("sum.txt");
      
    outputFile << sum ;  
   
    //close both output and input file to remove them from buffer
    outputFile.close();
    inputFile.close();	
    
    return 0;
}

