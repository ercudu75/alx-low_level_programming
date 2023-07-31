#include "main.h"
/**
 * _memset - Fills the memory with a constant byte.
 * @s: Pointer to the memory area to be filled.
 * @b: The constant byte to fill the memory with.
 * @n: The number of bytes to fill.
 *
 * Return: Pointer to the memory area 's'.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;


	while (i < n && s[i])
	{
		_putchar(s[i]);
		i++;
	}

	i = 0;
	while (i < n)
	{
		*s = b;
		s++;
		i++;
	}
	i = 0;
	while (i < n && s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (s);
}
