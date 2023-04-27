#include "lists.h"

/**
 * _strlen - function that gets the lenght of a string
 * @s: input string
 * Return: lenght in int
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;

	return (i);
}

/**
 * print_list - function that prints all the element of list_t
 * @h: pointer to head list
 * Return: number of node in list_t
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}

	return (i);
}
