#include "lists.h"

/**
 * free_listint2 - free all list
 *
 * @head: pointer to struct
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next_free;

	if (!*head)
	{
		return;
	}
	current = *head;
	while (current)
	{
		next_free = current->next;
		free(current);
		current = next_free;
	}
	*head = NULL;
}
