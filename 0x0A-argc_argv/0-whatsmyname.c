#include "main.h"
#include <stdio.h>

/**
 * main - function to print name of the file
 * @argc: counting argument in int
 * @argv: vector argument in char
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
