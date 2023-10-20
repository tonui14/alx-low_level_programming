#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head of a linked list
 * @str: string to store in list
 *
 * Return: Address of new head
 **/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t str_length = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[str_length] != '\0')
		str_length++;

	new_node->len = str_length;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}

