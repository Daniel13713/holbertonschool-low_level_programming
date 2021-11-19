#include "main.h"

/**
 * flip_bits - count the number of bits necesary to change a number to another
 *
 * @n: first decimal number
 * @m: second decimal number
 * Return: number of bits necesary to change
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned int i = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
		{
			i++;
		}
		n >>= 1;
		m >>= 1;

	}
	return (i);


}
