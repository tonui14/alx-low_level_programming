#include "main.h"

/**
 * print_binary - prints number in the binary notation
 * @n: number that should be printed
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int shift = sizeof(unsigned long int) * 8 - 1;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (shift >= 0)
	{
		unsigned long int mask = 1UL << shift;
		int bit = (n & mask) ? 1 : 0;
		if (bit)
			flag = 1;
		if (flag)
			_putchar(bit + '0');
		shift--;
	}
}
