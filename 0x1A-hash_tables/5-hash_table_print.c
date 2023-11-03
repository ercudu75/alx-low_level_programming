#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: pointer to hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, comma = 0;
	hash_node_t *entry;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		entry = ht->array[i];
		while (entry)
		{
			if (comma)
				printf(", ");
			printf("'%s': '%s'", entry->key, entry->value);

			entry = entry->next;
			comma = 1;
		}
	}
	printf("}\n");
}
