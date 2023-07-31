#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to check.
 * @accept: The bytes to be checked in s.
 *
 * Return: The number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		char *ptr = accept;

		while (*ptr)
		{
			if (*s == *ptr)
			{
				i++;
				break;
			}
			ptr++;
		}
		if (!*ptr)
			break;
		s++;
	}
	return (i);
}
