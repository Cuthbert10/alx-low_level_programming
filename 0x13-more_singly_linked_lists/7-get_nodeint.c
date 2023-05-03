#include "lists.h"

/**
 * get_nodeint_at_index - Brings back the nth node of the listint_t linked list.
 * @head: Pointer to the head pointer of the linked list.
 * @index: nth node.
 * Return: nth node or NULL if creation fails.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while ((i < index) && head != NULL)
{
		head = head->next;
	i++;
}

	if (i == index)
		return (head);

	return (NULL);
}
