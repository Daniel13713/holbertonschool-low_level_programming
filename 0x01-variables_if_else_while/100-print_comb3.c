#include <stdio.h>

/**
 * main - Function tha print to alphabet
 *
 * Return: Always (0) sucess
 */
int main(void)
{
	int n;
	int i;

	for (n = 48; n <= 56; n++)
	{
		for (i = n + 1; i <= 57; i++)
		{
			putchar(n);
			putchar(i);
			if (i != 57 || n != 56)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
