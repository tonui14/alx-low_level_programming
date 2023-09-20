#include "main.h"

/**
 * _atoi - is the name of the function
 * @s: is the name of the parameter
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int l, b, x, len, f, digit;

	l = 0;
	b = 0;
	x = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (l < len && f == 0)
	{
		if (s[l] == '-')
			++b;

		if (s[l] >= '0' && s[l] <= '9')
		{
			digit = s[l] - '0';
			if (b % 2)
				digit = -digit;
			x = x * 10 + digit;
			f = 1;
			if (s[l + 1] < '0' || s[l + 1] > '9')
				break;
			f = 0;
		}
		l++;
	}

	if (f == 0)
		return (0);

	return (x);
}

