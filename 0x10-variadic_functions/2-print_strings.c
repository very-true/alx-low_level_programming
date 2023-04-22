#include "variadic_functions.h"

/**
 * print_strings - heyo
 * @separator: xxx
 * @n: aaa
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *p;
	unsigned int a;
	va_list b;

	va_start(b, n);
	if (separator == NULL)
		separator = "";

	for (a = 0; a < n; a++)
	{
		p = va_arg(b, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", p);
		if (a < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(b);
}
