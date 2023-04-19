#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - function to run the program
 * @argc: counter argument
 * @argv: vector argument
 * Return: exit 0 if succes, 99 on argc error, 100 if else
 */
int main(int __attribute__((__unused__))argc, char *argv[])
{
	int n1, n2;
	char *op;

	if (argc != 4)
	{
		printf("ERROR\n");
		exit(99);
	}

	n1 = atoi(argv[1]);
	op = argv[2];
	n2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("ERROR\n");
		exit(99);
	}

	if ((*op == '/' && n2 == 0) || (*op == '%' && n2 == 0))
	{
		printf("ERROR\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(n1, n2));

	return (0);
}
