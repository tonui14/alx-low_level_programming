#include "main.h"
/**
 * _strcmp - is the name of the function
 * @s1: is the first parameter
 * @s2: is the second parameter
 *
 * Return: s1[a] - s2[a]
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}

