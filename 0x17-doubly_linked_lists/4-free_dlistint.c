#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: Head node
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
