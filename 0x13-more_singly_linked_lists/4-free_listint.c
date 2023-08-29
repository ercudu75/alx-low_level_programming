#include "lists.h"

/**
 * free_listint - Frees a linked list.
 * @head: Pointer to the head of the linked list.
 *
 * This function deallocates memory for all nodes in the linked list.
 */
void free_listint(listint_t *head)
{
	listint_t *curr;

	while (head != NULL)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
