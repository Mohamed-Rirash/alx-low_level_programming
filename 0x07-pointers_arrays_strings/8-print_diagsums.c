#include "main.h"

/**
 * print_diagsums - sum of two square diagonals
 * @a: pointer to an array of array
 * @size: size of square
 *
 * Description: a function that prints the sum of
 * the two diagonals of a square matrix of integers
 * Return: None
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (size * i + i));
		sum2 += *(a + (size * i + size - 1 - i));
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}

