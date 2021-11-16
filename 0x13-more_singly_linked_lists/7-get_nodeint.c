#include "lists.h"

/**
 * listint_len2 - print lenthg of listint_t
 *
 * @h: pointer to the first struct
 * Return: length of list_t
 */

unsigned int listint_len2(const listint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}

/**
 * *get_nodeint_at_index - return the nth node of linked list
 *
 * @head: pointer to struct
 * @index: position of element of the list
 * Return: Nothing
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	unsigned int len = listint_len2(head);

	if (!head || index >= len)
	{
		return (NULL);
	}
	for (i = 0; i < index; i++)
	{
		head = head->next;
	}
	return (head);
}
