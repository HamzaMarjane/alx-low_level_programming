#include "lists.h"

/**
 * free_listint2 - Frees a list and sets the head to NULL.
 *
 * @head: A pointer that points on a pointer to the first element of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;
}
