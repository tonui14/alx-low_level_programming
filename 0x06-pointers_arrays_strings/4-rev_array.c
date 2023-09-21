#include "main.h"

/**
 * reverse_array - is the name of the function
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int c;
	int b;

	for (c = 0; c < n--; c++)
	{
		b = a[c];
		a[c] = a[n];
		a[n] = b;
	}
}

