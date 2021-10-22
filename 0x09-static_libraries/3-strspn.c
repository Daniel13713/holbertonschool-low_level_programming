#include "main.h"

/**
 * _strspn - search characteres of accept in s
 *
 * @s: string that need to be scaned
 * @accept: String that need to be matched in s
 * Return: the length of the initial part of the string s that contain
 * only characters from the string accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{	k = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
			}
		}
		if (k == 0)
		{
			return (i);
		}
	}
	return (i);
}
