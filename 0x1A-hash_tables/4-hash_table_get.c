#include "hash_tables.h"

/**
 * *hash_table_get - function that retrieves a value associated with a key
 *
 * @ht: hash table
 * @key: key
 * Return: value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *arg_array = NULL;
	char *value = NULL;

	/*Obtain the index*/
	index = key_index((unsigned char *)key, ht->size);

	/*obtain the value form array*/
	arg_array = ht->array[index];
	if (arg_array == NULL)
	{
		return (NULL);
	}
	value = arg_array->value;
	return (value);
}
