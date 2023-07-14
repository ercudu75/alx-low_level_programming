#include <stdio.h>
/**
* main - Entry point
*
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char letter;

	/* Print lowercase alphabet */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
	putchar(letter);
	}
	putchar('\n');

	return (0);
}
