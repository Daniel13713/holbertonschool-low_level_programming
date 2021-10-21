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
