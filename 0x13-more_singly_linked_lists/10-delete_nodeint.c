#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given position
 * @head: A pointer to a pointer to the head node of the linked list.
 * @index: The index of the node to delete.
 *
 * Return: 1 if successful, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_node;
	unsigned int i = 0;
	listint_t *temp_h = *head;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		temp_node = temp_h->next;
		*head = temp_node;
		free(temp_h);
		return (1);
	}
	while (temp_h)
	{
		if (i == index - 1)
		{
			temp_node = temp_h->next;
			temp_h->next = temp_node->next;
			free(temp_node);
			return (1);
		}
		i++;
		temp_h = temp_h->next;
	}
	return (-1);
}
