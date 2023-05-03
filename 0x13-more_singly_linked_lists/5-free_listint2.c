#include "lists.h"

/**
 * free_listint2 - this frees the linked list and then sets the head to NULL.
 * @head: Linked list.
 */

void free_listint2(listint_t **head)
{
listint_t *ptr;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
	ptr = *head;
		*head = ptr->next;
	free(ptr);
	}

}
