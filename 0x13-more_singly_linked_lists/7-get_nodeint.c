#include "lists.h"

/**
 * get_nodeint_at_index - returns the null node of a linked list
 *
 * @head: pointer to first element of the list
 * @index: index of the node, starting at 0
 *
 * Return: pointer to the indexed node, or NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}
