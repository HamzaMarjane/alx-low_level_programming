#include "lists.h"

/**
 * print_listint_safe - Prints a linked list unconditionally.
 *
 * @head: Pointer to the first element node of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = head;
	const listint_t *temp_l = NULL;
	size_t counter = 0;
	size_t new_c;

	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		counter++;
		temp = temp->next;
		temp_l = head;
		new_c = 0;
		while (new_c < counter)
		{
			if (temp == temp_l)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (counter);
			}
			temp_l = temp_l->next;
			new_c++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
