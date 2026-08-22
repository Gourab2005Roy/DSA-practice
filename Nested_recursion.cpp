// Nested recursion

// In this, the function is used as a parameter while calling the function itself.


#include<iostream>

int fun(int n)
{
    if(n>100)
    {
        return (n-10);
    }
    return (fun(fun(n+11)));
}

int main()
{
    std::cout<<fun(95);
    return 0;
}