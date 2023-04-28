#include "lists.h"

/**
 * free_list - Freely Linked Lists.
 * @head: Linked List.
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
	free(head->str);
		free(head);
	head = head->next;
	}
}

