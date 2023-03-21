#include "main.h"

/**
 * _islower - check description
 * Description: check for loer case character
 * @c: input character
 * Return: 1 if lower case 0 if not
 */
int _islower(int c)
{
	char i;
	int low = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			low = 1;
	}

	return (low);
}
