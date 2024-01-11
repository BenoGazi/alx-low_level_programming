#include "lists.h"

/**
 * add_dnodeint_end - Adds a node at the end of a dlistint_t
 * @head: Head node
 * @n: value of element
 * Return: Success
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->next != NULL)
		{
			h = h->next;
		}
		h->next = new_node;
		new_node->prev = h;
	}
	else
	{
		*head = new_node;
	}
	return (new_node);
}
