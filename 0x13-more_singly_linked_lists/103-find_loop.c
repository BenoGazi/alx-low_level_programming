#include "lists.h"

/**
 * find_listint_loop - finds the loops in a linked list
 * @head: head node
 * Return: loops;
 */

listint_t *find_listint_loops(listint_t *head)
{
	listint_t *i = head;
	listint_t *j = head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (i && j &&j->next)
	{
		j = j->next->next;
		i = i->next;
		if (j == i)
		{
			i = head;
			while (i != j)
			{
				i = i->next;
				j = j->next;
			}
			return (j);
		}
	}
	return (NULL);
}
