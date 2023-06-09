#include "lists.h"

/**
 * add_nodeint - function that adds new node to the beginning of the list
 * @head: pointer to the head list
 * @n: number of nodes to add
 * Return: the address of new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!head || !new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;
	if (*head)
		new_node->next = *head;

	*head = new_node;

	return (new_node);
}
