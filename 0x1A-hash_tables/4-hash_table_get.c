#include "hash_tables.h"

/**
  * hash_table_get - retrieves a value associated with a key.
  * @ht: pointer to hash table.
  * @key: key.
  * Return: value associated with the key, or NULL if key couldn’t be found.
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *entry;

	if (!ht || !key || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	entry = ht->array[index];

	if (!entry)
		return (NULL);
	while (entry)
	{
		if (strcmp(entry->key, key) == 0)
		{
			return (entry->value);
		}
		entry = entry->next;
	}
	return (NULL);
}
