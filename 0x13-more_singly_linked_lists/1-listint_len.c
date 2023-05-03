#include "lists.h"

/**
 * listint_len - returns the amount of componenets in  linked listint_t list.
 * @h: List.
 * Return: Amount of nodes in a list.
 */

size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
{
	num_nodes += 1;
		h = h->next;
}

	return (num_nodes);
}
