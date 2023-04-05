#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - naturals
 * @n: keo
 * Return: hunchy
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - my function
 * square of numbs
 * @n: sq root
 * @i: looper
 * Return: some answers 
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
