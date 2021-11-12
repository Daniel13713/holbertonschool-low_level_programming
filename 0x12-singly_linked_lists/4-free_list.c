#include "lists.h"

/**
 * free_list - free all list
 *
 * @head: pointer to struct
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next_free;

	while (current)
	{
		next_free = current->next;
		free(current->str);
		free(current);
		current = next_free;
	}
}
