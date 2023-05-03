#include "lists.h"

/**
 * add_nodeint - Adds a new node at the start of listint_t list.
 * @head: Pointer to the head pointer of the linked lists.
 * @n: the data to add to the new node.
 * Return: Address of new element if successful or NULL if creation fails.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new_node;

new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

new_node->n = n;

	new_node->next = *head;
*head = new_node;

	return (new_node);
}
