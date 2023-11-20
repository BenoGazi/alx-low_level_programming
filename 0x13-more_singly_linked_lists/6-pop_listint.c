#include "lists.h"

/**
 * pop_listint - deletes head node of the linked list
 * @head: head node
 * Return: Lists with deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (i);
}
