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
	dlistint_t *new = NULL, *current = NULL;

	if (h)
	{
		if (idx == 0)
		{
			return (add_dnodeint(h, n));
		}
		current = *h;
		for (i = 1; current != NULL; i++)
		{
			if (i == idx)
			{
				if (current->next == NULL)
				{
					new = add_dnodeint_end(h, n);
				}
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (current != NULL)
					{
						new->n = n;
						new->next = current->next;
						new->prev = current;
						current->next->prev = new;
						current->next = new;
					}
				}
			}
			current = current->next;
		}
	}
	return (new);
}
