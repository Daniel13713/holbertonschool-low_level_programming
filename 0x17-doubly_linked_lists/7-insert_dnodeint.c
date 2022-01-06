#include "lists.h"
/**
 * error_if - aux function
 *
 * @p: pointer
 * Return: int
 */
int error_if(dlistint_t *p)
{
	if (!p)
	{
		free(p);
		return (0);
	}
	return (1);
}

/**
 * *insert_dnodeint_at_index - sum all number of the list
 *
 * @h: double linked list
 * @idx: index
 * @n: number to add
 * Return: new linked list
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new = NULL, *current = NULL, *next_node = NULL;

	if (h)
	{
		new = malloc(sizeof(dlistint_t));
		if (!error_if(new))
			return (NULL);
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		if (idx == 0)
		{
			new->next = *h;
			if (new->next)
				(*h)->prev = new;
			*h = new;
			return (new);
		}
		current = *h;
		for (i = 0; i < idx - 1; i++)
		{
			current = current->next;
			if (!current)
			{
				free(new);
				return (NULL);
			}
		}
		next_node = current->next;
		new->next = current->next;
		new->prev = current;
		current->next = new;
		next_node->prev = new;
		new = new->next;
		return (new);
	}
	return (NULL);
}
