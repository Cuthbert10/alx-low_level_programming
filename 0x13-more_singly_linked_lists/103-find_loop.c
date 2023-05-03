#include "lists.h"

/**
 * find_listint_loop - Finds the loop in the linked list.
 * @head: Pointer to the head pointer of the linked list.
 * Return: Address of the node where the loop begins.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *turtle, *hare;

	turtle = hare = head;

	while (turtle != NULL && hare != NULL)
	{
	turtle = turtle->next;
		hare = hare->next->next;

		if (turtle == hare)
		{
	turtle = head;
			while (turtle != hare)
			{
	turtle = turtle->next;
		hare = hare->next;
			}
			return (turtle);
		}
	}

	return (NULL);
}
