// Effect of Static and Global varaibles over recursion function.

// Both 'static' and 'global' variables has same effect over recursion.
// Once, the value is increased, then it remains the same throughout the whole process, no matter in which step you are in.


#include<iostream>

int fun(int n)
{
    static int x = 0;

    if(n>0)
    {
        x++;
        return fun(n-1) + x;
    }
}

int y = 0;
int fun1(int n)
{
    if(n>0)
    {
        y++;
        return fun1(n-1) + y;
    }
}

int main()
{
    std::cout<<fun(5)<<" "<<fun1(5);
    return 0;
}