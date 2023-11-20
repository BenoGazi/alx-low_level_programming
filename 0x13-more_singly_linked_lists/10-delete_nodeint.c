#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: head node
 * @index: index
 * Return: Success
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *i;
	unsigned int j;

	temp = *head;
	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	j = 0;
	while (j < index - 1 && temp != NULL)
	{
		temp = temp->next;
		j++;
	}
	if (temp == NULL || temp->next == NULL)
	{
		return (-1);
	}
	i = temp->next;
	temp->next = i->next;
	free(i);
	return (1);
}
