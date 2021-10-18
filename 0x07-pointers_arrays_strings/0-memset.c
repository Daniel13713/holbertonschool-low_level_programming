#include "main.h"

/**
 * _memset - function fills the firs n bytes of the memory area poited
 * to by s with the constant byte b
 *
 * @s: memory area
 * @n: number of bytes
 * @b: value to change
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
