#include "variadic_functions.h"

/**
 * print_numbers - funtions that print any count of numbers
 *
 * @separator: character that separate the numbers
 * @n: count of numbers
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pointer;
	unsigned int i;

	va_start(pointer, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pointer, int));
		if (i < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(pointer);
}
