#include "main.h"

/**
 * puts2 - prints every two characteres
 *
 * @str: character
 * Return: Nothing
 */

void puts2(char *str)
{
	int  i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar(10);
}
