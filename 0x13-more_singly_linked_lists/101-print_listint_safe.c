#include "lists.h"

size_t loop(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * print_listint_safe - prints a listint_t linkd lists
 * @head: head node
 * Return: Linked list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = loop(head);

	if (nodes == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			nodes++;
			head = head->next;
		}
		if (head != NULL)
		{
		printf("->[%p] %d\n", (void *)head, head->n);
		}
	}
	return (nodes);
}

/**
 * loop - unique nodes count
 * @head: head node checker
 * Return: Success
 */

size_t loop(const listint_t *head)
{
	const listint_t *i = head;
	const listint_t *j = head;
	size_t nodes = 0;
	
	while ( j != NULL && j->next != NULL)
	{
		i = i->next;
		j = (j->next)->next;
		if (i == j)
		{
			i = head;
			while (i != j)
			{
				nodes = nodes + 1;
				i = i->next;
				j = j->next;	
			}
			i = i->next;
			while (i != j)
			{
				nodes = nodes + 1;
				i = i->next;
			}
			return (nodes);
		}
	}
	return (0);
}
