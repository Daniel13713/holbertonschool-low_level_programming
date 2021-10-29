#include "main.h"

/**
 * _strlen - return the length of a string
 *
 * @s: pointer to string
 * Return: Length of a string
 */

int _strlen(char *s)
{
	int i;

	if (s == NULL)
	{
		return (0);
	}
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * *string_nconcat - concaten two string unitil n bytes of the second
 *
 * @s1: the first string
 * @s2: the second string
 * @n: The firts n bytes of s2
 * Return: Pointer to string of the strings concatenect,
 * or (NULL) if fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str = NULL;
	int lens1, lens2, i;

	lens1 = _strlen(s1);
	lens2 = _strlen(s2);
	if (n >= (unsigned int) lens2)
	{
		n = (unsigned int) lens2;
	}
	str = malloc((lens1 + n + 1) * sizeof(char));
	if (str == NULL)
	{
		free(str);
		return (0);
	}
	i = 0;
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			str[i] = s1[i];
			i++;
		}
	}
	i = 0;
	if (s2 != NULL)
	{
		while (s2[i] != '\0' && i < (signed int) n)
		{
			str[i + lens1] = s2[i];
			i++;
		}
	}
	str[i + lens1] = '\0';
	return (str);
} 
