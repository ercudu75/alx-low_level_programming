#include "3-calc.h"
#include<stdlib.h>
#include<stdio.h>

int main(int argc, char *argv[])
{
	int op_func(int, int);
	char s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	s = *(argv[2]);
	if ((s == '/' || s == '%') && atoi(argv[3]) == 0 )
	{
		printf("Error\n");
		exit(100);
	}


}
