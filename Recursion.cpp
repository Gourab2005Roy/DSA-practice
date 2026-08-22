// Recursion.
// It is a technique, where functions either calls themselves directly or indirectly to break a complex problem down into smaller, manageable sub-problems.
// A recursion must have a base condition that should be checked in each and every call, to see whether it met the end or not.

#include<iostream>

int fun(int n)
{
    if(n>0)
    {
        std::cout<<n<<" ";
        fun(n-1); // This is calling the function itself, with different value, again and again.
    }
}

int main()
{
    fun(3);

    return 0;
}