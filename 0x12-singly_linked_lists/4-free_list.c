#include "lists.h"

void free_list(list_t *head)
{
	list_t *curr = *head;
	list_t fix;
	while (curr->next != NULL)
	{
		fix = curr;
		curr = curr->next;
		free(fix);
	}
	curr->next = NULL;
}
