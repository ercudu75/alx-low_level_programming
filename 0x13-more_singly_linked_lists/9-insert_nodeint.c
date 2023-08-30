#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A pointer to a pointer to the head node of the linked list.
 * @idx: The index at which to insert the new node.
 * @n: The value to assign to the new node.
 *
 * Return: The address of the new node, or NULL if it failed to insert.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	unsigned int i = 0;
	listint_t *curr = *head;

	if (!head || !*head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (curr)
	{
		if (i == idx - 1)
		{
			new_node->n = n;
			new_node->next = curr->next;
			curr->next = new_node;
			return (new_node);
		}
		i++;
		curr = curr->next;
	}
	free(new_node);
	return (NULL);
}
