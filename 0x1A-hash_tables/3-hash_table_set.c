#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Hash table to add or update the key/value to
 * @key: Key. Can not be an empty string
 * @value: Value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = hash_djb2((const unsigned char *)key) % ht->size;

	current_node = ht->array[index];

	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			if (current_node->value == NULL)
				return (0);
			return (1);
		}
		current_node = current_node->next;
	}

	new_node = ht_pair(key, value);
	if (new_node == NULL)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

/**
 * ht_pair - Allocates a new hash_node_t and sets its key and value
 * @key: Key for the new node
 * @value: Value associated with the key
 * Return: Pointer to the new node, or NULL if it fails
 */
hash_node_t *ht_pair(const char *key, const char *value)
{
	hash_node_t *entry = malloc(sizeof(hash_node_t));

	if (entry == NULL)
		return (NULL);

	entry->key = strdup(key);
	entry->value = strdup(value);
	if (entry->key == NULL || entry->value == NULL)
	{
		free(entry->key);
		free(entry->value);
		free(entry);
		return (NULL);
	}

	entry->next = NULL;
	return (entry);
}
