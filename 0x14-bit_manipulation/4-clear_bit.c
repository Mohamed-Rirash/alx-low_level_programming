#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to an integer
 * @index: integer, position to change
 *
 * Return: integer, 1 on success, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int diff;
	unsigned int hold;

	if (index > 64 || n == 0)
		return (-1);

	hold = index;

	for (diff = 1; hold > 0; diff *= 2, hold--)
		;
	if ((*n >> index) & 1)
		*n -= diff;

	return (1);
}

