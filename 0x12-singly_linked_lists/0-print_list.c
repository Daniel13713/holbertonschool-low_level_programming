#include "lists.h"

/**
 * print_list - print all content of list_t
 *
 * @h: pointer to the first struct
 * Return: length of list_t
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	if (!h->str)
	{
		printf("%s\n", "[0] (nil)");
	}
	else
	{
		printf("[%u] %s\n", h->len, h->str);
	}
	if (h->next)
	{
		print_list(h->next);
		i++;
	}
	return (i + 1);
}
