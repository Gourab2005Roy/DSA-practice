// Finding the total number of duplicates using hashing in a sorted array.


#include<iostream>
#include<climits>

int main()
{
    int a[] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};
    int size = sizeof(a)/sizeof(a[0]);

    int max = INT_MIN;
    for(int i = 0; i<size; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    int H[(max+1)] = {0};
    // Incrementing the elements through the index.
    for(int i = 0; i<size; i++)
    {
        H[a[i]]++;
    }

    // Counting the incremented elements >1
    for(int i = 0; i<=max; i++)
    {
        if(H[i] > 1)
        {
            std::cout<<i<<" has appeared "<<H[i]<<"\n";
        }
    }
    return 0;
}