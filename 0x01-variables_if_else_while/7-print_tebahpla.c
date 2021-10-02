#include <stdio.h>

/**
 * main - Function tha print to alphabet
 *
 * Return: Always (0) sucess
 */
int main(void)
{
	int alph;

	for (alph = 122; alph >= 97; --alph)
	{
		putchar(alph);
	}
	putchar(10);
	return (0);
}
