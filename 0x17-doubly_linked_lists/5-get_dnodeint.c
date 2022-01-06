#include "lists.h"

/**
 * *get_dnodeint_at_index - get a node in a index
 *
 * @head: double linked list
 * @index: index to get
 * Return: node on the index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = NULL, *temp = NULL;
	unsigned int i = 0;

	if (head)
	{
		temp = head;
		for (i = 0; i < index && temp->next != NULL; i++)
		{
			temp = temp->next;
		}
		if (temp && i == index)
		{
			node = temp;
		}
	}
	return (node);
}
