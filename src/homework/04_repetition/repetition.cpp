#include "repetition.h"

int get_factorial(int number)
{
    int result = 1;
    for (int i = 1; i <= number; ++i)
    {
        result *= i;
    }
    return result;
}

int sum_odd_numbers(int number)
{
    int sum = 0;
    int i = 1;

    while (i <= number)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
        ++i;
    }
    return sum;
}
