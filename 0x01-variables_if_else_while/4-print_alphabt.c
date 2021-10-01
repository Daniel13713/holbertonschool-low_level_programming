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
		if (l != 101 && l != 113)
		{
			putchar(l);
		}
	}
	putchar(10);
	return (0);
}
