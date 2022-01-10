#include "main.h"

/**
 * *_strncpy - except that at most n bytes of src are copied.
 *
 * @dest: string that recived the copied
 * @src: source string
 * @n: number of bytes of src
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
