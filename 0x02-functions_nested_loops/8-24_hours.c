#include "main.h"

/**
 * jack_bauer - Prints every minute od the day
 *
 * Return: Every minute
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					printf("%d%d:%d%d\n", i, j, k, l);
					_putchar(10);
				}
			}
		}
	}
}
