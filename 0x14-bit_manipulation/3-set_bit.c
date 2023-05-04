#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1
 * @n: input unsigned long int
 * @index: given index
 * Return: 1 in succes, or -1 in failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
