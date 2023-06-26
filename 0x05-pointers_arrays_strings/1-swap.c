#include "main.h"

/**
 * swap_int - swap integer values
 * @a: pointer to the first integer variable
 * @b: pointer to the second integer variable
 * Description: a function that swaps the values of two integers.
 *
 * Return None
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *b;
	*b = *a;
	*a = x;
}

