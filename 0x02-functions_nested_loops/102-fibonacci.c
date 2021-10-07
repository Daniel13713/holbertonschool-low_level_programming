#include <stdio.h>

/**
 * main - Prints number of Fibonacci sucesion below 50
 *
 * Return: Always (0) Success
 */
int main(void)
{
	int i;
	int j[50];
	for (i = 0; i < 50; i++)
	{
		if (i > 1)
		{
			j[i] = j[i - 1] + j[i - 2];
		}
		else if (i == 0)
		{
			j[0] = 1;
		}
		else if (i == 1)
		{
			j[1] = 2;
		}
		printf("%d, ", j[i]);
	}
	return (0);
}
