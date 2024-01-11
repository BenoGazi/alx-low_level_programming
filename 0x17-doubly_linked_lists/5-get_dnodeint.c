#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of the list
 * @head: Head Node
 * @index: nth node index
 * Return: Indexed node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size = 0;
	dlistint_t *temp = head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (temp != NULL)
	{
		if (index == size)
		{
			return (temp);
		}
		size++;
		temp = temp->next;
	}
	return (NULL);
}
