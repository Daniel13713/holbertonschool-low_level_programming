#include "main.h"

/**
 * reverse_array - Reverse an array of integers
 *
 * @a: array
 * @n: number of elements of a
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp[100];

	for (i = n - 1; i >= 0; --i)
	{
		tmp[n - i - 1] =  a[i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = tmp[i];
	}
}
