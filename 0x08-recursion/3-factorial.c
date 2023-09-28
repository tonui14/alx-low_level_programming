#include "main.h"
#include <stdio.h>

/**
 * factorial - is the function
 * @n: is the input
 *
 * Return: the factorial of an integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
