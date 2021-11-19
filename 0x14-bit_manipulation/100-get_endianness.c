#include "main.h"

/**
 * get_endianness - checks if the machine is big endianess or little
 *
 * Return: (1) if littel endiannes, (0) if in big endianess
 */


int get_endianness(void)
{
	unsigned int x = 1;
	char *endi = (char *) &x;

	return ((int) *endi);
}
