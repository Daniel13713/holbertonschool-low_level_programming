#include "main.h"

/**
 * jack_bauer - Prints every minute od the day
 *
 * Return: Every minute
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(58);
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar(10);
		}
	}
}
