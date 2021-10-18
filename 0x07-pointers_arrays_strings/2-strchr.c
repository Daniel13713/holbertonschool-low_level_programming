#include "main.h"

/**
 * _strchr - lacates a character in a string
 *
 * @s: string
 * @c: character to find
 * Return: the pointer to the first ocurrence of the character c
 * in s
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
