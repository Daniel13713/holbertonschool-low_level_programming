#include <stdio.h>

/**
 * main - change number for characteres
 *
 * Return: Always (0) success
 */

int main(void)
{
	int i, limit;

	limit = 100;
	for (i = 1; i <= limit; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			if (i == limit - 1)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
