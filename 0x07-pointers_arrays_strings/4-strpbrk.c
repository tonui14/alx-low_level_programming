#include "main.h"
#include <stdio.h>

/**
 * _strpbrk: this is the entry point
 * @s: is part of the input
 * @accept: is part of the input
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
		int j;

		while (*s)
		{
			for (j = 0; accept[j]; j++)
			{
			if (*s == accept[j])
			return (s);
			}
		s++;
		}

	return ('\0');
}

