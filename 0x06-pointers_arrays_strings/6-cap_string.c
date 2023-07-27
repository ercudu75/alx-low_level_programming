#include "main.h"
/**
 * cap_string - Capitalize the first letter of each word in a string.
 *
 * @s: The input string to be capitalized.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *s)
{
	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
	'!', '?', '"', '(', ')', '{', '}'};
	int i, j;

	i = 0;
	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] -=  32;
	}
	while (s[i])
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == spe[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
			}
		}
		i++;
	}
	return (s);
}
