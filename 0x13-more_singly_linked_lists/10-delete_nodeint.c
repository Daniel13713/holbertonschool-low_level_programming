#include "lists.h"

/**
 * pop_listint2 - delete the first element of the list
 *
 * @head: pointer to struct
 * Return: Nothing
 */

void pop_listint2(listint_t **head)
{
	listint_t *delete = NULL;
	listint_t *next_node = NULL;

	if (*head == NULL)
	{
		return;
	}
	delete = *head;
	next_node = delete->next;
	free(delete);
	delete = NULL;
	*head = next_node;
}
/**
 * delete_nodeint_at_index - delete the nth element of the list
 *
 * @head: pointer to struct
 * @index: index
 * Return: (1) fot succes, (-1) fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *delete = NULL;
	listint_t *prev_del = NULL;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		pop_listint2(head);
		return (1);
	}
	delete = *head;
	while (i < index - 1)
	{
		delete = delete->next;
		if (!delete)
		{
			return (-1);
		}
		i++;
	}
	prev_del = delete;
	delete = delete->next;
	prev_del->next = delete->next;
	delete->next = NULL;
	free(delete);
	delete = NULL;

	return (1);
}
