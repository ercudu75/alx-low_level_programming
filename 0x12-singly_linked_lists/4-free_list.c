#include "lists.h"

/**
 * free_list - Frees a linked list.
 * @head: Pointer to the head of the linked list.
 *
 * This function deallocates memory for all nodes in the linked list.
 */
void free_list(list_t *head)
{
	list_t *curr = head;
	list_t *fix;

	while (curr->next != NULL)
	{
		fix = curr;
		curr = curr->next;
		free(fix->str);
		free(fix);
	}
	curr->next = NULL;
}
