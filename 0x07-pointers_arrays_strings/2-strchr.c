#include "main.h"
#include<stdlib.h>

/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @s: Pointer to the string to search.
 * @c: The character to find in the string.
 *
 * Return: Pointer to the first occurrence or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL); // Return NULL if the character is not found.
}
