#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees list and elements
 * @head: pointer to head of linked list
 *
 * Return: No return value
 **/

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;

		free(current->str);
		free(current);
	}
}
