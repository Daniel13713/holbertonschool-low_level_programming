#include "lists.h"

/**
 * *add_dnodeint_end - add a new node in the end of the list
 *
 * @head: double linked list
 * @n: integer to add
 * Return: new linked list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
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

		new->n = n;
		new->next = NULL;
		if (!*head)
		{
			*head = new;
			(*head)->prev = NULL;
			return (new);
		}
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
		new->prev = temp;

		temp = new;
	}
	return (new);
}
