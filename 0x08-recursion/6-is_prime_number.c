#include "main.h"
/**
 * is_prime - check for prime numbers
 * @n: unsigned integer
 * @x: usigned integer to check against
 *
 * Return: integer, 1 if prime else 0
 */
int is_prime(unsigned int n, unsigned int x)
{
	if (n % x == 0)
	{
		if (n == x)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, x + 1));
}

/**
 * is_prime_number - determine if a given integer is a prime number
 * @n: integer to check
 *
 * Return: integer, 1 if prime else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}

