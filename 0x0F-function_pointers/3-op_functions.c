#include "3-calc.h"

/**
 * op_add - module a+b
 *
 * @a: number 1
 * @b: number 2
 * Return: Sum a+b
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - module a - b
 *
 * @a: number 1
 * @b: number 2
 * Return: rest a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplicate a * b
 *
 * @a: number 1
 * @b: number 2
 * Return: Multiplicate a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide a / b
 *
 * @a: number 1
 * @b: number 2
 * Return: divide a / b
 */
int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - module a%b
 *
 * @a: number 1
 * @b: number 2
 * Return: Module a%b
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
