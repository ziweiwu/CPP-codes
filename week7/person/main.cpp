#include "Person.hpp"
#include <iostream>

//prototype for stDev function
double stdDev(Person person_array[], int array_size);

int main()
{
    //define an array of class of size 3
    Person person1("ziwei",30);

    std::cout << person1.getName() <<std::endl;
    std::cout << person1.getAge() <<std::endl;

    Person person_array[2] = {Person("ziwei" , 20), Person("linlu", 10)};

    std::cout << stdDev(person_array, 2) <<std::endl;

    Person person_array2[4] = {Person("ziwei" , 20), Person("linlu", 10),
                        Person("wangpeitong",25), Person("Bill gates", 50)};

    std::cout << stdDev(person_array2, 4) <<std::endl;

    return 0;
}
