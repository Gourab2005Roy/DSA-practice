// Finding the factorial of a number.

#include<iostream>

int fact(int n)
{
    if(n == 0)
    {
        return 1;
    }
    return (fact(n-1) * n);
}

int main()
{
    std::cout<<fact(5);
    return 0;
}