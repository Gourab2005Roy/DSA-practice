// Finding duplicates in an unsorted array using hashing.

#include<iostream>
#include<climits>

int main()
{
    int a[] = {8, 3, 6, 4, 6, 5, 6, 8, 2, 7};
    int size = sizeof(a)/sizeof(int);

    int max = INT_MIN;
    for(int i = 0; i<size; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }
    int high = max;
    int H[max+1] = {0};
    for(int i = 0; i<size; i++)
    {
        H[a[i]]++;
    }
    for(int i = 0; i<=max; i++)
    {
        if(H[i] > 1)
        {
            std::cout<<i<<" has appeared "<<H[i]<<" times.\n";
        }
    }
    return 0;
}