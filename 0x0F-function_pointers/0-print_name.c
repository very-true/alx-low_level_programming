#include "function_pointers.h"

/**
 * print_name - this prints the name
 * @name: the chosen name
 * @f: the function
 * Rteurn: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
