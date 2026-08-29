// Linear Search Move to Front advanced.

// Here, we gonna swap the present key element with the first element of the array.
// Then the second key element will be swapped with the second element of the array.

// Simply the key elements will be swapped with the starting elements of the array.
// Means, if the first key element is found, then it will be swapped with the first element of the array, then follows the second, third and so on...


#include<iostream>

void Linear_search_Move_to_Front_advanced(int a[], int size, int key)
{
    static std::size_t value = 0; // Static variable to keep a track of the index with which the key element is about to be swapped.

    for(std::size_t i = 0; i<size; i++)
    {
        if(a[i] == key)
        {
            std::cout<<"Key has been found in the index "<<i<<"\n";
            
            // Swapping the element with the previous element.
            int temp = a[i];
            a[i] = a[value];
            a[value] = temp;
            value++;

            // Printing the whole array.
            for(std::size_t i = 0; i<size; i++)
            {
                std::cout<<a[i]<<" ";
            }
            std::cout<<"\n";
            return;
        }
    }
    std::cerr<<"Key not found.\n";
}

int main()
{
    int a[] = {8, 9, 4, 7, 6, 3, 10, 5, 14, 2};
    int size = sizeof(a)/sizeof(a[0]);

    int key = 5;
    int key_1 = 2;

    Linear_search_Move_to_Front_advanced(a, size, key);
    std::cout<<"\n";
    Linear_search_Move_to_Front_advanced(a, size, key_1);

    return 0;
}