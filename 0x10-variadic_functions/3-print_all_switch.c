#include "variadic_functions.h"

/**
 * print_all - print anything
 *
 * @format: arguments passed
 * Return: Nothing
 */


void print_all(const char * const format, ...)
{
	int i = 0;
	char *string = NULL;
	char *s = "";

	va_list ap;

	va_start(ap, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", s, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(ap, double));
					break;
				case 's':
					string = va_arg(ap, char *);
					if (!string)
					{
						string = "(nil)";
					}
					printf("%s%s", s, string);
					break;
				default:
					i++;
					continue;
			}
			s = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(ap);
}
