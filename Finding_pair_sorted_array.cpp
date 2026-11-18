// Finding pair of sum in a sorted array.

#include<iostream>

int main()
{
    int a[] = {1, 3, 4, 5, 6, 8, 9, 10, 12, 14};
    int size = sizeof(a)/sizeof(a[0]);
    int i = a[0];
    int j = a[size - 1];

    int k = 10;
    while(i<j)
    {
        if(a[i] + a[j] == k)
        {
            std::cout<<a[i]<<" "<<a[j]<<"\n";
            i++;
            j--;
        }
        else if(a[i] + a[j] > k)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return 0;
}