#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number
 * @n: input integer
 * Return: -1 if input negative, 1 if input is 0 or 1,
 * and the factorial of given number if else
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
