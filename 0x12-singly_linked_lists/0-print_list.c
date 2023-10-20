#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of list_t list
 * @h: pointer to the head of the singly linked list
 * Return: number of elements in the list
 **/

size_t print_list(const list_t *h)
{
	size_t num_elements = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", (unsigned long)h->len, h->str);
		h = h->next;
		num_elements++;
	}
	return (num_elements);
}
