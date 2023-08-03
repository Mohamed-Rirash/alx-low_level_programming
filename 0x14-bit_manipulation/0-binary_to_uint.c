#include "main.h"

/**
 * bit_check - check for bit digits
 * @b: pointer to a string
 *
 * Return: length of the string or 0 if any char is a non bit digit
 */
int bit_check(const char *b)
{
	int n = 0, i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
			n++;
		else
			return (0);
		i++;
	}
	return (n);
}

/**
 * binary_to_uint - converts binary to an unsigned int
 * @b: pointer to a string
 *
 * Return: integer, the converted number, or 0 if
 * - any char in the string b is not 0 or 1
 * - b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, power;
	int len = bit_check(b);

	if (b == NULL || !len)
		return (0);
	for (power = 1, len--; len >= 0; len--, power *= 2)
	{
		if (b[len] == '1')
			decimal += power;
	}
	return (decimal);
}

