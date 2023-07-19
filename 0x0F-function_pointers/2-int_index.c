#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: pointer to an array of integers
 * @size: array length
 * @cmp: pointer to a function
 *
 * Return: index of the first element for which cmp function does not return 0,
 * if no element matches, return -1, if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}

