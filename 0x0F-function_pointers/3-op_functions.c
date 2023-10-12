#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers.
 * @a: The first number in the argument
 * @b: The second number in the argument
 ** Return: The result of the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference of two numbers
 * @a: The first number in the argument
 * @b: The second number in the argument
 *
 * Return: the result of the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the product of two numbers
 * @a: The first number in the argument
 * @b: The second number in the argument
 *
 * Return: the result of the product of a and b
 **/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division of two numbers
 * @a: The first number
 * @b: The second number
 *
 * Return: the result of the quotient of a and b
 **/
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The first number in the argument
 * @b: The second number in the argument
 *
 * Return: The remainder when a is divided by b.
 **/
int op_mod(int a, int b)
{
	return (a % b);
}

