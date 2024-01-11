#include "lists.h"

/**
 * print_dlistint - Prints all the elemnts of a dlistint_t
 * @h: Head node
 * Return: dlistint_t list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int num = 0;

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
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
