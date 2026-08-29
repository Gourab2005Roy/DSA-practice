// Here, we gonna delete an element from a specific index of the given array.


#include<iostream>

int main()
{
    int a[12] = {8, 3, 7, 12, 15, 6, 9, 10};
    int size = 12;
    int length = 0;

    for(std::size_t i = 0; i<size; i++)
    {
        if(a[i] != 0)
        {
            length++;
        }
    }
    std::cout<<length<<" is the length of the array.\n";

    int delete_index = 3;
    int element_stored = a[delete_index]; // We have stored the value, for future action, if any required.
    // Performing the operation of removing/deleting the element.
    for(std::size_t i = delete_index; i<length; i++)
    {
        a[i] = a[i+1];
    }
    length--;

    // Printing the array with the elements.
    for(std::size_t i = 0; i<length; i++)
    {
        std::cout<<a[i]<<" ";
    }

    return 0;
}