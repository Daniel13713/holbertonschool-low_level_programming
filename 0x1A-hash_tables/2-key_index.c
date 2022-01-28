#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 *
 * @key: key of the hash table
 * @size: size of the array
 * Return: Index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	if (size != 0)
	{
		index = hash_djb2((unsigned char *)key) % size;
	}
	return (index);
}
