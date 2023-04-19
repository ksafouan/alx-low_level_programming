#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to prints the opcodes on its own
 * @argc: counter argument
 * @argv: vector argument
 * Return: 1 or 2 in failure, 0 on success
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	unsigned char *func_ptr;

	if (argc != 2)
	{
		printf("ERROR\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("ERROR\n");
		exit(2);
	}

	func_ptr = (unsigned char *)main;
	i = 0;

	if (bytes > 0)
	{
		while (i < (bytes - 1))
			printf("%02hhx ", func_ptr[i++]);
		printf("%hhx\n", func_ptr[i]);
	}

	return (0);
}
