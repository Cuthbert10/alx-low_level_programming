#include "lists.h"

/**
 * free_listint - this frees the linked list.
 * @head: Linked list.
 */

void free_listint(listint_t *head)
{
listint_t *ptr;

	if (head == NULL)
		return;

	while (head != NULL)
{
ptr = head;
		head = head->next;
	free(ptr);
}
}
