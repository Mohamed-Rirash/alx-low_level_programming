#include "3-calc.h"

/**
 * op_add - add two integers
 * @a: integer variable
 * @b: integer variable
 *
 * Return: integer, sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two integers
 * @a: integer variable
 * @b: integer variable
 *
 * Return: integer, difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two integers
 * @a: integer variable
 * @b: integer variable
 *
 * Return: integer, product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two integers
 * @a: integer variable
 * @b: integer variable
 *
 * Return: integer, division of a by b
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
 * op_mod - remainder of two integers
 * @a: integer variable
 * @b: integer variable
 *
 * Return: integer, remainder between a / b
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

