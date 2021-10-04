#include "main.h"

/**
 * main - print the alphabeth in lowercase
 *
 * Return: Always (0) Success
 */
int main(void)
{
	char *text = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	putchar(10);
	return (0);
}
