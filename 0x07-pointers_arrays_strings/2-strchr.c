#include "main.h"
#include <stdio.h>

/**
 * _strchr - is part of the function
 * @s: is part of the input
 * @c: is part of the input
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}

