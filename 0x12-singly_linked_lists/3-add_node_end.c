#include "lists.h"
/**
 * add_node_end - Function to add new node at the tail.
 *
 * @head: the head of the node.
 * @str: the value of the node
 *
 * Return: the number of nodes
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new;
	size_t len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}

	new->len = len;
	new->next = NULL;

	if (!(*head))
	{
		(*head) = new;

		return (new);
	}

	temp = (*head);
	while (temp->next)
		temp = temp->next;

	temp->next = new;
	return (new);
}
