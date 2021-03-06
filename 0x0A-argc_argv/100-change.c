#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <limits.h>


/**
 * count - count how many coins are necesary
 *
 * @n: value
 * @coins: coins to change the value
 * @nu: number of coins
 * @i: counter
 * Return: Integer
 */

int count(int n, int coins[], int nu, int i)
{
	int res;

	res = n % coins[i];
	if (res == 0)
	{
		return (nu + (n / coins[i]));
	}
	else if (res != 0)
	{
		return (count(res, coins, nu +
					((n - res) / coins[i]), i + 1));
	}
	else if (n <= 0)
	{
		return (nu);
	}
	return (0);
}

/**
 * main - prints the minimum number of coins to make
 * change for an amount of money
 *
 * @argc: number of arguments
 * @argv: arguments passed
 * Return: Number of coins necesary (integer)
 */

int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};
	int num;

	if (argc == 2)
	{
		if (atoi(argv[1]) <= 0)
		{
			printf("%d\n", 0);
			return (0);
		}
		num = count(atoi(argv[1]), coins, 0, 0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", num);
	return (0);
}
