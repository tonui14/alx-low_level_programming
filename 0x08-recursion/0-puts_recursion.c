#include "main.h"
#include <stdio.h>

/**
 ** _puts_recursion - is a function like puts and prints string recursively
 ** @s - this is part of the input
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;

	}
	putchar(*s);
	_puts_recursion(s + 1);
}
