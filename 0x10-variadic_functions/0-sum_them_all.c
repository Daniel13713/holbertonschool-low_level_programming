#include "variadic_functions.h"

/**
 * sum_them_all - sum any count of number (typy: unsigned int)
 *
 * @n: numbers of integers to sum
 * Return: Sum of numbers, or (0) if fail
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list pointer;
	unsigned int i, func;

	if (!n)
	{
		goto error;
	}
	va_start(pointer, n);

	func = 0;
	for (i = 0; i < n; i++)
	{
		func += va_arg(pointer, int);
	}
	va_end(pointer);
	return (func);
error:
	return (0);
}
