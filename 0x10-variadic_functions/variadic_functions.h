#ifndef VARIADIC_FUNTIONS_H
#define VARIADIC_FUNTIONS_H
#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/*Structures*/

/**
 * struct arg - structure of format
 *
 * @fort: format for each date
 * @f: The function to print
 */
typedef struct arg
{
	char *fort;
	void (*f)(va_list);
} arg_t;

#endif
