#include "lists.h"

/**
 * free_list - Frees a linked list.
 * @head: Pointer to the head of the linked list.
 *
 * This function deallocates memory for all nodes in the linked list.
 */
void free_listint(listint_t *head)
{
	listint_t *curr;

	while (head)
	{
		curr = head->next;
		free(head->n);
		free(head);
		head = curr;
	}
}
