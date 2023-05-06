#include "main.h"
/**
 * get_endianness - nnnnn
 * Return: jjjjj
 */

int get_endianness(void)
{
	int i;
	char *c;

	i = 1;
	c = (char *)&i;

	return (*c);
}
