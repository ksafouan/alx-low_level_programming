#include "main.h"

/**
 * wildcmp_check - function to check the string
 * @s1: input string
 * @s2: input string
 * @x: int for loop
 * @y: int for loop
 * Return: 1 if identical, 0 if not
 */
int wildcmp_check(char *s1, char *s2, int x, int y)
{
	if (s1[x] == '\0' && s2[y] == '\0')
		return (1);
	if (s1[x] == s2[y])
		return (wildcmp_check(s1, s2, x + 1, y + 1));
	if (s1[x] == '\0' && s2[y] == '*')
		return (wildcmp_check(s1, s2, x, y + 1));
	if (s2[y] == '*')
		return (wildcmp_check(s1, s2, x + 1, y) || wildcmp_check(s1, s2, x, y + 1));

	return (0);
}

/**
 * wildcmp - function that compares two strings
 * @s1: input string
 * @s2: input string
 * Return: 1 id identical, 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_check(s1, s2, 0, 0));
}
