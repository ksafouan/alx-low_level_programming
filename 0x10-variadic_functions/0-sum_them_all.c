#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all list parametres
 * @n: number of parametres
 * @...: other parametres
 * Return: if @n is 0 return 0 else return the results
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list prt;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(prt, n);
	for (i = 0; i < n; i++)
		sum += va_arg(prt, int);

	va_end(prt);

	return (sum);
}
