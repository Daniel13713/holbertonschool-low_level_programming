#include "main.h"

/**
 * main - multiplicate two strings, print number or error
 *
 * @argv: arguments passed
 * @argc: number of arguments
 * Return: Integer succes (0), (98) if fail
 */

int main(int argc, char *argv[])
{
	int *mul = NULL, num1 = 0, num2 = 0;

	if (argc != 3)
	{
		goto error;
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("n1 = %d\n n2 = %d\n", num1, num2);
	mul = malloc(sizeof(num1) + sizeof(num2));
	*mul = num1 * num2;
	printf("%d\n", *mul);
	free(mul);
	return (0);
error:
	printf("Error\n");
	return (98);
}
