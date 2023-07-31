#include "main.h"

/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @s: Pointer to the string to search.
 * @c: The character to find in the string.
 *
 * Return: Pointer to the first occurrence or null
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c && c != '\0')
		{
			return (s);
		}
		s++;
	}
	return (0);
}
