#include<stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings representing the arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int num1, num2, i;

		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		i = num1 * num2;
		printf("%d\n", i);
	return (0);
	}
}
