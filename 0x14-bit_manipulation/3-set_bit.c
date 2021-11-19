#include "main.h"
/**
 * _pow_recursion - calculate the pow y of x
 *
 * @x: number to calculate the power
 * @y: power
 * Return: Result of x**y
 */

unsigned int _pow_recursion(unsigned int x, unsigned int y)
{

	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
/**
 * set_bit - change the value a bit to 1 in a given index
 *
 * @n: decimal number
 * @index: position
 * Return: Value of a bit in index
 */


int set_bit(unsigned long int *n, unsigned int index)
{

	unsigned int index_b = _pow_recursion(2, index);

	if (index > 64 || n == NULL)
	{
		return (-1);
	}
	*n |= index_b;
	return (1);

}
