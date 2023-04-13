#include "main.h"
#include <stdlib.h>

/**
 * _memset - function to fill memory
 * @s: allocated memory
 * @b: char to copy
 * @n: number of copies
 * Return: pointer to the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

/**
 * _calloc - function that allocates a memory for an array usung malloc
 * @nmemb: nember of element
 * @size: size of bytes reserved
 * Return: if @nmemb or @size are 0 or in case of Failure NULL,
 * else return pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);

	_memset(str, 0, nmemb * size);

	return (str);
}
