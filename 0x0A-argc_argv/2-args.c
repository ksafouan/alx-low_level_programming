#include "main.h"
#include <stdio.h>

/**
 * main - function to print all the arguments
 * @argc: counting argument in int
 * @argv: vector argument in char
 * Return: 0
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
