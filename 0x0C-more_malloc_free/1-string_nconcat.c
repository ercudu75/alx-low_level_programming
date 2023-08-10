#include "main.h"
#include<stdlib.h>
#include<string.h>
/**
 * string_nconcat - Concatenates two strings
 * @s1: First input string
 * @s2: Second input string
 * @n: Maximum number
 *
 * Return: Pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1, i;
	char *p;
	unsigned int k = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	length1 = strlen(s1);

	p = malloc((length1 + 1) * (sizeof(char)));
	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		p[k++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
	{
		p[k++] = s2[i];
	}
	p[k] = '\0';
	return (p);
}
