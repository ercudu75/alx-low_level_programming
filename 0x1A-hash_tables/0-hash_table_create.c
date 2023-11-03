#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size:  size of the array.
 * Return: pointer to hashtable
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = NULL;
	unsigned long int i = 0;

	/* pointer to a hash table*/
	hashtable = malloc(sizeof(hash_table_t));
	if (!hashtable)
		return (NULL);

	hashtable->size = size;

	/* X numbers pointer to the entry of the array*/
	hashtable->array = malloc(sizeof(hash_node_t *) * size);
	if (!(hashtable->array))
	{
		free(hashtable);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		(hashtable->array)[i] = NULL;
	return (hashtable);
}
