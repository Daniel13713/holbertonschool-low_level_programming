#include "main.h"

/**
 * get_bit - calculte the value a bit a given index
 *
 * @n: decimal number
 * @index: position
 * Return: Value of a bit in index
 */


int get_bit(unsigned long int n, unsigned int index)
{
	n >>= index;
	return (n & 1);
}
