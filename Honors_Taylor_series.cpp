// Using Honor's rule in taylor series.

// This method is used to make the multiplication of 'Exponential' easier and make less calculative steps to complete.
// Due to using this rule the time complexity has reduced from 'QUADRATIC' to 'LINEAR'.
// Now the time complexity is: - O(n).
// 'n' here denotes the accuracy level, higher the accuracy level, the more the accurate number.
// 'inf' means 'infinity'. Compilers gives 'inf' if the mathematical calculation of the given equation results to 'infinity'.


#include<iostream>

double honor_taylor_series(double x, double n)
{
    static double sum = 1; // Here, 'static' variable is used so that, we could use the value of 'sum' through out the whole process. 
    // And face no problem while returning the value of 'sum', if we don't use the static variable for 'sum', then while returning the value, we may get the initialized value of 'sum'.
    if(n == 0)
    {
        return sum;
    }

    sum = 1 + ((x/n)*sum);
    return (honor_taylor_series(x, (n-1)));
}

double honor_taylor_series_loop(double x, double n) // Loop version.
{
    double sum = 1;
    
    for(; n>0; n--)
    {
        sum = 1 + ((x/n)*sum);
    }

    return sum;
}

int main()
{
    std::cout<<honor_taylor_series(2, 25)<<" "<<honor_taylor_series_loop(2, 25);
    return 0;
}