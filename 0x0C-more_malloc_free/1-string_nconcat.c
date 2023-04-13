#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: input string
 * @s2: input string
 * @n: number of bytes reserved
 * Return: NULL in case of failure, pointer if not
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, lens1 = 0, lens2 = 0;

	if (s1 == NULL)
		s1 = "";

	while (s1[lens1])
		lens1++;

	if (s2 == NULL)
		s2 = "";

	while (s2[lens2])
		lens2++;

	if (n >= lens2)
		n = lens2;

	str = malloc(lens1 + n + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < (lens1 + n); i++)
	{
		if (i < lens1)
			str[i] = *s1, s1++;
		else
			str[i] = *s2, s2++;
	}
	str[i] = '\0';
	return (str);
}
