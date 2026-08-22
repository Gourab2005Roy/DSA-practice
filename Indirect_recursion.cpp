// Indirect recursion.

// It is a type of recursion that calls other functions in its own call.
// Here, we can see 'funA' calling 'funB' in its own function and vice-versa. ---->>> Real life view of Indirect recursion.


#include<iostream>

void funB(int n); // The function is being declared, cause, we can't use a function if its not declared before the function in which that function is being used.

void funA(int n)
{
    if(n>0)
    {
        std::cout<<n<<" ";
        funB(n-1);
    }
}
void funB(int n)
{
    if(n>1)
    {
        std::cout<<n<<" ";
        funA((n/2));
    }
}

int main()
{
    funA(20);

    return 0;
}