#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: input string
 * @s2: input string
 * Return: the pointer o the new string of tha concatenated two
 * or NULL if string is empty or in case of failure
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str, *start1, *start2;
	int i, len1 = 0, len2 = 0;

	start1 = s1;
	start2 = s2;

	while (*s1)
	{
		len1++;
		s1++;
	}
	s1 = start1;

	if (s2 == NULL)
		s2 = "";

	while (*s2)
	{
		len2++;
		s2++;
	}
	s2 = start2;
	new_str = malloc(sizeof(char) * (len1 + len2 + 1));
	start1 = new_str;

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < (len1 + len2); i++)
	{
		if (i < len1)
		{
			new_str[i] = *s1;
			s1++;
		}
		else
		{
			new_str[i] = *s2;
			s2++;
		}
	}
	new_str[i] = '\0';

	return (start1);
}
