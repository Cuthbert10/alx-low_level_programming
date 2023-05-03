#include "lists.h"

/**
 * sum_listint - Brings back the sum of all data in the linked list.
 * @head: Pointer to the head pointer of the linked list.
 * Return: sum or 0 if the list is completely empty.
 */

int sum_listint(listint_t *head)
{

	int sum = 0;

	while (head != NULL)
{
		sum += head->n;
		head = head->next;
}

	return (sum);
}
