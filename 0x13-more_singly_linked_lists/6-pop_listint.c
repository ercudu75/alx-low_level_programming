#include "lists.h"

int pop_listint(listint_t **head)
{
	int n;
	listint_t *curr = *head;

	if (*head == NULL)
		return (0);

	listint_t *remove = *head;
	n = remove->n;
	*head = curr->next;
	free(remove);

	return (n);
}
