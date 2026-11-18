// Finding duplicate elements in an sorted array.
// Here, we are checking the current element with the previous, if a duplicate is found, then we inserting that value to the last_duplicate and then moving forward.

#include<iostream>

int main()
{
    int a[] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};
    int size = sizeof(a)/sizeof(int);

    int lastDuplicate = 0;

    for(int i = 0; i<size; i++)
    {
        if(a[i] == a[i+1] && a[i] != lastDuplicate)
        {
            std::cout<<a[i]<<"\n";
            lastDuplicate = a[i];
        }
    }
    return 0;
}