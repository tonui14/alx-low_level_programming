#include "lists.h"

/**
 * free_listint2 - frees linked list and sets head pointer to NULL
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}

	*head = NULL;

}
