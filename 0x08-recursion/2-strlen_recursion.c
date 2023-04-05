#include "main.h"

/**
 * _strlen_recursion - stoke
 * @s: great
 * Return: recursor
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
