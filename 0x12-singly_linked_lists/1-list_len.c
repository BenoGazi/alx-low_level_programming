#include "lists.h"

/**
 * list_len - prints the number of elements
 * @h: pointer parameter
 * Return: success
 */

size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);
}
