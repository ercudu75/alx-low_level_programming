#include "lists.h"

/**
 * pop_listint - Removes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head node.
 *
 * Return: The data (n) stored in the removed head node, or 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *curr = *head;
	listint_t *remove = *head;

	if (*head == NULL)
		return (0);

	n = remove->n;
	*head = curr->next;
	free(remove);

	return (n);
}
