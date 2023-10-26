#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: parameter
 * @index: index
 *
 * Return: 1 if success, -1 if error
 **/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	mask = ~mask;
	*n = *n & mask;

	return (1);
}
