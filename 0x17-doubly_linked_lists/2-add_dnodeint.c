#include "lists.h"

/**
 * *add_dnodeint - calculate a size of a double linked list
 *
 * @head: double linked list
 * @n: integer to add
 * Return: new linked list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}

	new->prev = NULL;
	new->next = *head;
	new->n = n;
	*head = new;

	return (new);
}
