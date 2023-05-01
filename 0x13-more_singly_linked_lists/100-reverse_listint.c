#include "lists.h"

/**
 * reverse_listint - function the reverses the list
 * @head: pointer to the head list
 * Return: pointer the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *new = NULL;

	if (!head || !*head)
		return (NULL);

	node = *head;
	*head = NULL;
	while (node)
	{
		new = node->next;
		node->next = *head;
		*head = node;
		node = new;
	}
	return (*head);
}
