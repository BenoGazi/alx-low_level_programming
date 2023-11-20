#include "lists.h"

/**
 * listint_len - returns the number of elements in the linked list
 * @h: head pointer
 * Return: Success
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
