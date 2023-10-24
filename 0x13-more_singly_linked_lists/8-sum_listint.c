#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list
 *
 * @head: pointer to first element of the list of list
 *
 * Return: sum of all the data (n) in the list, or 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
