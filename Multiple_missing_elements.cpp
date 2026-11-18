// Here, we are going to find out multiple missing elements.
// We will use the logic of difference.

#include<iostream>

int main()
{
    int a[] = {6, 7, 8, 9, 11, 12, 15, 16, 17, 18, 19};

    int size = (sizeof(a)/sizeof(int));
    int low = a[0];
    int high = a[size-1];
    
    int diff = a[0] - 0;

    for(int i = 0; i<size; i++)
    {
        if((a[i] - i) != diff)
        {
            while(diff < a[i] - i)
            {
                std::cout<<(i + diff)<<"\n";
                diff++;
            }
        }
    }
    return 0;
}