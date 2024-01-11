#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of the list
 * @head: head node
 * @n: element value
 * Return: THe address of the new element, or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *h;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->prev != NULL)
		{
			h = h->prev;
		}
	}
	new_node->next = h;
	if (h != NULL)
	{
		h->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
