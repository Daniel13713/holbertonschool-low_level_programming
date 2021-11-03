#include "function_pointers.h"

/**
 * print_name - use pointer to function f witn argument name
 *
 * @name: argument, name of a person
 * @f: funtion to pointer
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name)
	{
		return;
	}
	f(name);
}
