#include "lists.h"

/**
 * add_nodeint_end - function that adds new nodes to the end of the list
 * @head: pointer to the head list
 * @n: number of nodes
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !new_node)
		return (NULL);

	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = NULL;
		node = *head;
		while (node->next)
			node = node->next;
		node->next = new_node;
	}

	return (new_node);
}
