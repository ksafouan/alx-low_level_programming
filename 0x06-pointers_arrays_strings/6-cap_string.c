#include "main.h"

int check(char s);

/**
 * cap_string: function that capitalizes all words of string
 * @c: input string
 * Return: value of string
 */
char *cap_string(char *c)
{
	int i = 0;

	while (c[i])
	{
		if (i == 0 && (c[i] >= 'a' && c[i] <= 'z'))
			c[i] -= 32;

		if (check(c[i]) && (c[i + 1] >= 'a' && c[i + 1] <= 'z'))
			c[i + 1] -=32;
		i++;
	}

	return (c);
}

/**
 * check: function to check separators
 * @s: input string
 * Return: 1 if separators exist, 0 if not
 */
int check(char s)
{
	int i =0;
	char separators[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?','"', '(', ')', '{', '}'};

	for (; i < 13; i++)
	{
		if (s == separators[i])
			return (1);
	}
	return (0);
}
