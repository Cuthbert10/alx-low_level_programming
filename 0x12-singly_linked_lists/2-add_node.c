#include "lists.h"

/**
 * _strlen - Finds string lengths.
 * @str: String
 * Return: Length
 */
int _strlen(const char *str)
{
	int leng;

	for (leng = 0; str[leng] != '\0'; leng++)
		;
	return (leng);
}

/**
 * add_node - Adds node to the beginning of the linked list.
 * @head: Linked list
 * @str: Data for the new node.
 * Return: Address of the new element or NULL if failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);

	if (head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	*head = new_node;

	return (new_node);
}
