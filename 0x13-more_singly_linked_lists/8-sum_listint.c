#include "lists.h"

/**
 * sum_listint - function returns the sum of all list element
 * @head: pointer of the head list
 * Return: sum or 0 if it failed
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
