#include "main.h"

/**
 * factorial - token 
 * @n: number
 * Return: roman
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

