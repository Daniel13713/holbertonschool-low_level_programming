#include "lists.h"


/**
 * add_nodeint_end2 - add a new node to the end
 *
 * @head: pointer to pointer of structure
 * @n: integer
 * Return: pointer to structure (pointer) or null if fail
 */

listint_t *add_nodeint_end2(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *last = NULL;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->next = NULL;
	new->n = n;

	if (!*head)
	{
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (*head);
}

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

	if (idx == listint_len2(*head))
	{
		add_nodeint_end2(&(*head), n);
		return (*head);
	}
	new = malloc(sizeof(listint_t));
	if (!new || idx > listint_len2(*head))
		goto error;
	if (*head == NULL || head == NULL)
	{
		if (idx != 0)
			goto error;
		new->n = n;
		goto _return;
	}
	if (idx == 0 && (*head != NULL || head != NULL))
	{
		new->next = *head;
		new->n = n;
		goto _return;
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
error:
	free(new);
	return (NULL);
_return:
	*head = new;
	return (*head);
}
