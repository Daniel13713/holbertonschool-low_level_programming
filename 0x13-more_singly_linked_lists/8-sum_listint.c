#include "lists.h"

/**
 * sum_listint - sum all data integers of linked list
 *
 * @head: pointer to struct
 * Return: Nothing
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (0);
	}
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
