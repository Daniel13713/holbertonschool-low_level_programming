#include <stdio.h>

/**
 * main - print alphabeth lowercase and uppercase
 *
 * Return: Always (0) sucess
 */

int main(void)
{
	int l;

	for (l = 97; l <= 122; l++)
	{
		putchar(l);
	}
	for (l = 65; l <= 90; l++)
	{
		putchar(l);
	}
	putchar(10);
	return (0);
}
