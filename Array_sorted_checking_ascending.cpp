// Checking whether an array is sorted in ascending order or not?

#include<iostream>

int main()
{
    int a[] = {8, 9, 4, 7, 6, 3, 10, 5, 14, 2};
    int size = sizeof(a)/sizeof(a[0]);

    for(std::size_t i = 0; i<size; i++)
    {
        if(a[i] > a[i+1])
        {
            std::cerr<<"The array is not sorted in ascending order.\n";
            return -1;
        }
    }
    std::cout<<"The array is sorted in ascending order.\n";

    return 0;
}