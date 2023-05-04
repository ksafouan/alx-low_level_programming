#include "main.h"

/**
 * binary_to_uint - function that convert a binary to unsigned int
 * @b: input char
 * Return: the converted number, or 0 in case of failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (!b)
		return (NULL);
	while (b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		n = n * 2 + (*b++ - '0');
	}

	return (n);
}
