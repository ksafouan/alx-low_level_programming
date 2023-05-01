#include "lists.h"

/**
 * get_nodeint_at_index - function that return the nth node of the list
 * @head: pointer of the head list
 * @index: index to the node
 * Return: the node or 0 if NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int n;

	for (node = head, n = 0; node && n < index; node = node->next, n++)
		;
	return (node);
}
