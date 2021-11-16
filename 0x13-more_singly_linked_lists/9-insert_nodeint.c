#include "lists.h"

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
	listint_t *new, *current;

	if (head)
	{
		new = malloc(sizeof(listint_t));
		if (!new)
		{
			free(new);
			return (NULL);
		}
		new->n = n;
		new->next = NULL;
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (new);
		}
		current = *head;
		for (i = 0; i < idx - 1; i++)
		{
			current = current->next;
			if (!current)
			{
				free(new);
				return (NULL);
			}

		}
		new->next = current->next;
		current->next = new;
		return (new);
	}
	return (NULL);


}
