#include "main.h"

/**
 * _strlen_recursion - calculate the length of a string
 *
 * @s: string
 * Return: Length of the string s
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		return (i + _strlen_recursion(s + 1));
	}
	return (i);
}

/**
 * _strdup - duplicate a string with malloc
 *
 * @str: string to duplicate
 * Return: Pointer to string
 */

char *_strdup(char *str)
{
	char *copy;
	int size_str, i = 0;

	if (str == NULL)
	{
		return (0);
	}

	size_str = _strlen_recursion(str);
	copy = malloc(size_str * sizeof(char));

	if (copy == NULL)
	{
		return (0);
	}

	while (str[i] != '\0')
	{
		copy[i] = str[i];
		i++;
	}
	return (copy);
}

