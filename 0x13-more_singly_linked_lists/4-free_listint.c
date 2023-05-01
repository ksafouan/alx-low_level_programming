#include "lists.h"

/**
 * free_listint - function that frees the list
 * @head: pointer to the head list
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
