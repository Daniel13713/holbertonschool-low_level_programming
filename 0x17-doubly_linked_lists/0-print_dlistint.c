#include "lists.h"

/**
 * print_dlistint - print a double linked list
 *
 * @h: double linked list
 * Return: size of h
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%u\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
