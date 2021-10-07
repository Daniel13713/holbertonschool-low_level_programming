#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - random number clasificate
 *
 * Return: Always (0)
 */
int positive_or_negative(int n)
{

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
