#include "lists.h"

/**
 * _strlen - return the length of a string
 *
 * @s: pointer to string
 * Return: Length of a string
 */

unsigned int _strlen(char *s)
{
	unsigned int i;

	if (s == NULL)
	{
		return (0);
	}
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - create a new node
 *
 * @head: pointer to pointer the struct
 * @str: string to the structure
 * Return: length of list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;
	printf("%ld", sizeof(list_t));
	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->next = *head;
	new->len = _strlen(new->str);
	*head = new;
	return (*head);
}

