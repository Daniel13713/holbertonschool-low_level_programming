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
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			s = s + i;
			return (s);
		}
		i++;
	}
	return (NULL);
}
