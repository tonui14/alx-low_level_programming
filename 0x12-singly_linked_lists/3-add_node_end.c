#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds new node at the end of a list_t list
 * @head: Pointer to the head of the linked list
 * @str: string to store in the list
 * Return: address to the head.
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
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
	new_node->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (*head);
}
