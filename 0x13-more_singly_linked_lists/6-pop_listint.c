#include "lists.h"

/**
 * pop_listint - Deletes head node and brings back the head nodes data.
 * @head: Linked list.
 * Return: the head nodes data is deleted.
 */

int pop_listint(listint_t **head)
{
	int data;
listint_t *tmp;

	if (*head == NULL)
		return (0);
tmp = *head;

	data = tmp->n;

	*head = tmp->next;
free(tmp);

	return (data);

}
