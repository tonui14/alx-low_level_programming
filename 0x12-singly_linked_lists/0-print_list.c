#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the elements of a linked list
 * @h: Pointer to the list_t list to print
 *
 * Return: The number of nodes to be printed
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		node_count++;
		h = h->next;
	}
	return (node_count);
}
