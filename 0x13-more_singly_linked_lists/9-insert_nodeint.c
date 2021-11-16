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
	listint_t *new, *current, *temp;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	if (*head == NULL || head == NULL)
	{
		if (idx != 0)
		{
			return (NULL);
		}
		else
		{
			free(new);
			new->n = n;
			*head = new;
			return (*head);
		}
	}
	if (idx == 0 && (*head != NULL || head != NULL))
	{
		new->next = *head;
		new->n = n;
		*head = new;
		return (*head);
	}
	temp = *head;
	for (i = 0; i < idx || temp == NULL; i++)
	{
		current = temp;
		temp = temp->next;
	}
	new->next = temp;
	new->n = n;
	current->next = new;
	return (*head);
}
