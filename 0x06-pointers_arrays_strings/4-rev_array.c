#include "main.h"

/**
 * reverse_array: function that reverse the contant of ana array of integer
 * @a: input integer
 * @n: input integer
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
