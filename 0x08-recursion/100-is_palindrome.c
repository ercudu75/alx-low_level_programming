#include "main.h"
#include <string.h>
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length == 0 || length == 1)
	{
		return (1);
	}

	return (check_palindrome(s, 0, length - 1));
}
/**
 * check_palindrome - Recursive helper function to check palindrome.
 * @s: The input string.
 * @left: The left index.
 * @right: The right index.
 *
 * Return: 1 if palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	else if (s[left] == s[right])
	{
		return (check_palindrome(s, left + 1, right - 1));
	}
	else
	{
		return (0);
	}
}
