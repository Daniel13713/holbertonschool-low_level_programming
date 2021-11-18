#include "main.h"

/**
 *
 *
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_num = 0;
	unsigned int i = 0;

	if (!b)
	{
		return (0);
	}
	while (b[i] == '\0')
	{
		if (b[i] == '1')
		{
			dec_num += 2**i;	
		}
		if (b[i] != '0' || b[i] != '1')
		{
			return (0);
		}
		i++;
	}
	return (dec_num);
}
