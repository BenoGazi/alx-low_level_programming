#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: head node
 * @idx: Node index
 * @n: value of element
 * Return: Address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *head = *h;
	unsigned int i = 1;

	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		if (head != NULL)
		{
			while (head->prev)
				head = head->prev;
		}
		while (head)
		{
			if (i == idx)
			{
				if (!head->next)
					new_node = add_dnodeint(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node != NULL)
					{
						new_node->n = n;
						new_node->next = head->next;
						new_node->prev = head;
						head->next->prev = new_node;
						head->next = new_node;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}
	return (new_node);
}
