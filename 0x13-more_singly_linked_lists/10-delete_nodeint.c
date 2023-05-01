#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes node at the index
 * @head: pointer of the head list
 * @index: given index
 * Return: 1 if success , -1 in failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *tmp;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;
	while (node)
	{
		if (i == index)
		{
			tmp->next = node->next;
			free(node);
			return (1);
		}
		i++;
		tmp = node;
		node = node->next;
	}
	return (-1);
}
