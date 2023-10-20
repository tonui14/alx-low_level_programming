#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
/**
 * struct list_s - is part of the function prototype
 * @str: a pointer to a string
 * @len: the length of the string
 * @next: a pointer to the next node in the linked list
 **/

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}
list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
int _putchar(char c);
#define LISTS_H
#endif
