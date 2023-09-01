#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the unsigned long int to modify.
 * @index: The index of the bit to clear (starting from 0).
 *
 * Return: 1 if successful, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int value;

	/**
	 * creates a bitmask called value where all bits are
	 *  set to 1 except the bit at the specified index.
	 * let's take an exemple
	 * If index is 2, the shifted value becomes 11111011
	 * let's talk about now shifted value more we can forget
	 * about everything we talk about before Let's assume we have an
	 * index of 3 The binary representation of 1 is 00000001
	 * 1 << 3 positions gives 00001000
	 *
	*/
	value = ~(1 << index);
	if (index > sizeof((*n)) * 8)
		return (-1);

	*n &= value;
	return (1);
}
