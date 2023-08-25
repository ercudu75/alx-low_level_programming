#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list.
 * @h: Pointer to the head of the linked list.
 *
 * This function counts the number of elements in a linked list.
 *
 * Return: The number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (count);
	}
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			count++;
		}
		else
		{
			count++;
		}
		h = h->next;
	}
	return (count);
}
