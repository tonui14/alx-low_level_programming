#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name using pointer to the function
 * @name: this is the string that should be added
 * @f: this is the pointer to the function
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

/**
 * print_function - Prints a charcter pointer as its argument
 * @name: The string to be printed.
 *
 * This function takes a character pointer and prints to console
 */

void print_function(char *name)
{
	printf("Name: %s\n", name);
}
