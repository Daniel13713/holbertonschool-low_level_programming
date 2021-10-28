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

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}


/**
 * *_strncat -function that concatenates two strings.
 *
 * @dest: final result
 * @src: string thet append to dest string
 * @n: bytes of src
 * Return: dest
 */

char *_strncat(char *dest, char *src)
{
	int i;
	int len;

	len = _strlen(dest);
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
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
	for (i = 3; i < ac; i++)
	{
		sumlen += _strlen(av[i]);
	}
	str = malloc(sumlen * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		str = _strncat(str, av[i]);
		str = _strncat(str, "\n");
	}
	return (str);
}

