#include "main.h"
#include <stdio.h>

/**
 * set_string - this function sets the value of a pointer to a char
 * @s: this is a pointer to a pointer
 * @to: this is a pointer char
 */

void set_string(char **s, char *to)
{
	*s = to;
}

