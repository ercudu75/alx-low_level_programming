#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list.
 *
 * @head: A double pointer to the head of the linked list.
 * @n: The value to be stored in the new node.
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
