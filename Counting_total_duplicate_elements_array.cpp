// Here, we are calculating the total number of duplicate elements present in the sorted array.

#include<iostream>

int main()
{
    int a[] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};
    int size = sizeof(a)/sizeof(int);

    for(int i = 0; i<size-1; i++)
    {
        if(a[i] == a[i+1])
        {
            int j = i+1;
            while(a[i] == a[j] && j<size)
            {
                j++;
            }
            std::cout<<a[i]<<" appeared "<<(j-i)<<"\n";
            i = j-1;
        }
    }
    return 0;
}