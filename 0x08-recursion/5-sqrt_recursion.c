#include "main.h"
#include <stdio.h>

/*
 * _sqrt_helper - is a recursive helper function that finds the square root
 */
int _sqrt_helper(int n, int guess);


/**
 * _sqrt_recursion - outputs the square root of a natural number
 * @n: is the input
 *
 * Return: the square root of a natural number
 *
 */

int _sqrt_recursion(int n)

{
	if (n  == 0 || n == 1)
	{
		return (n);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 2));
}

/**
 * _sqrt_helper - is the recursive helper function that finds the square root
 * @n: is the input
 * @guess: is the current guess for the square root
 *
 * Return: the natural square root of a number or -1 if not found
 */

int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	return (_sqrt_helper(n, guess + 1));
}

