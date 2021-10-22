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
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);
	return (0);
}
