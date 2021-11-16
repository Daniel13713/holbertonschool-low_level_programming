#include "lists.h"

/**
 * free_listint2 - free all list
 *
 * @head: pointer to struct
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	if (*head == NULL)
	{
		return;
	}

	if ((*head) != NULL)
	{
		free_listint2(&((*head)->next));
		free(*head);
	}
	*head = NULL;
}
