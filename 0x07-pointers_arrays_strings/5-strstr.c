#include "main.h"
#include <stdio.h>

/**
 * _strstr - a function that locates substring
 * @haystack: input string in char
 * @needle: input string in char
 * Return: pointer to the beginning of substring, or NULL if not
 */
char *_strstr(char *haystack, char *needle)
{
	char *strn = needle, *strh = haystack;

	while (*haystack)
	{
		strh = haystack;
		needle = strn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = strh + 1;
	}

	return (NULL);
}
