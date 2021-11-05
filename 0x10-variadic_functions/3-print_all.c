#include "variadic_functions.h"


/**
 * func_char - print char
 *
 * @ap: arguments passed
 * Return: Nothing
 */

void func_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}


/**
 * func_int - print int
 *
 * @ap: arguments passed
 * Return: Nothing
 */

void func_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}
/**
 * func_float - print float
 *
 * @ap: arguments passed
 * Return: Nothing
 */

void func_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
/**
 * func_str - print char *
 *
 * @ap: arguments passed
 * Return: Nothing
 */

void func_str(va_list ap)
{
	char *str = va_arg(ap, char *);

	if (!str)
	{
		str = "(nil)";
		return;
	}
	printf("%s", str);
}

/**
 * print_all - print anything
 *
 * @format: arguments passed
 * Return: Nothing
 */


void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *separator = "";
	arg_t types[] = {
		{"c", func_char},
		{"i", func_int},
		{"f", func_float},
		{"s", func_str},
		{NULL, NULL}
	};

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (types[j].fort)
		{
			if (format[i] == *(types[j].fort))
			{
				printf("%s", separator);
				types[j].f(ap);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;

	}
	printf("\n");
	va_end(ap);
}
