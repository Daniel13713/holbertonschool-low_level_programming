#include "main.h"

/**
 * *array_range - create an array of integers
 *
 * @min: value minume
 * @max: value maximum
 * Return: Array of interger, or Null if fail
 */

int *array_range(int min, int max)
{
	int *array = NULL;
	int i = 0;

	if (min > max)
	{
		return (0);
	}
	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
	{
		return (0);
	}
	for (i = 0; i <= max; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
