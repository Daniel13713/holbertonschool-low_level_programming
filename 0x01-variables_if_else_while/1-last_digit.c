#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - find and pirnt the last one digit of a random number and clasificate
 *
 * Return: Always (0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	unsigned int lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("Last digit of %d is %u and is greater than 5\n", n, lastDigit);
	}
	else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("Last digit of %d is %u and is less than 6 and not 0\n", n, lastDigit);
	}
	else
	{
		printf("Last digit of %d id and is 0\n", n);
	}
	return (0);
}
