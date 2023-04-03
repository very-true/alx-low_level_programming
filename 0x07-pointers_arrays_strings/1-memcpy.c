#include "main.h"

/**
 * _memcpy - troy
 * @dest: danger
 * @src: something
 * @n: yuck
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

