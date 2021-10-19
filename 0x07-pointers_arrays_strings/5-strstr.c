#include "main.h"

/**
 *
 *
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int j, k;
	char *h = haystack;
	char *n = needle;

	k = 0; 
	while (*h++)
	{
		j = 0;
		for (j = 0; n[j] != '\0'; j++)
		{
			 if (n[j] == *h)
			{
				k++;
			}
		}
		if (k == j)
		{
			return (h - 1);
		}
	}
	return (NULL);
} 
