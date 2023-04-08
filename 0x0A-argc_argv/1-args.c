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
	if (argc > 0)
		printf("%d\n", argc);

	return (0);
}
