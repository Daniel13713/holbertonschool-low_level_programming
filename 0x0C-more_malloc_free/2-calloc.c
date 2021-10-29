#include "main.h"

/**
 * _calloc - allocate memory to array
 *
 * @nmemb: number of term in array
 * @size: size of each term of array
 * Return: pointer allocate
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array = NULL;
	int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * size);
	if (array == NULL)
	{
		free(array);
		for (i = 0; i < (signed int) nmemb; i++)
		{
			array[i] = 0;
		}
		return (0);
	}

	return (array);
}
