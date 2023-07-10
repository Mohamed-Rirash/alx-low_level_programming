#include "main.h"
/**
 * alloc_grid - create a two dimensional array
 * @width: number of columns
 * @height: number of rows
 *
 * Description: a function that returns a pointer
 * to a 2 dimensional array of integers.
 * Return: NULL on failure and when width or height is 0 or negative,
 * else return pointer to an array pointer
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	matrix = malloc(height * sizeof(*matrix));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(width * sizeof(**matrix));
		if (matrix[i] == NULL)
		{
			for ( ; i >= 0; )
				free(matrix[i--]);
			free(matrix);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			matrix[i][j] = 0;
	}
	return (matrix);
}

