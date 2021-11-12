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
 * add_node_end - add a new node to the end
 *
 * @head: pointer to pointer of structure
 * @str: string
 * Return: pointer to structure (pointer) or null if fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL;
	list_t *last = NULL;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->next = NULL;
	new->len = _strlen(new->str);

	if (!*head)
	{
		*head = new;
	}
	else
	{
		last = malloc(sizeof(list_t));
		if (!last)
		{
			return (NULL);
		}
		last = *head;
		while (last->next)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (*head);
}
