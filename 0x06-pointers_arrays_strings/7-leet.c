#include "main.h"
/**
 * leet - Encodes a string into 1337 (leet) speak.
 *
 * @s: The input string to be encoded.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *s)
{
	int i, j;
	char Letters[] = {"aAeEoOtTlL"};
	int num[5] = {4, 3, 0, 7, 1};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == Letters[j])
			{
				s[i] = num[j / 2] + '0';
			}
		}
	}
	return (s);
}
