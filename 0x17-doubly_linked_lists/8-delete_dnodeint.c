#include "lists.h"
/**
 * deleteBeginning - delete a node
 *
 * @head: double linked list
 * Return: new linked list
 */
void deleteBeginning(dlistint_t **head)
{
	dlistint_t *toDelete = NULL;

	if (head && *head)
	{
		toDelete = *head;
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
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
	dlistint_t *toDelete = NULL;

	if (head && *head)
	{
		while (*head)
		{
			*head = (*head)->next;
			if (*head != NULL)
			{
				toDelete = *head;
				(*head)->prev = NULL;
			}
		}
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
	dlistint_t *toDelete = NULL;

	if (head && *head)
	{
		if (index == 0)
		{
			deleteBeginning(head);
			return (1);
		}
		for (i = 0; *head != NULL; i++)
		{
			if (i == index)
			{
				if ((*head)->next == NULL)
				{
					deleteEnd(head);
					return (1);
				}
				else
				{
					if (*head != NULL)
					{
						toDelete = *head;
						(*head)->prev->next = (*head)->next;
						(*head)->next->prev = (*head)->prev;

						free(toDelete);
						toDelete = NULL;
						return (1);
					}
				}
			}
			(*head) = (*head)->next;
		}
	}
	return (-1);
}
