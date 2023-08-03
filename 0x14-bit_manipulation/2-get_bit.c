#include "main.h"

/**
 * get_bit - get value of bit at given index of a binary value of an integer
 * @n: unsigned long integer
 * @index: unsigned interger
 *
 * Return: bit value 0 or 1, or -1 if program fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);

	return ((n >> index) & 1);
}

