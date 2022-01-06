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
	dlistint_t *new = NULL, *temp = NULL;

	if (head)
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
		{
			free(new);
			return (NULL);
		}
		temp = *head;
		new->prev = NULL;
		new->next = temp;
		new->n = n;
		if (new->next)
		{
			temp->prev = new;
		}
		*head = new;
	}
	return (new);
}
