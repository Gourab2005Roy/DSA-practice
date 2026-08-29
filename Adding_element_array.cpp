// Adding an element in the array.

// Adding the element in the last position.

#include<iostream>

int main()
{
    int a[12] = {8, 3, 7, 12, 6, 9};
    int key = 10;
    int length = 0;

    for(std::size_t i = 0; i<10; i++)
    {
        if(a[i] != 0)
        {
            length++;
        }
    }
    std::cout<<length<<"\n";

    a[length] = key;
    length++;

    for(std::size_t i = 0; i<length; i++)
    {
        std::cout<<a[i]<<" ";
    }
    std::cout<<"\n";

    return 0;
}