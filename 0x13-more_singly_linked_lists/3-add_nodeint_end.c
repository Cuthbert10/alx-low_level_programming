#include "lists.h"

/**
 * add_nodeint_end - A new node is added at finish of a listint_t list.
 * @head: Pointer to the head pointer of the linked list.
 * @n: Data to add to the new node.
 * Return: Address of new component if successful or NULL if creation fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new_node, *tmp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}

	return (new_node);
}
