#include "main.h"

/**
 * recx - recursion to calculate is_prime_number
 *
 * @n: number integer
 * @i: counter
 * Return: 0 or 1
 *
 */

int recx(int n, int i)
{
	if (n % i == 0 && n != i)
	{
		return (0);
	}
	else if (n == i)
	{
		return (1);
	}
	return (recx(n, i + 1));
}


/**
 * is_prime_number - look if a number is prime
 *
 * @n: number integer
 * Return: (0) if in not prime and (1) if is prime
 */

int is_prime_number(int n)
{
	if (n == 1 || n == 0 || n == -1)
	{
		return (0);
	}
	else if (n > 1)
	{
		return (recx(n, 2));
	}
	if (n < -1)
	{
		return (0);
	}
	return (0);
}
