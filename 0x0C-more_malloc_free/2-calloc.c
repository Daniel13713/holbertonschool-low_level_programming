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
	char *array = NULL;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		array[i] = 0;
	}
	return (array);
}
