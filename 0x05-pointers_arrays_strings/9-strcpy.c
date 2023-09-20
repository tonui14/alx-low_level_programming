#include "main.h"

/**
 * char *_strcpy - is the name of the function
 * @dest: is the first parameter
 * @src: is the second parameter
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int d = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; d < a ; d++)
	{
		dest[d] = src[d];
	}
	dest[a] = '\0';
	return (dest);
}

