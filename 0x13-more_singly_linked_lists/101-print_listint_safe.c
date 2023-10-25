#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts number of unique nodes
 * in a looped listint_t linked list.
 * @head: Pointer to the head of the listint_t to check.
 *
 * Return: If list is not looped - 0.
 * Otherwise - number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 0;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head;
	hare = head;

	while (hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			tortoise = head;

			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (nodes);
		}
	}
	return (0);
}

/**
 * print_listint_safe - Prints listint_t list safely.
 * @head: Pointer to the head of the listint_t list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;

	nodes = looped_listint_len(head);

	while (head && (nodes == 0 || nodes > 1))
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes--;
	}

	if (nodes == 1)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		printf("-> [%p] %d\n", (void *)head->next, head->next->n);
	}
	return (nodes);
}
