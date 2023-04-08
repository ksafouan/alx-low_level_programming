#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to multiplie two numbers
 * @argc: counting argument in int
 * @argv: vector argument in char
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("ERROR\n");
		return (1);
	}

	return (0);
}
