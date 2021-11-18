#include "main.h"

/**
 * binary_to_uint - functions that convert a binary number to decimal
 *
 * @b: binary number
 * Return: Decimal number or (0) if fail
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_num = 0;

	if (!b)
	{
		goto error;
	}
	while (*b)
	{
		if (*b != '1' && *b != '0')
		{
			goto error;
		}

		dec_num <<= 1;

		if (*b == '1')
		{
			dec_num |= 1;
		}
		b++;
	}
	return (dec_num);
error:
	return (0);
}
