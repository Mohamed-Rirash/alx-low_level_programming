#include "main.h"
/**
 * free_grid - free memory of a grid
 * @grid: address of a 2D grid
 * @height: height of the grid
 *
 * Description: a function that frees a 2 dimensional
 * grid previously created by your alloc_grid function.
 * Return: None
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

