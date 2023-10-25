#include "lists.h"

/**
 * free_listint_safe - frees linked list
 * @h: Pointer to the first node in the linked list
 *
 * Return: Number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *current, *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
		len++;

		current = *h;
		while (current)
		{
			if (current == current->next)
			{
				*h = NULL;
				return (len);
			}
			current = current->next;
		}
	}

	*h = NULL;

	return (len);
}
