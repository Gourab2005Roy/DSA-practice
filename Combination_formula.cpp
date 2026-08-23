// Combination formula.

// Combination is used to find the total number of possible combination.


#include<iostream>

long long fact(long long n)
{
    if(n == 0)
    {
        return 1;
    }
    return (fact(n-1) * n);
}
long long combination(long long n, long long r)
{
    long long a = fact(n);
    long long b = fact(r);
    long long c = fact((n-r));

    return ((a)/(b * c));
}


// This is found using Pascal's Triangle formula.
long long pascal_way_combination(long long n, long long r)
{
    if(r==0 || r==n)
    {
        return 1;
    }
    return (pascal_way_combination((n-1), r) + pascal_way_combination((n-1), (r-1)));
}

int main()
{
    std::cout<<combination(4, 2)<<" "<<pascal_way_combination(4, 2);
    return 0;
}