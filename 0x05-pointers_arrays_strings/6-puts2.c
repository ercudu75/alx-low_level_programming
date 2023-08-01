#include "main.h"

/**
 * puts2 - Prints every other character of a string, followed by a new line.
 * @str: The string to be printed.
 *
 * Description: This function takes a pointer to a string @str and prints every
 * other character of the string, starting with the first character. It then
 * prints a new line after printing the characters.
 */
void puts2(char *str)
{
	int length = 0;
	int i = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
