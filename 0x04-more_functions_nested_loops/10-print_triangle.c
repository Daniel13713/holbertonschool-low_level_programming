#include "main.h"

/**
 * print_triangle - print a triangle on the terminal
 *
 * @size: Size of the triangle
 * Return: Nothing
 */

void print_triangle(int size)
{
	int i, j, k, limit;

	if (size > 0)
	{
		limit = size - 1;
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < limit; j++)
			{
				_putchar(32);
			}
			for (k = 0; k < i; k++)
			{
				_putchar(35);
			}
			_putchar(10);
			limit = limit - 1;
		}

	}
	else
	{
		_putchar(10);
	}

}
