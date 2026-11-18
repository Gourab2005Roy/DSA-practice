// Finding min and max in one go.

#include<iostream>

int main()
{
    int a[] = {5, 8, 3, 9, 6, 2, 10, 7, -1, 4};
    int size = sizeof(a)/sizeof(a[0]);

    int min = a[0];
    int max = a[0];

    for(int i = 0; i<size; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
        else if(a[i] > max)
        {
            max = a[i];
        }
    }
    std::cout<<min<<" and "<<max<<"\n";

    return 0;
}