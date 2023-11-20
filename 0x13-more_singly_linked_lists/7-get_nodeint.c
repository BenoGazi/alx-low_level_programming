#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of the linked list
 * @head: head node
 * @index: node index
 * Return: Success 1
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	temp = head;
	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
