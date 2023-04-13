#include "main.h"
#include <stdlib.h>

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
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(str + i) = 0;

	return (str);
}
