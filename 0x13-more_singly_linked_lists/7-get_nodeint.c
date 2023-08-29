#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
