#include "lists.h"

/**
 * free_listint_safe - frees the linked list
 * @h: head node param
 * return: freed node
 */

size_t free_listint_safe(listint_t **h)
{
	size_t i;
	int j;
	listint_t *m;

	i = 0;
	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	while (*h != NULL)
	{
		j = *h - (*h)->next;
		if (j > 0)
		{
			m = (*h)->next;
			free(*h);
			*h = m;
			i++;
		}
		else
		{
			free(*h);
			*h = NULL;
			i++;
			break;
		}
	}
	*h = NULL;
	return (i);
}
