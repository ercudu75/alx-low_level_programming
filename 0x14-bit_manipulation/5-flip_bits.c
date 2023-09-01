#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to flip
 * @n: The first unsigned long int number.
 * @m: The second unsigned long int number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int _xor = n ^ m;
	unsigned long int count;
	unsigned long int length;

	length = sizeof(n) * 8;
	count = 0;
	while (length)
	{
		/**
		 * to count the number of bits that need to be
		 * flipped we will use bitwire and (&)
		 * to uderstand more how xor works here's an
		 * explination let's say n is 5 (00101 in binary)
		 * and m is 10 (01010 in binary).
		 * The XOR result is 01111.
		 */
		if (_xor & 1)
			count++;
		_xor >>= 1;
		length--;
	}
	return (count);
}
