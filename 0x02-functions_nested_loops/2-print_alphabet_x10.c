#include "main.h"

/**
 * print_alphabet_x10 - Print in 10 lines the alphabet in lowercase
 *
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar(10);
	}
}
