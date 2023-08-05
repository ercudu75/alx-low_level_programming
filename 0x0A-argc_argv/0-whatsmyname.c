#include<stdio.h>
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: The value of argc (number of arguments).
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (argc);
}
