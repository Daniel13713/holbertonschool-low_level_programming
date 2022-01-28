#include "hash_tables.h"

/**
 * *add_nodeint - create a new node
 *
 * @h: pointer to pointer the struct
 * @key: key of node
 * @value: value to add
 * Return: new node in the beginning
 */

hash_node_t *add_nodeint(hash_node_t **h, const char *key, const char *value)
{
	hash_node_t *node = NULL;

	node = malloc(sizeof(hash_node_t));
	if (!node)
	{
		return (NULL);
	}
	node->next = *h;
	node->key = strdup(key);
	node->value = strdup(value);
	*h = node;
	return (node);
}

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

	node = malloc(sizeof(hash_node_t));
	if (!node)
	{
		free(node);
		return (NULL);
	}

	/*Copy value and key in node*/
	node->key = strdup(key);
	node->value = strdup(value);

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
	hash_node_t *arg_array = NULL, *list = NULL;

	if (key == NULL || key[0] == '\0' || value == NULL)
		return (0);
	/* Obtain index from key_index*/
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
	while (arg_array)
	{
		if (strcmp(arg_array->key, key) == 0)
		{
			/*add the value*/
			if (value == NULL)
			{
				return (0);
			}
			arg_array->value = strdup(value);
			return (1);
		}
		arg_array = arg_array->next;
	}
	/*There are a collision, so add to begining*/
	list = ht->array[index];
	ht->array[index] = add_nodeint(&list, key, value);
	if (list == NULL)
		return (0);
	return (1);
}
