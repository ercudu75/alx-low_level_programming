#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A double pointer to the head of the doubly linked list.
 * @n: The value to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (!(*head))
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (current->next)
		current = current->next;

	new_node->prev = current;
	current->next = new_node;
	return (new_node);
}
