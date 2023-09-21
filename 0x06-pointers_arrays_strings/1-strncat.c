#include "main.h"
/**
 * _strncat - is the name of the function
 * @dest: is the first parameter
 * @src: is the second parameter
 * @n: is the third parameter
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
	dest[b] = src[b];
	a++;
	b++;
	}
	dest[a] = '\0';
	return (dest);
}

