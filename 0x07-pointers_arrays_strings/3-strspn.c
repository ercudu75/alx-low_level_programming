#include "main.h"

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
		if (!*ptr) // If we reach the end of 'accept' without finding a match, stop searching.
			break;
		s++;
	}
	return (i);
}
