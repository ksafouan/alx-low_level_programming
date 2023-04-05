#include "main.h"

/**
 * _strlen - function to get the lenght of a string
 * @s: input string
 * Return: 1 if there's nothing, the lenght i else
 */
int _strlen(char *s)
{
	if (s[0] != '\0')
		return (_strlen(s + 1) + 1);

	return (0);
}

/**
 * pal_check - function to check if the string is palindrome
 * @s: input string
 * @x: input in integer
 * @y: input in integer
 * Return: 1 if Palindrome, 0 if not
 */
int pal_check(char *s, int x, int y)
{
	if (s[x] == s[y])
		if (x > y / 2)
			return (1);
		else
			return (pal_check(s, x + 1, y - 1));
	else
		return (0);
}

/**
 * is_palindrome - function to states if the string is palidrome
 * @s: input string
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	return (pal_check(s, 0, _strlen(s) - 1));
}
