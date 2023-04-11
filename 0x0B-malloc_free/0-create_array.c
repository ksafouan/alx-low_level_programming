#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array
 * @size: size of array
 * @c: input string
 * Return: NULL if 0 or fail, pointer to array if not
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	if (s == 0)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		i++;
	}

	return (s);
}
