// Head Recursion.

// It is a type of recursion, where the function call happens in the first.
// In simple words, there remains operations that are yet to be performed aftr the function call.
// Those operations are done after the call is been done.

#include<iostream>

void fun(int n)
{
    if(n>0)
    {
        fun(n-1);
        std::cout<<n<<" ";
    }
}

int main()
{
    fun(5);
    return 0;
}