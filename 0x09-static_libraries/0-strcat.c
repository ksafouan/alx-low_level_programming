#include "main.h"

/**
 * _strcat: function tha concatenates two strings
 *@dest: input string that will be overwrited
 *@src: string that append to dest
 *Return: the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (tmp);
}
