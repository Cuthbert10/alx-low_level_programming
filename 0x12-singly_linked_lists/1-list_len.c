#include "lists.h"

/**
 * list_len - Prints the lengths of the list_t linked list.
 * @h: Linked List
 * Return: Number of elements and nodes in length in the  linked list.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
