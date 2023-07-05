#include "main.h"
/**
 * power_operation - find the square
 * @x: integer whose root is to be found
 * @y: integer to determine root
 *
 * Return: integer, square root of n
 */
int power_operation(int x, int y)
{
	if ((y * y) == x)
		return (y);
	if (y == x)
		return (-1);
	return (0 + power_operation(x, y + 1));
}

/**
 * _sqrt_recursion - square root
 * @n: integer to determine sqaure root
 *
 * Description: a function that returns the natural square root of a number.
 * Return: sqaure root of n, else -1 if n < 0, else 0 if x equals 0.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}

