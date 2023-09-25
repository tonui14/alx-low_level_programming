#include "main.h"
#include <stdio.h>

/**
 * _strstr - this is the entry point
 * @haystack: this is part of the input
 * @needle: this is part of the input
 *
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}

		if (*b == '\0')
			return (haystack);
	}

	return (0);
}

