#include<iostream>

int main()
{
    // Array in order, starting from 1.
    int a[] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12};
    int size = (sizeof(a)/sizeof(int));
    int last_value = a[size - 1];
    // Here, we gonna compare the summation of each and every value with the arithmetic way of finding sum of all numbers.
    int sum = 0;
    for(int i = 0; i<size; i++)
    {
        sum = sum+a[i];
    }
    int total_sum = ((last_value * (last_value+1))/2);
    int missing_value = (total_sum - sum);
    
    std::cout<<size<<"\n";
    std::cout<<total_sum<<"\n";
    std::cout<<sum<<"\n";
    std::cout<<"The missing value is "<<missing_value;



    // Array in order, not startiing from 1.
    int arr[] = {6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17};
    // Here, we need to know the low, high, and the total number of elemens present.
    // Then, we need to perform the subtraction between the values and the index individually.
    int size_1 = sizeof(arr)/sizeof(int);
    int low = arr[0];
    int high = arr[size_1 - 1];
    int diff = (low - 0);

    for(int i = 0; i<size_1; i++)
    {
        if(arr[i] - i != diff)
        {
            std::cout<<"The missing element is: "<< (i+diff)<<"\n";
            break;
        }
    }
    return 0;
}