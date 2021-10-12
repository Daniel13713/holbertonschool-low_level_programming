#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: Address o pointer of number a
 * @b: Address o pointer of number b
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

