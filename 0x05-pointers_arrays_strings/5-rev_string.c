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
	int start = 0;
	int end;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	end = length - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
