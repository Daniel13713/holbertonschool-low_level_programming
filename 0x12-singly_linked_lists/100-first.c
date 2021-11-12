#include <stdio.h>
/**
 * print_firts - printf first that main function
 *
 * Return: Nothing
 */
void print_firts(void) __attribute__ ((constructor));
/**
 * print_firts - printf first that main function
 *
 * Return: Nothing
 */
void print_firts(void)
{
	char *one = "You're beat! and yet, you must allow,";
	char *two = "\nI bore my house upon my back!\n";

	printf("%s%s", one, two);
}

