#include "hash_tables.h"
/**
 * key_index - Gives you the index of a key.
 * @key: The key, a string.
 * @size: The size of the array of the hash table.
 *
 * This function uses the hash_djb2 function to generate a hash code for a key
 * and then computes the index where the key/value pair should be stored in the
 * array of the hash table. The hash code is reduced to a valid index by
 * taking its modulus over the size of the array.
 *
 * Return: The index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/**
	 * the hash_djb2 function This is a specific hash function that takes a key
	 * and computes a unique hash code.
	*/
	return (hash_djb2(key) % size);
}
