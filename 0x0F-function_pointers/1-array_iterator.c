#include "function_pointers.h"

/**
 * array_iterator - the function
 * @array: the arrayy to be worked on
 * @size: the size of the array
 * @action:  we use this
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array && action)
	{
		a = 0;
		while (a < size)
		{
			action(array[a]);
			a++;
		}
	}
}
