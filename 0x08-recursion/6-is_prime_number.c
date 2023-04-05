#include "main.h"

/**
 * prime_check - a function to check if number is prime
 * @x: input integer
 * @y: input integer
 * Return: 1 if prime number, 0 if not
 */
int prime_check(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (prime_check(x + 1, y));
}

/**
 * is_prime_number - function states if prime number
 * @n: input integer
 * Return: 1 if prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);

	return (prime_check(2, n));
}
