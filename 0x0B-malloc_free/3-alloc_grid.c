
Search or jump to…
Pull requests
Issues
Codespaces
Marketplace
Explore
 
@very-true 
BrightDaniel
/
alx-low_level_programming
Public
Fork your own copy of BrightDaniel/alx-low_level_programming
Code
Issues
7
Pull requests
2
Actions
Projects
Security
Insights
alx-low_level_programming/0x0B-malloc_free/3-alloc_grid.c
@BrightDaniel
BrightDaniel malloc_free Done
Latest commit 3ae2c19 on Jul 25, 2022
 History
 1 contributor
40 lines (34 sloc)  743 Bytes
 

#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function for pointer for two dimensional array of inegers
 * @width: array's width
 * @height: array's height
 * Return: pointer for two dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **array, i, j;
	int len = width * height;

	if (len <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			array[i][j] = 0;

	return (array);
}
