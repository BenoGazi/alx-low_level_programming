#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * @head: new node
 * @str: string param
 * Return: new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp = *head;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i])
	{
		i++;
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
		new_node->len = i;
		new_node->next = NULL;
	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	return (new_node);
}
