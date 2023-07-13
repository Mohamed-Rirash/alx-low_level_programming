#include "main.h"

/**
 * array_range - create an array of integers
 * @min: integer, start value
 * @max: integer, end value
 *
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(*p) * (max - min + 1));

	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		p[i] = min;
	return (p);
}

