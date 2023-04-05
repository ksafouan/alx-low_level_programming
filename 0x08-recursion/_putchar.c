#include <unistd.h>

/**
 * _putchar - function that prints a string
 * @c: input string
 * Return: 1 on succes , -1 if error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
