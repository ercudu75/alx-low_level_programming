#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string.
 * @str: The input string to duplicate.
 *
 * Return: A pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	int length, i;
	char *p, *temp;

	if (str == NULL)
		return (NULL);
	length = 0;
	temp = str;
	while (*temp)
	{
		length++;
		temp++;
	}
	/**
	 * The memory allocation for or a new string should
	 * be based on the length of the input string plus one
	 */
	p = (char *)malloc((length + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
	{
		p[i] = str[i];
	}
	p[length] = '\0';
	return (p);
}
