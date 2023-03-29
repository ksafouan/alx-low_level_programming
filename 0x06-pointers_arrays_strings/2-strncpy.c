#include "main.h"

/**
 * _strncpy: function that copies a string
 * @dest: input string
 * @src: input string
 * @n: input integer
 * Return: the value that was copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0, i = 0;
	char *tmp = dest, *str = src;

	while (*src)
	{
		len++;
		src++;
	}

	len++;

	if (n > len)
		n = len;

	src = str;

	for (; i < n; i++)
		*dest++ = *src++;

	return (tmp);
}
