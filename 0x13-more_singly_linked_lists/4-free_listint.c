#include "lists.h"

/**
 * free_list - Frees a linked list.
 * @head: Pointer to the head of the linked list.
 *
 * This function deallocates memory for all nodes in the linked list.
 */
void free_listint(listint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
