#include "lists.h"

/**
 * reverse_listint - reverses the linked list
 * @head: head node
 * Return: Reversed linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *i;
	listint_t *n;

	i = NULL;
	n = NULL;
	while (*head != NULL)
	{
		i = (*head)->next;
		(*head)->next = n;
		n = *head;
		*head = i;
	}
	*head = n;
	return (*head);
}
