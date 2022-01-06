#include "lists.h"

/**
 * sum_dlistint - sum all number of the list
 *
 * @head: double linked list
 * Return: sum of integers
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = NULL;

	if (head)
	{
		temp = head;
		while (temp)
		{
			sum += temp->n;
			temp = temp->next;
		}
	}
	return (sum);
}
