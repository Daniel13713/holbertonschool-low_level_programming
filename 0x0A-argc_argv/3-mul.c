#include "main.h"
#include <stdlib.h>
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
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	printf("Error");
	return (1);
}
