// Tail recursion.

// It is a type of recursion, where the function call happens in the last.
// In simple words, there remains so such operations to be performed after the function call.

// Using loop is much better than tail recursion.

#include<iostream>

void fun(int n)
{
    if(n>0)
    {
        std::cout<<n<<" ";
        fun(n-1);
    }
}

void fun_loop(int n)
{
    while(n != 0)
    {
        std::cout<<n<<" ";
        n--;
    }
}

int main()
{
    fun(5);
    fun_loop(5);
    return 0;
}