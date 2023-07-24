#include "main.h"
/**
 * rev_string - Reverses a string in place.
 * @s: The string to be reversed.
 *
 * Description: This function takes a pointer to a string @s and
 * reverses the characters in the string in place, modifying the
 * original string.
 */
void rev_string(char *s)
{
	int length = 0;
	int i = 1;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = length - i; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
