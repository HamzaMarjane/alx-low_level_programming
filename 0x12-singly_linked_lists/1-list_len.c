#include "lists.h"

/**
 * list_len - Function that returns the number of nodes
 *
 * @h: the linked list
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t numberOfNodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		h = h->next;
		numberOfNodes++;
	}

	return (numberOfNodes);
}
