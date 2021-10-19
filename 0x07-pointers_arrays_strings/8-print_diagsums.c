#include "main.h"

/**
 * print_diagsums - prints the value of the two diagonal
 * of matriz size*size
 *
 * @a: Matrix
 * @size: Size of array a
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int d1 = 0, d2 = 0, m = 0;

	m = a[(size * size) / 2];
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				d1 += *a;
			}
			else if (i + j == size - 1)
			{
				d2 += *a;
			}
			a++;
		}
	}
	if (size % 2 != 0)
	{
		d2 += m;
	}
	printf("%d, %d\n", d1, d2);
}
