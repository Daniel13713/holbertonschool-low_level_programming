#include "main.h"

/**
 * main - print all argumments on the command line
 *
 * @argc: number of arguments
 * @argv: array of string passed
 * Return: always (0) success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
