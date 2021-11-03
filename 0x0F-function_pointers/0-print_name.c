#include "function_pointers.h"

/**
 * _strlen - return the length of a string
 *
 * @s: pointer to string
 * Return: Length of a string
 */

int _strlen(char *s)
{
	int i;

	if (!s)
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
 * print_name - use pointer to function f witn argument name
 *
 * @name: argument, name of a person
 * @f: funtion to pointer
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (!name)
	{
		free(name);
		goto error;
	}
	f(name);
error:
	return;
}
