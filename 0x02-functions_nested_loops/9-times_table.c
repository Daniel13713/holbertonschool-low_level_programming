#include "main.h"

/**
 * times_table - prints the table of number 9
 *
 * return: number of the table
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		j = 0;
		while (j < 10)
		{
			k = j * i;
			if (k / 10 != 0)
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			else
			{
				_putchar(32);
				_putchar(k % 10 + '0');
			}
			if (j != 9)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
			j++;
		}
		_putchar(10);
	}
}
