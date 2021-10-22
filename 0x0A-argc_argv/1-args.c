#include "main.h"

/**
 * main - print the number of argumments on the command line
 *
 * @argc: number of arguments
 * @argv: array of string passed
 * Return: always (0) success
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
