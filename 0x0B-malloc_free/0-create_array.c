#include "main.h"

/**
 * create_array - create ana array with a char initialize
 *
 * @size: size of array
 * @c: character to inicializate of array
 * Return: Pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i = 0;

	if (size == 0)
	{
		return (0);
	}
	buffer = malloc(size * sizeof(char));
	if (buffer == NULL)
	{
		return (0);
	}
	while (i < size)
	{
		*(buffer + i) = c;
		i++;
	}
	return (buffer);
}
