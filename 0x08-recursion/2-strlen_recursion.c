#include "main.h"
#include <stdlib.h>

/**
 * _strlen_recursion - is a function that behaves like strlen
 * @s: is part of the input
 *
 * Return : Length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
