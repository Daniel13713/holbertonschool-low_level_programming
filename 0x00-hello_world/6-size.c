#include <stdio.h>

/**
 * main - print the sizes of types
 *
 * Return: Alwayrs 0 (Sucess)
 */
int main(void)
{
	char cT;
	int iT;
	long int liT;
	long long int lliT;
	float fT;

	/*Sizeof of typs */
	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(cT));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(iT));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(liT));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(lliT));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(fT));
	return (0);
}
