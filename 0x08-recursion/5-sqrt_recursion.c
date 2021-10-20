#include "main.h"

/**
 * xr - auxiliar function
 *
 * @n: numerb integer
 * @i: square root
 * Return: square root of n
 */

int xr(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i > n / 2)
	{
		return (-1);
	}
	return (xr(n, i + 1));
}


/**
 * _sqrt_recursion - calculate square root
 *
 * @n: Number integer
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (xr(n, 2));
	}
}

