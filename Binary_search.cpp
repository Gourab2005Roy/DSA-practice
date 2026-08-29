// Binary Search

// Here, we gonna find the key element from the given array.
// Mandatory thing: The array must be sorted.

#include<iostream>

int main()
{
    int a[] = {4, 8, 10, 15, 18, 21, 24, 25, 29, 33, 34, 37, 39, 41, 43};
    int size = sizeof(a)/sizeof(a[0]);
    int key = 18;

    std::size_t low = 0;
    std::size_t high = (size-1);

    while(low <= high)
    {
        std::size_t mid = low + ((high - low)/2);

        if(a[mid] == key)
        {
            std::cout<<"Key found in the index "<<mid<<"\n";
            return 1;
        }
        else if(a[mid] < key)
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    std::cerr<<"Key not found.\n";

    return 0;
}