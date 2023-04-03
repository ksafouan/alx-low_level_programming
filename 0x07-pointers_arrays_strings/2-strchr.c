#include "main.h"

/**
 * _strchr - a function that locates a character in string
 * @c: the input character
 * @s: pointer to the string
 * Return: @s if character in the string, NULL if not
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);

		s++;
	}

	if (c == *s)
		return (s);

	return (NULL);
}
