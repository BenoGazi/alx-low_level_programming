#include "lists.h"

/**
 * add_nodeint - adds a new node at the begining of the linked list
 * @head: Head Node
 * @n: new int
 * Return: Success new node added
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *i;

	i = malloc(sizeof(listint_t));
	if (i == NULL)
	{
		return (NULL);
	}
	i->n = n;
	i->next = *head;
	*head = i;
	return (*head);
}
