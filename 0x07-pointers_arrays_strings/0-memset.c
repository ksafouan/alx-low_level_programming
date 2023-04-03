#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @n: unsigned int byte
 * @b: char of the constant byte
 * @s: pointer to the memory
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *c = s;

	while (n--)
	{
		*s = b;
		s++;
	}

	return (c);
}
