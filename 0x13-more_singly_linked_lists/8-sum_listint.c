#include "lists.h"

/**
 * sum_listint - Returns the sum of a list.
 * @head: A pointer to the head node of the linked list.
 *
 * Return: The sum of all data values, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
