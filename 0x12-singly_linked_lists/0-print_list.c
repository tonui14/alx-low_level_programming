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
	size_t nodes_printed = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", (unsigned long)h->len, h->str);
		}

		h = h->next;
		nodes_printed++;
	}

	return (nodes_printed);
}
