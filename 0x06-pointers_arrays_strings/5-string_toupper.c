#include "main.h"


/**
 * string_toupper - is the name of the function
 * @n: is the pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int a;

	a = 0;
	while (n[a] != '\0')
	{
		if (n[a] >= 'b' && n[a] <= 'v')
			n[a] = n[a] - 32;
		a++;
	}
	return (n);
}

