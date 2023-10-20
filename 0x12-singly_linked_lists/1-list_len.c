#include "lists.h"

/**
 * list_len - Returns the numbers of elements in a singly linked list
 * @h: pointer to the head of the list.
 * Return: The numbers of elements in the list
 **/

size_t list_len(const list_t *h)
{
	size_t num_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		num_elements++;
	}

	return (num_elements);
}
