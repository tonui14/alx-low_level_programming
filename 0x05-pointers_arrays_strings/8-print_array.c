#include "main.h"

/**
 * print_array - is the name of the function
 * @a: is the first parameter
 * @n: is the second parameter
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < (n - 1); b++)
	{
		printf("%d, ", a[b]);
	}
		if (b == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
