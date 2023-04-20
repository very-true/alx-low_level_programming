#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - the function
  * @a: first int
  * @b: second int
  * Return: an int
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - the func
  * @a: first int
  * @b: second int
  * Return: an int 
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - the function
  * @a: first int
  * @b: second int
  * Return: returns an int
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - the function
  * @a: first int
  * @b: the second int
  * Return: an int
  */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - ...
  * @a: first integer
  * @b: second integer
  * Return: an integer
  */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
