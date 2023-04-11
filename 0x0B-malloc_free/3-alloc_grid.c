#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: width of array in int
 * @height: height of array in int
 * Return: NULL if the input are 0 or in case of failure
 */
int **alloc_grid(int width, int height)
{
	int **array, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)(malloc(sizeof(int *) * height));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = (int *)(malloc(sizeof(int) * width));
		if (array[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			array[i][j] = 0;

	return (array);
}
