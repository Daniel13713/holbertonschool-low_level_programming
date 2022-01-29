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
	unsigned long int i = 0;
	char *keys[1024];
	int j = 0;

	if (!ht || !ht->array || !ht->size)
	{
		printf("{}\n");
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		arg_array = ht->array[i];
		if (arg_array != NULL)
		{
			while (arg_array)
			{
				keys[j] = arg_array->key;
				arg_array = arg_array->next;
				j++;
			}
		}
	}
	j = 0;
	printf("{");
	while (keys[j])
	{
		printf("'%s':'%s'", keys[j], hash_table_get(ht, keys[j]));
		if (j != 1024 && keys[j + 1])
		{
			printf(", ");
		}
		j++;
	}
	printf("}\n");
}
