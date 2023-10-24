#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 *
 * @head: Pointer that points to a pointer to the element of the linked list.
 *
 * Return: Pointer to the new first element of the reversed linked list.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next;
	}

	(*head) = prev;
	return (*head);
}
