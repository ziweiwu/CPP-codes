#include "findMedian.cpp"
#include<iostream>

//findMedian function protoype
double findMedian (const int integers[], const int size);

int main()
{
    int myArray1[] = {1,2,3,4,5,6,7,8};
    std::cout << findMedian (myArray1, 8) <<std::endl;

    int myArray2[] = {3,2,25,1,5,8,11,31,22};
    std::cout << findMedian (myArray2, 9) <<std::endl; 

    return 0;
}
