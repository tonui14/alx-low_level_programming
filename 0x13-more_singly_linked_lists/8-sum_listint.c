#include "lists.h"

/**
 * sum_listint - calculates sum of all data in a listint_t list
 * @head: first node in linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
