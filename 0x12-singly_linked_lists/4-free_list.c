#include "lists.h"

/**
 * free_list - free all list
 *
 * @head: pointer to struct
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *next_free = NULL;

	if (!head)
	{
		return;
	}
	while (head)
	{
		next_free = head;
		head = head->next;
		free(next_free);
		free(next_free->str);
	}
}
