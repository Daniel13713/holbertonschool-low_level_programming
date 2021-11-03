 #include "function_pointers.h"

/**
 * array_iterator - execute a pointer to funtions with array
 *
 * @array: integers to print
 * @size: size of array
 * @action: pointer to funtions that print
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!array || !action)
	{
		goto error;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
error:
	return;
}
