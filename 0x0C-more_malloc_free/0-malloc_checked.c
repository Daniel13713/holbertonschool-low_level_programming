#include "main.h"

/**
 * *malloc_checked - allocate memory with malloc
 *
 * @b: number of memory
 * Return: Pointer
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
	{
		free(p);
		exit(98);
	}
	return (p);
}


