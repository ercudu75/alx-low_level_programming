#include "main.h"
/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: The input string to be printed.
 *
 * Description: This function takes a pointer to a string @str and prints the
 * second half of the string. If the number of characters in the string is odd,
 * it prints the last n + 1 characters of the string, where n is
 * (length_of_the_string - 1) / 2. For even-length strings, it prints the
 * characters from the middle to the end of the string.
 */
void puts_half(char *str)
{
	int n;
	int length_of_the_string = 0;
	int i = 0;

	while (str[length_of_the_string] != '\0')
	{
		length_of_the_string++;
	}

	n = (length_of_the_string - 1) / 2;

	if (length_of_the_string % 2 != 0)
	{
		for (i = n + 1; i < length_of_the_string; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = length_of_the_string / 2; i < length_of_the_string; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
