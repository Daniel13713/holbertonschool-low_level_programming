#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints the sum of two integers
 *
 * @argc: number of atributes on command line
 * @argv: array of string of the command line
 * Return: always (0) succes
 */

int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;


	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);

}
