#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at the index of the list
 * @head: Head node
 * @index: Node inded
 * Return: 1 if succeeded and -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head_1 = *head, *head_2 = NULL;
	unsigned int i = 0;

	if (head_1 != NULL)
	{
		while (head_1->prev)
		{
			head_1 = head_1->prev;
		}
	}
	while (head_1)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = head_1->next;
				if (*head != NULL)
				{
					(*head)->prev = NULL;
				}
			}
			else
			{
				head_2->next = head_1->next;
				if (head_1->next != NULL)
				{
					head_1->next->prev = head_2;
				}
			}
			free(head_1);
			return (1);
		}
		head_2 = head_1;
		head_1 = head_1->next;
		i++;
	}
	return (-1);
}
