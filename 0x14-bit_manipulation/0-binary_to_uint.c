#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function converts binary number to an unsigned int
 * @b: pointer to string containing a binary number
 *
 * Return: unsigned int result with decimal value of binary number,
 * or 0 if error
 **/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			result <<= 1;
		}
		else if (b[i] == '1')
		{
			result <<= 1;
			result |= 1;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
