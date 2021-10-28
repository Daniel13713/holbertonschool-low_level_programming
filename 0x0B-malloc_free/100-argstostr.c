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

	if (s == NULL)
	{
		return (0);
	}

	if (*s)
	{
		i++;
		return (i + _strlen_recursion(s + 1));
	}
	return (i);
}

/**
 * *str_concat - concaten two string
 *
 * @s1: srting 1
 * @s2: string 2
 * Return: Pointer to string (concatenect)
 */

char *str_concat(char *s1, char *s2)
{
	int size_1, size_2, i;
	char *str = NULL;

	size_1 = _strlen_recursion(s1);
	size_2 = _strlen_recursion(s2);
	str = malloc((size_1 + size_2 + 1) * sizeof(char));
	if (str == NULL)
	{
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
		while (s2[i] != '\0')
		{
			str[i + size_1] = s2[i];
			i++;
		}
	}
	return (str);
}


/**
 * *argstostr - concatect many strings
 *
 * @ac: number of arguments
 * @av: array of arguments
 * Return: String concatened
 */

char *argstostr(int ac, char **av)
{
	char *str = NULL;
	int sumlen = 0, i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = ac - 1; i < ac; i++)
	{
		sumlen += _strlen_recursion(av[i]);
	}
	str = malloc(sumlen * sizeof(char));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		str = str_concat(str, av[i]);
		str = str_concat(str, "\n");
	}
	return (str);
}

