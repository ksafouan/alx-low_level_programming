#include "main.h"

/**
 * print_alphabet_x10 - check description
 * Description: print alphabet ten times followed by new line
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
