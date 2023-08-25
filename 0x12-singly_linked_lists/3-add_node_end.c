#include "lists.h"


/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @str: String to be duplicated and stored in the new node.
 *
 * This function adds a new node at the end of the linked list.
 *
 * Return: Address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->next = NULL;
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(new_node->str);
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *curr = *head;

		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = new_node;
	}

	return (new_node);
}

/**
 * _strlen - returns the length of a string.
 * @s: string.
 * Return: length of @s.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
