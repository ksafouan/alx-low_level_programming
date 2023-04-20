#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that print strings followed by new line
 * @separator: string to print between strings
 * @n: number of strings
 * @...: other parametres
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list prt;
	unsigned int i;
	char *string;

	va_start(prt, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(prt, char*);
		if (string == NULL)
			printf("nil");
		else
			printf("%s", string);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(prt);
}
