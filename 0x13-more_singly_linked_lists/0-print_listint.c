#include "lists.h"

/**
 * print_listint - prints all elements of the list
 * @h: List
 * Return: Success
 */


size_t print_listint(const listint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
