#include "main.h"

/**
 * **alloc_grid - matrix width * height
 *
 * @width: columns
 * @height: rows
 * Return: matriz 2-dimensional (grid)
 */

int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	matrix = malloc(height * sizeof(int *));
	if (matrix == NULL)
	{
		free(matrix);
		return (0);
	}
	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(width * sizeof(int));
		printf("bol = %d\n", *matrix[i]);
		if (matrix[i] == NULL)
		{
			printf("INIF");
			for (j = 0; j < width; j++)
			{
				free(matrix[j]);
			}
			free(matrix);
			return (0);
		}
		
		printf("AFTERIF = %d\n", *matrix[i]);
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}
	return (matrix);

}
