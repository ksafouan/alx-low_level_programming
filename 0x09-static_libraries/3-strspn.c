#include "main.h"

/**
 * _strspn - a function that gets rhe length of a string
 * @s: the string in char
 * @accept: input in char
 * Return: the count of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, i;
	char *c = accept;

	while (*s)
	{
		i = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				i = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = c;

		if (i == 0)
			break;
	}

	return (count);
}
