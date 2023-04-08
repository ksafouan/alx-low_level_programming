#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - fucntion that add positive numbers
 * @argc: counting argument in int
 * @argv: vector argument in char
 * Return 1 if Error, 0 if not
 */
int main(int argc, char *argv[])
{
	int add = 0, num = 0, i;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}

		num = atoi(argv[argc]);
		add += num;
	}

	printf("%d\n", add);
	return (0);
}
