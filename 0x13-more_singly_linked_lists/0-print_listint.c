#include "lists.h"
/**
 * print_listint - Prints all elements in the list.
 * @h: Pointer to the element of the list.
 * Return: Number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *hpt = h;
	int i = 0;

	while (hpt)
	{
		printf("%d\n", hpt->n);
		hpt = hpt->next;
		i++;
	}
	return (i);
}
