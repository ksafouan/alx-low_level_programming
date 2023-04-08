#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: the destinated memory area in char
 * @src: the source memory in char
 * @n: the bytes in int
 * Return: the copied value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *c = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}

	return (c);
}
