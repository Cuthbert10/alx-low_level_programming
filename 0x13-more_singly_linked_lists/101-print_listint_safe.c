#include "lists.h"

/**
 * count_nodes_till_loop - counts nodes to know how many special nodes to print
 * @head: Pointer to the head pointer of the linked list.
 * Return: amount of special nodes in the list before loop.
 */
int count_nodes_till_loop(const listint_t *head)
{
	int count = 0;
	const listint_t *turtle, *hare;

turtle = hare = head;
while (turtle != NULL && hare != NULL)
	{
turtle = turtle->next;
	hare = hare->next->next;
		count++;

		if (turtle == hare)
		{
		turtle = head;
		while (turtle != hare)
		{
		turtle = turtle->next;
			hare = hare->next;
				count++;
		}
			return (count);
		}
	}
	return (0);
}

/**
 * loop - Finds if there is a loop in the linked list.
 * @head: Pointer to the head pointer of the linked list.
 * Return: 0 if no loop, 1 if loop
 */
int loop(const listint_t *head)
{
	const listint_t *turtle, *hare;

turtle = hare = head;

	while (turtle != NULL && hare != NULL)
	{
	turtle = turtle->next;
		hare = hare->next->next;

		if (turtle == hare)
			return (1);
	}
	return (0);
}

/**
 * print_listint_safe - Prints all the list with addresses.
 * @head: Pointer to the head pointer of the linked list.
 * Return: Amount of nodes in the list and exit(98) if it fails.
 */
size_t print_listint_safe(const listint_t *head)
{
	int count = 0;
	int loop_found;
	size_t num_nodes = 0;
	const listint_t *tmp;

	if (head == NULL)
		exit(98);

	loop_found = loop(head);

	if (loop_found == 1)
	{
		count = count_nodes_till_loop(head);
		for (loop_found = 0; loop_found < count; loop_found++)
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			num_nodes += 1;
			tmp = tmp->next;
		}
	}
	else if (loop_found == 0)
	{
	tmp = head;
		while (tmp != NULL)
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
		num_nodes += 1;
	tmp = tmp->next;
		}
	}

	return (num_nodes);
}
