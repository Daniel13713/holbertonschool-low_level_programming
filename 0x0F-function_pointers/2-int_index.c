#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 *
 * @array: array of integers
 * @size:  the number of elements in the array array
 * @cmp: is a pointer to the function to be used to compare values
 * Return:
 * 1)  the index of the first element for which the cmp
 * function does not return 0
 * 2) If no element matches, return -1
 * 3) If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || !cmp || (size < 0))
	{
		goto error;
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	goto error;
error:
	return (-1);
}
