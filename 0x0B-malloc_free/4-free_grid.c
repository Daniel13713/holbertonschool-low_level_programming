#include "main.h"

/**
 * free_grid - free memory space of a grid
 *
 * @grid: 2-dimensional array
 * @height: rows of matrix
 * Return: Nothing
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
