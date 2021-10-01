#include <stdio.h>

/**
 * main - Function tha print to alphabet
 *
 * Return: Always (0) sucess
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
