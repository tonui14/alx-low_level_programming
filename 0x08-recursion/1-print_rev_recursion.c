#include "main.h"
#include <stdio.h>

/**
 ** _print_rev_recursion - this function prints a string in reverse
 ** @s: this is part of the input
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
