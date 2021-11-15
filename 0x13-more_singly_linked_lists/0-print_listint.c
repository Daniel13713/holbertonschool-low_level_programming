#include "lists.h"

/**
 * print_listint- print all content of list_t
 *
 * @h: pointer to the first struct
 * Return: length of list_t
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
