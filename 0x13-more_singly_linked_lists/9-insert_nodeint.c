#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at a given index
 * @head: head node
 * @idx: index
 * @n: insertion
 * Return: new insertion
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *i, *temp;
	unsigned int j;

	i = malloc(sizeof(listint_t));
	if (i == NULL || head == NULL)
	{
		return (NULL);
	}
	i->n = n;
	i->next = NULL;
	if (idx == 0)
	{
		i->next = *head;
		*head = i;
		return (i);
	}
	temp = *head;
	j = 0;
	while (temp && j < idx - 1)
	{
		j++;
		temp = temp->next;
	}
	if (j == idx - 1 && temp != NULL)
	{
		i->next = temp->next;
		temp->next = i;
		return (i);
	}
	else
	{
		free(i);
		return (NULL);
	}
}
