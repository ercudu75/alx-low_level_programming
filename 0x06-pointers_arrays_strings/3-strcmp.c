#include "main.h"
/**
 * _strcmp - Compare two strings lexicographically.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 * Return: Always Succes (0).
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if ((s1[i] < s2[i]) || (s1[i] > s2[i]))
		{
			return ((s1[i] - s2[i]));
		}
		i++;
	}

	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);

	return (0);
}
