#include "main.h"

/**
 * print_alphabet - Funtion that print alphabet
 *
 * Return: Always (0) Success
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
