#include "lists.h"

/**
 * free_listint_safe - frees a linked list the safer way.
 *
 * @head: pointer to the first element in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t count = 0;
	int diff;
	listint_t *tmp;

	if (!head || !*head)
		return (0);

	while (*head)
	{
		diff = *head - (*head)->next;
		if (diff > 0)
		{
			tmp = (*head)->next;
			free(*head);
			*head = tmp;
			count++;
		}
		else
		{
			free(*head);
			*head = NULL;
			count++;
			break;
		}
	}

	*head = NULL;

	return (count);
}
