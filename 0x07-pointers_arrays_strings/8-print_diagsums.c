#include "main.h"
#include <stdio.h>


/**
 * print_diagsums - this is the entry point
 * @a: this is part of the input
 * @size: this is part of the input
 *
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int sumx, sumz, y;

	sumx = 0;
	sumz = 0;

	for (y = 0; y < size; y++)
	{
		sumx = sumx + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		sumz += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", sumx, sumz);
}

