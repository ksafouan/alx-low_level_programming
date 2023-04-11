#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns the copy of agiven string
 * in allocated memory
 * @str: input string
 * Return: NULL if string is null or insufficient memory,
 * or pinter if not
 */
char *_strdup(char *str)
{
	char *new_str, *start;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	start = str;

	while (*str)
	{
		len++;
		str++;
	}

	str = start;
	new_str = malloc(sizeof(char) * (len + 1));
	start = new_str;

	if (new_str != NULL)
	{
		for (i = 0; i < len; i++)
		{
			new_str[i] = *str;
			str++;
		}
		new_str[i] = '\0';
		return (start);
	}
	else
		return (NULL);
}
