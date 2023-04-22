#include "variadic_functions.h"

/**
 * print_all - joker
 * @format: loki
 * Return: captain barbosa
 */

void print_all(const char * const format, ...)
{
	int a;
	int b;
	char *c;
	va_list a_list;

	va_start(a_list, format);
	a = 0;
	while (format != NULL && format[a] != '\0')
	{
		switch (format[a])
		{
			case 'c':
				printf("%c", va_arg(a_list, int));
				b = 0;
				break;
			case 'i':
				printf("%i", va_arg(a_list, int));
				b = 0;
				break;
			case 'f':
				printf("%f", va_arg(a_list, double));
				b = 0;
				break;
			case 's':
				c = va_arg(a_list, char*);
				if (c == NULL)
					c = "(nil)";
				printf("%s", str);
				c = 0;
				break;
			default:
				b = 1;
				break;
		}
		if (format[a + 1] != '\0' && b == 0)
			printf(", ");
		a++;
	}
	printf("\n");
	va_end(a_list);
}
