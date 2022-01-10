#include "main.h"

/**
 * *_strncat -function that concatenates two strings.
 *
 * @dest: final result
 * @src: string thet append to dest string
 * @n: bytes of src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len;

	len = _strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
