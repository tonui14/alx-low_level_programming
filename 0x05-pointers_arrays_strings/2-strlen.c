#include "main.h"
#include <stdlib.h>

/**
 * _strlen - is the function name
 * @s : is the string
 * Return: the length of the string
 */

int _strlen(char *s)
{
int a;
int count = 0;

for (a = 0; s[a] != '\0'; a++)
	count++;
return (count);
}

