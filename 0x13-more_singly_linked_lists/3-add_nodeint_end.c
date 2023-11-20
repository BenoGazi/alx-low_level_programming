#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the liked list
 * @head: new head node
 * @n: int node
 * Return: new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i, *j;

	i = malloc(sizeof(listint_t));
	if (i == NULL)
	{
		return (NULL);
	}
	i->n = n;
	i->next = NULL;
	if (*head == NULL)
	{
		*head = i;
	}
	else
	{
		j = *head;
		while (j->next != NULL)
		{
			j = j->next;
		}
		j->next = i;
	}
	return (*head);
}
