#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integer
 * @min: input int
 * @max: input int
 * Return: NULL if @min>@max or in case of failure,pointer to the array if not
 */
int *array_range(int min, int max)
{
	int *ptr, i, size = 0;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
