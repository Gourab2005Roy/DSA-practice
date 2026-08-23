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

int main()
{
    std::cout<<taylor_series(2, 25);
    return 0;
}