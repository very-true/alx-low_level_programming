#include "variadic_functions.h"

/**
 * sum_them_all - for the addition
 * @n: our parameters
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int total;
	unsigned int a;
	va_list b;

	va_start(b, n);

	if (n == 0)
		return (0);

	for (a = 0; a < n; a++)
		total += va_arg(b, int);

	va_end(b);

	return (total);
}
