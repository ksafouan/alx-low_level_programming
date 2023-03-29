#include "main.h"

/**
 * rot13: function that rotate to the 13 letter after
 * @c: input string
 * Return: the value of string modified
 */
char *rot13(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		while ((c[i] >= 'a' && c[i] <= 'z') || (c[i] >= 'A' && c[i] <= 'Z'))
		{
			if ((c[i] >= 'a' && c[i] <= 'm') || (c[i] >= 'A' && c[i] <= 'M'))
				c[i] += 13;
			else
				c[i] -=13;
			i++;
		}
		i++;
	}

	return (c);
}
