#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in the linked list
 * @head: head node
 * Return: Success 1
 */

int sum_listint(listint_t *head)
{
	int total;
	listint_t *temp;

	total = 0;
	temp = head;
	while (temp != NULL)
	{
		total += temp->n;
		temp = temp->next;
	}
	return (total);
}
