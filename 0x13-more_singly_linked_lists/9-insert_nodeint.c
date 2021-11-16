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
 * *insert_nodeint_at_index - insert a new node in idx position
 *
 * @head: pointer to struct
 * @idx: position where of element will be add in the list
 * @n: number integer to add
 * Return: Nothing
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	unsigned int len = listint_len2(*head);
	listint_t *new, *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}

	if (!head || idx > len)
	{
		free(new);
		return (NULL);
	}
	if (idx == 0)
	{
		new->next = *head;
		new->n = n;
		*head = new;
		return (*head);
	}
	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
	}
	new->n = n;
	new->next = temp->next;
	temp->next = new;
	return (*head);
}
