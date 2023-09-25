#include "main.h"

/**
 * _memcpy - a function that copies bytes from the memory area
 * @dest: memory area where it will be copied
 * @src: memory area where it is copied from
 * @n: number of bytes
 *
 * Return: a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = j;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}

