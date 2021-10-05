#include "main.h"

/**
 * _abs - computes the absolute values of an integer
 *
 * @n: integer
 * Return: Always (0) success
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
