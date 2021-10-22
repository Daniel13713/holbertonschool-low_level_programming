#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copy n bytes from memory area src to the memory area of dest
 *
 * @dest: this is pointer to the destination array where thw content
 * is to be copied
 * @src: Source that will be copied
 * @n: number of bytes to copy
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
