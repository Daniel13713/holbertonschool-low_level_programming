#include "lists.h"

/**
 * pop_listint - delete the first element of the list
 *
 * @head: pointer to struct
 * Return: Nothing
 */

int pop_listint(listint_t **head)
{
	int temp = 0;
	listint_t *delete;
	listint_t *next_node;

	if (!head)
	{
		return (0);
	}
	delete = *head;
	temp = (delete)->n;
	next_node = delete->next;
	free(delete);
	delete = NULL;
	*head = next_node;
	return (temp);
}
