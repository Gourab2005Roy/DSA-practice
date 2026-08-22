// Tree recursion.

// Tree recursion are those recusions where there are multiple function calls.

#include<iostream>

void fun(int n)
{
    if(n>0)
    {
        std::cout<<n<<" ";
        fun(n-1);
        fun(n-1);
    }
}

int main()
{
    fun(3);
    return 0;
}