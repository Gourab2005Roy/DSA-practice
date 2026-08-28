// Inserting an element in the array.

#include<iostream>

int main()
{
    int a[10] = {2, 8, 4, 5, 9, 0};
    int index = 8;
    int key = 10;
    int length = 0;

    for(std::size_t i = 0; i<10; i++)
    {
        if(a[i] != 0)
        {
            length++;
        }
    }
    std::cout<<length;

    return 0;
}