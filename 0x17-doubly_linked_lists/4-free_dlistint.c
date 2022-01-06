#include "lists.h"

/**
 * free_dlistint - free double linked list
 *
 * @head: double linked list
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL, *next_node = NULL;

	current = head;
	while (current)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
