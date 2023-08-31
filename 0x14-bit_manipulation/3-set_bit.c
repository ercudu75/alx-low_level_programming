#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the unsigned long int to modify.
 * @index: The index of the bit to set (starting from 0).
 *
 * Return: 1 if successful, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int value;

	/*sets it to the value of shifting 1 left by index positions */
	value = 1 << index;

	if (index > sizeof((*n)) * 8)
		return (-1);

	*n = *n | value;
	return (1);
}
