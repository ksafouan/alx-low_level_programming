#include "main.h"
#include <stdio.h>

/**
 * main - function to print number of arguments passed on it
 * @argc: counting argument in int
 * @argv: vectoc argument in char
 * Return: 0
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
