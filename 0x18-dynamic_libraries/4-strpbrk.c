#include "main.h"

/**
 * _strpbrk - locates the first ocurrence in the string s of any
 * byte of string accept
 *
 * @s: String that to be scaned
 * @accept: string with the bytes to match
 * Return: pointer to the byte in s the matches one of bytes of
 * accept, and NULL is no matched with any byte
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s++)
	{
		j = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
	}
	return (NULL);

}
