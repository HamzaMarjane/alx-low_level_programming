#include "lists.h"
/**
 * free_list - free the memory from the linked list.
 * @head: pointer the list's head.
 */
void free_list(list_t *head)
{
list_t *tmp;
while (head)
{
tmp = head->next;
free(head->str);
free(head);
head = tmp;
}
}
