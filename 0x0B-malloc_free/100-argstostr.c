#include<stdlib.h>
#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * argstostr - Concatenates
 * @ac: Number of command line arguments.
 * @av: Array of command line argument strings.
 *
 * Return: Pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0;
	char *p;
	int k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}
	p = (char *)malloc(len * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[k++] = av[i][j];
		}
	if (i < ac - 1)
		p[k++] = '\n';
	}
	p[k] = '\0';
	return (p);
}
