/*****************************************************************************
** Author: Wu, Ziwei
** Date: 2017-07-28
** Description: A stdDev function that takes two parameters: an array of
    Person objects, and the array size. It returns the standard deviation
    of all ages for the sample.
*****************************************************************************/

#include "Person.hpp"
#include "cmath"

double stdDev(Person person_array[], int array_size)
{
    //compute the age sum
    double age_sum = 0;
    for(int i = 0; i < array_size; i++)
    {
        age_sum += person_array[i].getAge();
    }
    //compute the age mean.
    double age_mean = 0;
    age_mean = age_sum / array_size;

    //compute the total squared variance
    double total_age_variance_square = 0;
    for(int i = 0; i < array_size; i++)
    {
        total_age_variance_square += pow((age_mean - person_array[i].getAge()), 2);
    }

    //compute the standard deviation of age
    double age_stdDev = 0;
    age_stdDev = sqrt(total_age_variance_square / (array_size - 1));

    return age_stdDev;
}
