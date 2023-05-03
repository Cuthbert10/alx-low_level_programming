#include "lists.h"

/**
 * reverse_listint - Reverse the linked list.
 * @head: Pointer to the head pointer of the linked list.
 * Return: Pointer to the 1st node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev = NULL;
while (*head != NULL)
	{
next = (*head)->next;
		(*head)->next = prev;
	prev = *head;
*head = next;
	}
(*head) = prev;

	return (*head);
}
