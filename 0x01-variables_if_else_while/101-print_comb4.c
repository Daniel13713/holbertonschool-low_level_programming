#include <stdio.h>

/**
 * main - function that print combination of numbers
 *
 * Return: Always (0) success
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 48; a <= 57; a++)
	{
		for (b = a + 1; b <= 57; b++)
		{
			for (c = b + 1; b <= 57; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != 55 || b != 56 || c != 57)
				{
					putchar(44);  
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
