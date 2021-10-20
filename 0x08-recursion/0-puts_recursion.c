#include "main.h"

/**
 * _puts_recursion - write the string s to follow a new line
 *
 * @s: string
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
