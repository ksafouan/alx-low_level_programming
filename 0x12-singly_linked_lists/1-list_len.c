#include "lists.h"

/**
 * list_len - function that returns the number of elements in list_t
 * @h: pointer to head list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
