#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - function that prints anything
 * @format: list of types of arguments
 * @...: other parametres
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list prt;
	int i = 0;
	char *temp;

	va_start(prt, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", (char) va_arg(prt, int));
				break;
			case 'i':
				printf("%d", va_arg(prt, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(prt, double));
				break;
			case 's':
				temp = va_arg(prt, char*);
				if (temp != NULL)
				{
					printf("%s", temp);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
					format[i] == 's') && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(prt);
	printf("\n");
}
