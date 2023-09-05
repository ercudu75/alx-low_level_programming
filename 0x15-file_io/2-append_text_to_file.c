#include "main.h"


/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file to which text should be appended.
 * @text_content: The NULL-terminated string to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp = -1;
	ssize_t written = 0;

	if (!filename)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp < 0)
		return (-1);
	if (!text_content)
	{
		close(fp);
		return (1);
	}

	written = write(fp, text_content, _strlen(text_content));
	if (written < 0)
	{
		close(fp);
		return (-1);
	}
	close(fp);

	return (1);
}
/**
 * _strlen - returns the length of a string.
 * @s: string.
 * Return: length of @s.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
