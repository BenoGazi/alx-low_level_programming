#include "lists.h"

/**
 * free_list - frees a list
 * @head: head node
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		if (head->str != NULL)
		{
			free(head->str);
		}
		free(head);
		head = temp;
	}
}
