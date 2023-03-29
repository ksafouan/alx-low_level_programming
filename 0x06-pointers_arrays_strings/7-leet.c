#include "main.h"

/**
 * leet: function that encodes a string into 1337
 * @c: input string
 * Return: return the modified string
 */
char *leet(char *c)
{
	int i = 0, j;

	char str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char rep [10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (c[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == str[j])
				c[i] = rep [j];
		}

		i++;
	}

	return (c);
}
