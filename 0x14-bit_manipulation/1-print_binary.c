#include "main.h"

/**
 * print_binary - functions that print a binary number from decimal
 *
 * @n: decimal long int number
 * Return: Binary number or (0) if fail
 */


void print_binary(unsigned long int n)
{
	unsigned long int b = n & 1;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	else if (n == 1)
	{
		putchar('1');
		return;
	}
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	putchar(b + 48);
}
