#include <stdio.h>
#include <stdlib.h>
#include<stddef.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>

void error_read(char *file);
void error_write(char *file);
int close_error(int fd);


/**
 * main - Copy the contents of one file to another.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	ssize_t fd_from, fd_to;
	ssize_t read_from = 1, write_to = 1;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
	{
		error_read(argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to < 0)
	{
		error_write(argv[2]);
		exit(99);
	}
	while (read_from > 0)
	{
		read_from = read(fd_from, buffer, 1024);
		if (read_from < 0)
		{
			error_read(argv[1]);
			close(fd_from);
			close(fd_to);
			exit(98);
		}
		write_to = write(fd_to, buffer, read_from);
		if (write_to < 0)
		{
			error_write(argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	if (close_error(fd_from) < 0)
	{
		close_error(fd_to);
		exit(100);
	}
	if (close_error(fd_to) < 0)
		exit(100);
	return (0);
}

/**
 * error_read - Prints an error message when read from a file fails.
 * @file: The name of the file that failed to read from.
 */
void error_read(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
}

/**
 * error_write - Prints an error message when write to a file fails.
 * @file: The name of the file that failed to write to.
 */
void error_write(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
}
/**
 * close_error - close a file descriptor and check for a possible error.
 * @fd: file descriptor for file to be closed.
 * Return: 1 if fd colud be closeed, -1 if fd could not be closed.
 */
int close_error(int fd)
{
	int close_output;

	close_output = close(fd);
	if (close_output < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	return (close_output);
}
