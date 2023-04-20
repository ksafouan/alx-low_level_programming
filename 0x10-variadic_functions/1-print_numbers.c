#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that print numbers followed by new line
 * @separator: string to be print between numbers
 * @n: number of integer input
 * @...: other parameter
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list prt;
	unsigned int i;
	int num;

	va_start(prt, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(prt, int);
		printf("%d", num);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(prt);
}
