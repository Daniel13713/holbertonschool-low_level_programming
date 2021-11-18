#include "main.h"

/**
 * _strlen_recursion - calculate the length of a string
 *
 * @s: string
 * Return: Length of the string s
 */

int _strlen_recursion(const char *s)
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
 * rev_string - Function that reverse a string
 *
 * @s: string
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i, j, k;
	char c[1024];
	char *p = c;

	i = 0;
	i = _strlen_recursion(s);

	for (j = i - 1; j >= 0; --j)
	{
		p[i - j - 1] = *(s + j);
	}
	for (k = 0; k <= i - 1; k++)
	{
		s[k] = p[k];
	}
}

/**
 * _pow_recursion - calculate the pow y of x
 *
 * @x: number to calculate the power
 * @y: power
 * Return: Result of x**y
 */

unsigned int _pow_recursion(unsigned int x, unsigned int y)
{
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

/**
 * binary_to_uint - functions that convert a binary number to decimal
 *
 * @b: binary number
 * Return: Decimal number or (0) if fail
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_num = 0;
	int i = 0;
	char *copy = NULL;

	if (!b)
	{
		return (0);
	}
	copy = strdup(b);
	rev_string(copy);
	while (copy[i] != '\0')
	{
		if (copy[i] == '0' + 1)
		{
			dec_num += _pow_recursion(2, i);
		}
		if (copy[i] != '0' && copy[i] != '0' + 1)
		{
			free(copy);
			return (0);
		}
		if (i > 32)
		{
			free(copy);
			return (0);
		}
		i++;
	}
	free(copy);
	return (dec_num);
}
