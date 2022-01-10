#include "main.h"

/**
 * * _strcat - concatec two strings
 *
 * @dest: pointer final concatenect
 * @src: source string to concatenet
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, len_src, len_dest;

	len_src = _strlen(src);
	len_dest = _strlen(dest);
	for (i = 0; i < len_src; i++)
	{
		dest[len_dest + i] = src[i];
	}
	return (dest);
}
