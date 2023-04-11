#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all arguments
 * @ac: counting argument
 * @av: vector argument
 * Return: NULL if arguments are empty or in case of failure,
 * pointer to a new string if not
 */
char *argstostr(int ac, char **av)
{
	char *new_str;
	int len = 0, i, j, k = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}

	len++;
	new_str = malloc(sizeof(char) * len);
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			new_str[k] = av[i][j];
			k++;
		}
		new_str[k] = '\n';
		k++;
	}
	new_str[k] = '\0';
	return (new_str);
}
