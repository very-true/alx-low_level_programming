#include "function_pointers.h"

/**
  * int_index - the main function
  * @array: the array to be worked on
  * @size: the size of the array
  * @cmp: a pointer
  * Return: an int
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
