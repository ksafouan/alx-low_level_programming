#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: input character
 * Return: 1 if @c is uppercase, 0 if not
 */
int _isupper(int c)
{
	char upper;
	int isupper = 0;

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		if (c == upper)
		{
			isupper = 1;
			break;
		}
	}
	
	return (isupper);
}
