#include "lists.h"

/**
 * dlistint_len - calculate a size of a double linked list
 *
 * @h: double linked list
 * Return: size of h
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}
	return (size);
}
