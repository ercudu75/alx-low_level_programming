#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @str: String to be duplicated and stored in the new node.
 *
 * This function adds a new node at the beginning of list.
 *
 * Return: Address of the new element (node) or NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;


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
