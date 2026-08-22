// Summation of first 'N' natural number.

// Time complexity of recursion is: O(n) but takes huge stack size.
// Time complexity of loop: O(n).
// Time complexity of direct formula: O(1).


#include<iostream>

// Using recursion
int summation_of_first_n_natural_number(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return (summation_of_first_n_natural_number(n-1) + n);
}

// Using loop.
int loop(int n)
{
    std::size_t sum = 0;
    for(std::size_t i = 1; i<=n; i++)
    {
        sum+=i;
    }

    return sum;
}

// Using direct_formula
int direct_formula(int n)
{
    return ((n*(n+1))/2);
}



int main()
{
    std::cout<<summation_of_first_n_natural_number(5)<<" "<<direct_formula(5)<<" "<<loop(5);

    return 0;
}
