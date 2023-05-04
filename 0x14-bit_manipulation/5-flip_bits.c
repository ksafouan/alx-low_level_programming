#include "main.h"

/**
 * flip_bits - fucntion returns the number of bits needed to flip
 * @n: input unsigned long int
 * @m: input unsigned long int
 * Return: the numbers of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned int count = 0;

	while (i)
	{
		if (i & 1ul)
			count++;
		i = i >> 1;
	}
	return (count);
}
