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
 * add_nodeint_end - add a new node to the end
 *
 * @head: pointer to pointer of structure
 * @n: integer
 * Return: pointer to structure (pointer) or null if fail
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *last = NULL;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->next = NULL;
	new->n = n;

	if (!*head)
	{
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (*head);
}
