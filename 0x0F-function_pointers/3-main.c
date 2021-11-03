#include "3-calc.h"

/**
 * main - execute the program to operate two number
 *
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 for succes, exits for fail
 */

int main(int argc, char *argv[])
{
	int (*calc)(int, int), num1 = 0, num2 = 0;
	char *operator;

	if (argc == 4)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		operator = argv[2];
		if (*(operator + 1))
		{
			printf("Error\n");
			exit(99);
		}

		calc = get_op_func(operator);
		if (!calc)
		{
			printf("Error\n");
			exit(99);
		}
		printf("%d\n", calc(num1, num2));
		return (0);
	}
	printf("Error\n");
	exit(98);
}
