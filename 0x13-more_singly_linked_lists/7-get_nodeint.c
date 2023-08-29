#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a specific
 * @head: A pointer to the head node of the linked list.
 * @index: The index of the desired node (starting from 0).
 *
 * Return: A pointer to the node at the specified index, or NULL if not found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
