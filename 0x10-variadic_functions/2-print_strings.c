#include "variadic_functions.h"

/**
 * print_strings - funtions that print string
 *
 * @separator: character that separate the strings
 * @n: number of string
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *arg;

	if (!separator || n == 0)
	{
		goto error;
	}

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		for (arg = va_arg(ap, char *); *arg; arg++)
		{
			printf("%c", *arg);
		}
		if (i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
error:
	return;

}
