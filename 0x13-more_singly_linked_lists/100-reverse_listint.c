#include "lists.h"

/**
 * *reverse_listint - reverse a linked list
 *
 * @head: pointer to struct
 * Return:a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *current_node = NULL;

	if (*head == NULL)
	{
		return (NULL);
	}
	prev_node = *head;
	*head = (*head)->next;
	current_node = *head;
	prev_node->next = NULL;
	while (*head)
	{
		*head = (*head)->next;
		current_node->next = prev_node;
		prev_node = current_node;
		current_node = *head;
	}
	*head = prev_node;
	return (prev_node);
}
