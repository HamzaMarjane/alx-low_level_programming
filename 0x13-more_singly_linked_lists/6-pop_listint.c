#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - function that deletes the first node.
  * @head: pointer that point on a pointer to the first element of the list.
  *
  * Return: the first node content.
  */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n = 0;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new_head;
	}

	return (n);
}
