#include<stdio.h>
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings representing the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	argc--;
	printf("%d\n", argc);
	return (0);
}
