#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: Head node
 * Return: Number of elemnaats in the dlist
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	if (!h)
	{
		return (num);
	}
	while (h->prev != NULL)
	{
		h = h->prev;
	}
	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
