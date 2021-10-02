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
		for (i = 49; i <= 57; i++)
		{
			if (i != n)
			{	
				putchar(n);
				putchar(i);
				putchar(44);	
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
