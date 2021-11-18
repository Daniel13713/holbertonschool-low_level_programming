#include "lists.h"

/**
 * add_nodeint - create a new node
 *
 * @head: pointer to pointer the struct
 * @n: integer to the structure
 * Return: length of list_t
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->next = *head;
	new->n = n;
	*head = new;
	return (new);
}

