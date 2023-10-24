#include "lists.h"
/**
 * print_listint - Prints all elements in the list.
 * @h: Pointer to the element of the list.
 * Return: Number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
	}

	return (count);
}
