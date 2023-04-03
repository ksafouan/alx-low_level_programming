#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to char
 * @s: pointer to pointer
 * @to: the output string in char
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
