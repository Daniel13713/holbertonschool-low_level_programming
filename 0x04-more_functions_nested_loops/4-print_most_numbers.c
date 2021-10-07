#include "main.h"

/**
 * print_most_numbers - print number from 0 to 9 and do not print 2 and 4
 *
 * Return: Nothing
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar('0' + i);
		}
	}
	_putchar(10);
}
