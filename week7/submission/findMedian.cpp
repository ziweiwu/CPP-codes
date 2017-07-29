/*****************************************************************************
** Author: Wu, Ziwei
** Date: 2017-07-28
** Description: A function called findMedian which takes an array of integers
    and the size of the array as parameters. The function then would sort
    the array and return the median.
*****************************************************************************/

#include <algorithm>
#include <iostream>

double findMedian(const int integers[], const int arraySize)
{
    //initialize an empty array
    int integer_array[arraySize];

    //a loop to copy the parameter array to empty array
    for (int i = 0; i <arraySize; i++)
    {
        integer_array[i] = integers [i];
    }

    //sort the array
    std::sort(integer_array, integer_array + arraySize);

    //if the size of array is an even number
    if (arraySize % 2 ==0)
    {
        double even_median = 0;
        even_median = static_cast<double>((integer_array [arraySize / 2 -1]
                    + integer_array [arraySize / 2]))/2;

        return even_median;
    }

    //if the size of array is an odd number
    else
    {
        double odd_median = 0;
        odd_median = integer_array [(arraySize - 1) / 2];

        return odd_median;
    }
}
