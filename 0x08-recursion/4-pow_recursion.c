#include "main.h"
/**
 * _pow_recursion - raise to power
 * @x: interger to be raised
 * @y: power
 * Description: a function that returns the value of x raised to the power of y
 * Return: y power of x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

