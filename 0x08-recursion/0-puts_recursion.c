#include "main.h"

/**
 * _puts_recursion - write the string s to follow a new line
 *
 * @s: string
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(10);
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
