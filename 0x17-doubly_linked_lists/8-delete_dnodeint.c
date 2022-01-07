#include "lists.h"
/**
 * deleteBeginning - delete a node
 *
 * @head: double linked list
 * Return: new linked list
 */
void deleteBeginning(dlistint_t **head)
{
	dlistint_t *toDelete = NULL, *h = NULL;

	if (head && *head)
	{
		h = *head;
		*head = h->next;
		toDelete = h;
		if (h != NULL)
		{
			h->prev = NULL;
		}
		free(toDelete);
		toDelete = NULL;
	}
}
/**
 * deleteEnd - delete a node
 *
 * @head: double linked list
 * Return: new linked list
 */
void deleteEnd(dlistint_t **head)
{
	dlistint_t *toDelete = NULL, *h = NULL;

	if (head && *head)
	{
		h = *head;
		while (h)
		{
			h = h->next;
			if (h != NULL)
			{
				h->prev = NULL;
			}
		}
		toDelete = h;
		free(toDelete);
		toDelete = NULL;
	}
}

/**
 * delete_dnodeint_at_index - delete a node
 *
 * @head: double linked list
 * @index: index
 * Return: new linked list
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = NULL;

	if (head && *head)
	{
		if (index == 0)
		{
			deleteBeginning(head);
			return (1);
		}
		current = *head;
		for (i = 1; current != NULL; i++)
		{
			if (i == index)
			{
				if (current->next == NULL)
				{
					deleteEnd(head);
					return (1);
				}
				else
				{
					if (current != NULL)
					{
						current->prev->next = current->next;
						current->next->prev = current->prev;

						free(current);
						current = NULL;
						return (1);
					}
				}
			}
			current = current->next;
		}
	}
	return (-1);
}
