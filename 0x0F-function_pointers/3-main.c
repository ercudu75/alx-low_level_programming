#include "3-calc.h"
#include<stdlib.h>
#include<stdio.h>

int main(int argc, char *argv[])
{
	int a,b;
	char s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = *(argv[2]);
	printf("%d\n", get_op_func(s,(a, b)));

}
