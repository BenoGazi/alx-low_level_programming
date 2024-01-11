#include "lists.h"

/**
 * sum_dlistint - Sums all of the data in the list
 * @head: Head node
 * Return: Sum of  all of the data of a doubly linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
