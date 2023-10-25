#include "lists.h"

/**
 * pop_listint - deletes head node of linked list
 * @head: pointer to first element in the linked list
 *
 * Return: the data inside the element that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = 0;

	if (head && *head)
	{
		data = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	return (data);
}
