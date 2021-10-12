#include "main.h"

/**
 * print_array - prints the n elements of an array of integers
 *
 * @a: array
 * @b: size of array
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i, j; 

	len = _strlen(a);

}

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
