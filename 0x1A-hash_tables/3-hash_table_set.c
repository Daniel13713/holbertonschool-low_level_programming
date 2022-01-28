#include "hash_tables.h"

/**
 * *add_key_value - allocate and copu value and key
 *
 * @key: key ht
 * @value: value ht
 * Return: hash_node_t*
 */
hash_node_t *add_key_value(const char *key, const char *value)
{
	/*Allocate node*/
	hash_node_t *node = NULL;

	node = malloc(sizeof(hash_node_t) * 1);
	if (!node)
	{
		free(node);
		return (NULL);
	}
	/*Allocate key and value*/
	node->key = malloc(strlen(key) + 1);
	if (!key)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->value = malloc(strlen(value) + 1);
	if (!value)
	{
		free(node->value);
		free(node->key);
		free(node);
		return (NULL);
	}

	/*Copy value and key in node*/
	strcpy(node->key, key);
	strcpy(node->value, value);

	/*next node start in null*/
	node->next = NULL;

	return (node);
}

/**
 * hash_table_set - function that adds an element to the hash table
 *
 * @ht: hash table
 * @key: key of the hash table
 * @value: element to add
 * Return: 1 for suceeded, o otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *arg_array = NULL, *prev_arg = NULL;

	/* Obtain index from djb2*/
	index = key_index((unsigned char *)key, ht->size);

	/*try to look*/
	arg_array = ht->array[index];
	/* insert if arg_array is null*/
	if (arg_array == NULL)
	{
		ht->array[index] = add_key_value(key, value);
		return (1);
	}

	/*Search with the key in the hash tabe*/
	while (arg_array != NULL)
	{
		if (strcmp(arg_array->key, key) == 0)
		{
			/*add the value*/
			free(arg_array->value);
			arg_array->value = malloc(strlen(value) + 1);
			strcpy(arg_array->value, value);
			return (1);
		}

		prev_arg = arg_array;
		arg_array = prev_arg->next;
	}

	/*If doesn't match with the key passed, add new*/
	prev_arg->next = add_key_value(key, value);
	if (!prev_arg->next)
	{
		return (0);
	}
	return (1);
}
