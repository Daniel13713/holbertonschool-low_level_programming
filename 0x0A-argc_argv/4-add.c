#include "main.h"
#include <stdlib.h>
/**
 * main - prints the sum of two integers
 *
 * @argc: number of atributes on command line
 * @argv: array of string of the command line
 * Return: always (0) succes
 */

int main(int argc, char *argv[])
{

	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) + atoi(argv[2]));
		return (0);
	}
	else if (argc == 1)
	{
		printf("%d", 0);
		return (0);
	}
	printf("Error\n");
	return (1);
}
