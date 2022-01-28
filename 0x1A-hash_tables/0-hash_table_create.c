#include "hash_tables.h"

/**
 * *hash_table_create - create a hash table
 *
 * @size: size of the array
 * Return: Hash table, struct hash_table_s
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = NULL;
	unsigned long int i = 0;

	/* Allocate hash table*/
	hashtable = malloc(sizeof(hash_table_t) * 1);
	if (!hashtable)
	{
		free(hashtable);
		return (NULL);
	}

	/* allocate array */
	hashtable->array = malloc(sizeof(hash_node_t *) * size);
	if (!hashtable->array)
	{
		free(hashtable->array);
		free(hashtable);
		return (NULL);
	}

	/*Null to each argument of array for (i = 0; i < size; i++)*/
	{
		hashtable->array[i] = NULL;
	}
	return (hashtable);
}
