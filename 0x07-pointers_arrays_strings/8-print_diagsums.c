#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum
 * of two diagonals of a matrix of integer
 * @a : input in integer
 * @size: size of matrix
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j, k, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		k = (i * size) + i;
		sum1 += *(a + k)
	}
	for (j = 0; j < size; j++)
	{
		k = (j * size) + (size - 1 - j);
		sum2 += *(a + k);
	}
	printf("%d,%d\n", sum1, sum2);
}
