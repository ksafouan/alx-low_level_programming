#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - a function that searches a string for a set of bytes
 * @s: input string in char
 * @accept: input string in char
 * Return: @s if it match any bytes of @accept, NULL if not
 */
char *_strpbrk(char *s, char *accept)
{
	char *c = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = c;
		s++;
	}

	return (NULL);
}
