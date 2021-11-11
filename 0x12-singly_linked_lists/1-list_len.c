#include "lists.h"

/**
 * list_len - print lenthg of list_t
 *
 * @h: pointer to the first struct
 * Return: length of list_t
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
