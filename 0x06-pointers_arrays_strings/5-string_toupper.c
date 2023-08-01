#include "main.h"
/**
 * string_toupper - Converts all lowercase letters of a string to uppercase.
 * @a: Pointer to the first character of the string to be modified.
 *
 * Description: This function takes a string as input and converts all
 * lowercase letters
 *
 * Return: Pointer to the modified string (same as input parameter 'a').
 */
char *string_toupper(char *a)
{
	int i;
	int length = 0;

	while (a[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] -=  32;
		}
	}
	return (a);
}
