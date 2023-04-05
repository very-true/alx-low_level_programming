#include "main.h"

/**
 * _sqrt_recursion - computes the natural square root of a number
 * @n: the number to compute the square root of
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
        if (n < 0)
                return (-1);
        return (_sqrt(n, 1));
}

/**
 * _sqrt - helper function for _sqrt_recursion
 * @n: the number to compute the square root of
 * @i: the current guess for the square root
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt(int n, int i)
{
        if (n == 0)
                return (0);
        else if ((i * i) > n)
                return (-1);
        else if (i * i == n)
                return (i);
        else
                return (_sqrt(n, i + 1));
}
