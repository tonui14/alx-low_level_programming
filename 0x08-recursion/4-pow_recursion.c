#include <stdio.h>
#include "main.h"

/**
 * pow_recursion - calculates the power of a number
 * @x: is the base
 * @y: is the exponential power
 *
 * Description: this function computes the result of x raised to the power of y
 *
 * Return: the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
