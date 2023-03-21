#include "main.h"

/**
 * print_sign - check description
 * description: print the sign of a number
 * @n: input number
 * Return: 1 if greater than zero 0 if eual to zero -1 if else
 */
int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		i = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		i = 0;
		_putchar('0');
	}
	else 
	{
		i = -1;
		_putchar('-');
	}

	return (i);
}
