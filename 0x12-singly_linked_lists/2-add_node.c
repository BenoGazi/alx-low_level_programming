#include "lists.h"

/**
 * add_node - adds a new node
 * @str:
 * @head:
 * Return: node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
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
	if(new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = i;
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}
