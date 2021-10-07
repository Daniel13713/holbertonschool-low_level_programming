#include "main.h"

/**
 * print_line - Draws a straight lines in the terminal
 *
 * @n: is the number of times the character _ should be printed
 * Return: Nothing
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar(10);
	}
	else
	{
		_putchar(10);
	}

}
