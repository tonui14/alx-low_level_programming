#include "main.h"

/**
 * _memset - is a function that fills a memory area pointed to
 * @s: is the beginning address to be filled
 * @b: the constant byte
 * @n: number of bytes to be changed
 *
 * Return: a pointer to the memory area with the new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

