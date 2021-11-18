#include "lists.h"

/**
 * free_listint2 - free all list
 *
 * @head: pointer to struct
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *current = NULL;
	listint_t *next_free = NULL;

	if (head == NULL)
	{
		return;
	}
	current = *head;
	printf("%d\n", head->n);
	while (current)
	{
		next_free = current;
		current = current->next;
		free(next_free);
	}
	*head = NULL;
}
