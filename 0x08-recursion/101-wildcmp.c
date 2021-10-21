#include "main.h"

/**
 * compare - compare two string
 *
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if no are equal, 1 if they are
 */


int compare(char *s1, char *s2)
{
	if (*s1 == *s2 && *s1 != '\0' && *s2 != '*')
	{
		return (compare(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		return (compare(s1, s2 + 1));
	}
	else if (*s1 != *s2 && *(s2 - 1) == '*')
	{
		return (compare(s1 + 1, s2 - 1));
	}
	else if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

/**
 * wildcmp - compare two strings and use the compare function
 *
 * @s1: string 1
 * @s2: string 2
 * Return: (1) if are equal, (0) if not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 != *s2 && *s2 != '*')
	{
		return (0);
	}
	return (compare(s1, s2));
}
