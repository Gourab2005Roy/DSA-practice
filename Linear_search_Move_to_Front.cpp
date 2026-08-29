// Linear Search Move to Front.

// Here, we gonna swap the present key element with the first element of the array.


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
            std::cout<<"Key has been found in the index "<<i<<"\n";
            
            // Swapping the element with the previous element.
            int temp = a[i];
            a[i] = a[0];
            a[0] = temp;

            // Printing the whole array.
            for(std::size_t i = 0; i<size; i++)
            {
                std::cout<<a[i]<<" ";
            }

            return 1;
        }
    }
    std::cerr<<"Key not found.\n";
    return 0;
}