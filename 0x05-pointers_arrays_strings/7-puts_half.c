#include "main.h"

/**
 * puts_half - prints half of character
 *
 * @str: Pointer to String
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i, len, count;

	len = _strlen(str);
	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		count = (len - 1) / 2 + 1;
		for (i = count; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar(10);
}

/**
 * _strlen - count the length of the string
 *
 * @s: string
 * Return: The len of string
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
