// Inserting an element in an array.


// Here, we have inserted an element in a specific index number and shifted the rest of the value to the side.

#include<iostream>

int main()
{
    int a[12] = {8, 3, 7, 12, 6, 9, 10};
    int size = 12;
    int index = 4;
    int key = 15;
    int length = 0;
    
    for(std::size_t i = 0; i<size; i++)
    {
        if(a[i] != 0)
        {
            length++;
        }
    }
    std::cout<<length<<" is the length of the array.\n";

    if(index > size)
    {
        std::cerr<<"The index value is greater than the total size of the array.\n";
        return -1;
    }

    for(std::size_t i = length; i>index; i--)
    {
        a[i] = a[i-1];
    }
    a[index] = key;
    length++;

    for(std::size_t i = 0; i<length; i++)
    {
        std::cout<<a[i]<<" ";
    }

    return 0;
}