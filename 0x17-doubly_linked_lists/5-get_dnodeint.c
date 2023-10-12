#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: A pointer to the head of the doubly linked list.
 * @index: The index of the node, starting from 0.
 *
 * Return: The nth node of the list, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;


	for (i = 0; head != NULL; i++)
	{
		if (i == index)
			break;
		head = head->next;
	}
	return (head);
}
