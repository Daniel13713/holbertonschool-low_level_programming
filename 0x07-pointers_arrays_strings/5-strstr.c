#include "main.h"

/**
 * *_strstr - search a string
 *
 * @haystack: string principally
 * @needle: string to search
 * Return: String pointer begind match or NULL if ir not match
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int j;
	char *h = haystack;
	char *n = needle;

	while (*h++)
	{
		j = 0;
		for (j = 0; n[j] != '\0'; j++)
		{
			if (n[j] != *(h + j))
			{
				break;
			}
		}
		if (n[j] == '\0')
		{
			return (h);
		}
	}
	return (NULL);
}
