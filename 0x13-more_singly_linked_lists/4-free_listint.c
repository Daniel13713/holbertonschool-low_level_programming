#include "lists.h"

/**
 * free_listint - free all list
 *
 * @head: pointer to struct
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next_free;

	while (current)
	{
		next_free = current->next;
		free(current);
		current = next_free;
	}
}
