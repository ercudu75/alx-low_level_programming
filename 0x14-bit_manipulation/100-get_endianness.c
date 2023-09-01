#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int x = 1;

	/**
	 * actually me neither i don't know what am i writing here
	 * just check: check: https://stackoverflow.com/questions/12791864
	*/
	return ((int) (((char *)&x)[0]));
}
