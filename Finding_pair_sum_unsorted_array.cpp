// Finding a pair with sum in an unsorted array.

#include<iostream>
#include<climits>

int main()
{
    int a[] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    int size = sizeof(a)/sizeof(a[0]);

    int max = INT_MIN;

    for(int i = 0; i<size; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }

    int H[max+1] = {0};
    int k = 10;

    for(int i = 0; i<size; i++)
    {
        if(H[k-a[i]] != 0 && (k-a[i])>=0)
        {
            std::cout<<a[i]<<" "<<(k-a[i])<<" "<<k<<"\n";
        }
        H[a[i]]++;
    }
    return 0;
}