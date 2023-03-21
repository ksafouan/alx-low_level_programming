#include "main.h"

/**
 * _isalpha - check description
 * description: checks for alphabetic character
 * @c: input character
 * return: 1 if lower or upper case 0 if not
 */
int _isalpha(int c)
{
	char upper, lower;
	int letter = 0;

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
		{
			if (c == lower || c == upper)
				letter = 1;
		}
	}

	return (letter);
}
