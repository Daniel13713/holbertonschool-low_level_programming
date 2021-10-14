#include "main.h"

/**
 * _strlen - return the length of a string
 *
 * @s: pointer to string
 * Return: Length of a string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}


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
