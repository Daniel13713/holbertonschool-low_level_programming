#include "main.h"
#include <string.h>

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *h = haystack;
	char *n = needle;

	i = 0;
	while (h[i] != '\0')
	{
		j = 0;
		for (j = 0; n[j] != '\0'; j++)
		{
			if (n[j] != h[i + j])
			{
				break;
			}
		}
		if (n[j] == '\0')
		{
			return (&h[i]);
		}
		i++;
	}
	return (NULL);
}


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
		/*printf ("s1 = %s\n s2 +1 = %s\n", s1, s2 + 1);
		printf ("%s\n", strstr(s1, s2 + 1) );*/
		if (*s1 == *(s2 + 1))
		{
			return (compare(strstr(s1, s2 + 1), s2 + 1));
		}
		return (compare(s1, s2 + 1));
	}
	else if (*s1 != *s2 && *(s2 - 1) == '*' && *s1 != '\0')
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
