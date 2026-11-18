// Finding the multiple missing element in faster way in an unsorted array.

#include<iostream>
#include<climits>

int main()
{
    int a[] = {3, 7, 4, 9, 12, 6, 1, 11, 2, 10};
    int size = (sizeof(a)/sizeof(int));
    // Finding the low and the highest element in the array.
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i = 0; i<size; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    int low = min;
    int high = max;
    std::cout<<"low: "<<max<<" and high: "<<min<<"\n";

    // Finding the missing elements.
    int H[(high + 1)] = {0}; // This is known as HASH TABLE / BIT SET.
    for(int i = 0; i<size; i++)
    {
        H[a[i]]++;
    }
    std::cout<<"The missing elements are: ";
    for(int i = low; i<size; i++)
    {
        if(H[i] == 0)
        {
            std::cout<<i<<" ";
        }
    }
    return 0;
}