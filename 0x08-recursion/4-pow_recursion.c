#include "main.h"

/**
 * _pow_recursion - calculate the pow y of x
 *
 * @x: number to calculate the power
 * @y: power
 * Return: Result of x**y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
