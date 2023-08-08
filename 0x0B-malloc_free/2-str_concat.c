#include "main.h"
#include<string.h>
#include<stdlib.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int length1, length2, i;
	char *p;
	int k = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	length1 = strlen(s1);
	length2 = strlen(s2);
	p = malloc((length1 + length2 + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		p[k++] = s1[i];

	for (i = 0; s2[i] != '\0'; i++)
		p[k++] = s2[i];

	p[k] = '\0';
	return (p);
}
