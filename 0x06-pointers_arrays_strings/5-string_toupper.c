#include "main.h"

/**
 * string_toupper: function that changes all lowercase string to upper
 * @c: input string
 * Return: the value of the string
 */
char *string_toupper(char *c)
{
	char *w = c;

	while (*c)
	{
		if (*c >= 'a' && *c <= 'z')
			*c -=32;
		c++;
	}
	return (w);
}
