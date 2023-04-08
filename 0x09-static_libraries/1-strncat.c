#include "main.h"

/**
 * _strncat: function that concatenates two strings
 * @dest: input string
 * @src: input string
 * @n: int number of bytes
 * Return: the string value
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;
	char *tmp = dest, *str = src;

	while (*src)
	{
		len++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > len)
		n = len;

	src = str;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (tmp);
}
