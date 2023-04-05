#include "main.h"

/**
 * _pow_recursion - a function that returns the value of @x power @y
 * @x: input number
 * @y: input number
 * Return: -1 if @y is negative, else value of power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
