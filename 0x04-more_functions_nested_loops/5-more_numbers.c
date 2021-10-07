#include "main.h"

/**
 * more_numbers - prints 10 times the number from 0 to 14
 *
 * Return: Nothing
 */

void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar('0' + j / 10);
			}
			_putchar('0' + j % 10);
		}
		_putchar(10);
		i++;
	}
}
