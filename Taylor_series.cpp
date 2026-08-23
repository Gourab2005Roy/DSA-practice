// Taylor series.

// Here, we are finding the accuracy of the 'e^x'.
// The level of accuracy depends on the value of 'n'. Here, 'n' denotes the level of accuracy we want.
// 'n' is directly proportional to the level of accuracy.

// This method of performing 'Taylor series' takes more time as the number of operations done are huge..


#include<iostream>

double taylor_series(int x, int n)
{
    // Reason for using 'static' varaible, cause, they gonna collect the value and remain the same throughout the whole process.
    static double p = 1;
    static double f = 1;
    double sum = 0;

    if(n == 0)
    {
        return 1;
    }

    sum = taylor_series(x, (n-1));
    p *= x;
    f *= n;
    return (sum + (p/f));
}

// Using loop..
double taylor_series_loop(int x, int n)
{
    static double num = 1;
    static double den = 1;
    double sum_loop = 1;
    for(std::size_t i = 1; i<=n; i++)
    {
        num *= x;
        den *= i;
        sum_loop = sum_loop + (num/den);
    }
    return sum_loop;
}

int main()
{
    std::cout<<taylor_series(2, 25)<<"\n";
    std::cout<<taylor_series_loop(2, 25);
    return 0;
}