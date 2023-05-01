#include "lists.h"

/**
 * print_listint - function that prints all elements of the list
 * @h: pointer to the head list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
