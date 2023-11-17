#include "lists.h"

/**
 * print_list - list to print
 * @h: pointer parameter
 * Return: Success
 */

size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0](nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			node++;
		}
	}
	return (node);
}
