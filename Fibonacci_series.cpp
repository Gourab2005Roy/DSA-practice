// Fibonacci series.

// This is a kind of series where the present value is being decided by the summation of the previous two values.
// The first two values are kept fixed, as 0 and 1.



#include<iostream>

// This recursion is not useful as it is taking too much time, the time complexity of this function is 'O(2^n)'.
// Here, same call is done multiple times, as a result time is wasting, so to reduce the number of calls and use the used call's value, we are doing modifications.
int fibonacci_series(int n) // Here 'n' denotes the number present in the index number.
{
    if(n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return (fibonacci_series(n-2) + fibonacci_series(n-1));
    }
}

// Memoization: - Storing the result of function call, so that they can be utilized again, when we need the same call or avoiding excessive calls.
// This function takes the time complexity as 'O(n)'.
int F[10]; // This is a GLOBAL array.
int memoization_fibonacci_series(int n)
{
    if(n == 0 || n == 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if(F[n-1] == -1)
        {
            F[n-1] = memoization_fibonacci_series(n-1);
        }
        if(F[n-2] == -1)
        {
            F[n-2] = memoization_fibonacci_series(n-2);
        }
        return (F[n-1] + F[n-2]);
    }
    
}

// Using 'Iterative-function'. The time complexity of this function is 'O(n)'.
int loop_fibonacci_series(int n)
{
    std::size_t t0 = 0;
    std::size_t t1 = 1;
    std::size_t sum = 0;

    for(std::size_t i = 2; i<=n; i++)
    {
        sum = t0 + t1;
        t0 = t1;
        t1 = sum;
    }
    return sum;
}

int main()
{
    for(std::size_t i = 0; i<10; i++)
    {
        F[i] = -1;
    }
    std::cout<<fibonacci_series(6)<<" "<<memoization_fibonacci_series(6)<<" "<<loop_fibonacci_series(6);
    return 0;
}