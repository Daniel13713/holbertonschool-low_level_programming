#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 *
 * @ht: hash table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *arg_array = NULL, *current = NULL;

	for (index = 0; index < ht->size; index++)
	{
		arg_array = ht->array[index];
		while (arg_array)
		{
			current = arg_array->next;
			free(arg_array->key);
			free(arg_array->value);
			free(arg_array);
			arg_array = current;
		}
	}
	free(ht->array);
	free(ht);
}
