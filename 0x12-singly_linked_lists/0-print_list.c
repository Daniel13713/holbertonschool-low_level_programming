#include "lists.h"

/**
 * print_list - print all content of list_t
 *
 * @h: pointer to the first struct
 * Return: length of list_t
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("%s\n", "[0] (nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
