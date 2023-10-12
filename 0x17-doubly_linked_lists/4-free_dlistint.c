#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: A pointer to the head of the doubly linked list.
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	while (head->next != NULL)
	{
		free(head);
		head = head->next;
	}
	free(head);
}
