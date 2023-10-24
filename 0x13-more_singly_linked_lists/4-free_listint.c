#include "lists.h"

/**
 * free_listint - Frees a list
 *
 * @head: pointer to the first element of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
