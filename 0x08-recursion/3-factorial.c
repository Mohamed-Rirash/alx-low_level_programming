#include "main.h"
/**
 * factorial - calculate factorial
 * *@n: integer whose factorial is to be calculated
 *
 * Description: a function that returns the factorial of a given number.
 * Return: integer, -1 if n < 0, 1 if n is equals 0 or factorial value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

