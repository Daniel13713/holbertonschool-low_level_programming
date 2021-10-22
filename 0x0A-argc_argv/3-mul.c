#include "main.h"

/**
 * toInt - convert a string in an intenger
 *
 * @s: string
 * Return: Integer
 */

int toInt(char s[])
{
	int i, sing, set, n;

	if (s[0] == '-')
	{
		sing = -1;
	}
	if (sing == -1)
	{
		set = 1;
	}
	else
	{
		set = 0;
	}
	n = 0;
	for (i = set; s[i] != '\0'; i++)
	{
		n = n * 10 + s[i] - '0';
	}
	if (sing == -1)
	{
		n = -n;
	}
	return (n);
}

/**
 * main - prints the multiplication of two integers
 *
 * @argc: number of atributes on command line
 * @argv: array of string of the command line
 * Return: always (0) succes
 */

int main(int argc, char *argv[])
{

	if (argc == 3)
	{
		printf("%d\n", toInt(argv[1]) * toInt(argv[2]));
		return (0);
	}
	printf("Error");
	return (1);
}
