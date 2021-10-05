#include "main.h"

/**
 * print_times_table - prints the table of number 9
 *
 * @n: number integer
 * return: number of the table
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			j = 0;
			while (j <= n)
			{
				k = j * i;
				if (n < 15)
				{
					if (k < 10 && k > 0)
					{
						printf("   ");
					}
					else if (k == 0 && j != 0)
					{
						printf("   ");
					}
					else if (k < 100 && k >= 10)
					{
						printf("  ");
					}
					else if (k >= 100)
					{
						printf(" ");
					}
					printf("%d", k);
					if (j != n)
					{
						printf(",");
					}
				}
				j++;
			}
			printf("\n");
		}
	}
}
