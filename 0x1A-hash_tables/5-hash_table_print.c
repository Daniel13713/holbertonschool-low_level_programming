#include "hash_tables.h"

/**
 * hash_table_print - print the hash table
 *
 * @ht: hash table
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *arg_array = NULL;
	unsigned long int i = 0, j = 0;

	if (!ht)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		arg_array = ht->array[i];
		if (arg_array != NULL)
		{
			while (arg_array)
			{
				if (j != 0)
				{
					printf(", ");
				}
				printf("'%s': '%s'", arg_array->key, arg_array->value);
				arg_array = arg_array->next;
				j = 1;
			}
		}
	}
	printf("}\n");
}
