// Linear Search.

// It is a method of searching an element throughout the array.


#include<iostream>

int main()
{
    int a[] = {8, 9, 4, 7, 6, 3, 10, 5, 14, 2};
    int size = sizeof(a)/sizeof(a[0]);

    int key = 5;

    for(std::size_t i = 0; i<size; i++)
    {
        if(a[i] == key)
        {
            std::cout<<"key found in the index number "<<i<<"\n";
            return 1;
        }
    }
    std::cerr<<"Key not found.\n";
    return 0;
}