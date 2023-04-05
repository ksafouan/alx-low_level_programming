#include "main.h"

/**
 * sqrt_check - function that check for the square root
 * @x: input integer
 * @y: input integer
 * Return: the value of check
 */
int sqrt_check(int x, int y)
{
	if (x * x > y)
		return (-1);
	else if (x * x == y)
		return (x);
	else
		return (sqrt_check(x + 1, y));
}

/**
 * _sqrt_recursion - a function that returns the natural square root
 * @n: input integer
 * Return: -1 if @n doesn't have a square root,
 * the square root if else
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (sqrt_check(1, n));
}
