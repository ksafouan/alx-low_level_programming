#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function reallocates a memory
 * @ptr: pointer
 * @old_size: input int
 * @new_size: input int
 * Return: pointer, or NULL in case of failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_loc, *new_ptr;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(sizeof(int) * old_size);
		if (ptr ==  NULL)
			return (NULL);
	}

	if (new_size ==  0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	new_loc =  malloc(sizeof(int) * new_size);
	new_ptr = ptr;

	if (old_size > new_size)
		old_size = new_size;

	for (i = 0; i < new_size; i++)
		new_loc[i] = new_ptr[i];

	free(ptr);
	return (new_loc);

}
