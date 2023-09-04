#include "main.h"

/**
 * read_textfile - Read and print the contents of a file.
 * @filename: The name of the file to read.
 * @letters: The number of letters (characters) to read and print.
 *
 * Return: The actual number of characters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp = -1;
	char *buffer;
	ssize_t count = 0, written = 0;

	if (!filename)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp < 0)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (!buffer)
	{
		close(fp);
		return (0);
	}

	count = read(fp, buffer, letters);
	if (count < 0)
	{
		free(buffer);
		close(fp);
		return (0);
	}
	written = write(STDOUT_FILENO, buffer, count);
	if (written < 0)
	{
		free(buffer);
		close(fp);
		return (0);
	}
	free(buffer);
	close(fp);

	return (count);
}

