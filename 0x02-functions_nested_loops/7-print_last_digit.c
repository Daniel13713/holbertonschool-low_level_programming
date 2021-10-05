#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @n: number
 *
 * Return: The last digit
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	if (lastDigit < 0)
	{
		lastDigit =  -1 * lastDigit;
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
	else
	{
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
}
