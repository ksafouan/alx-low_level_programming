#include "main.h"

/**
 * main - check description
 * Description: print the alphabet in lower case followed by new line
 * Return: nothing
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
