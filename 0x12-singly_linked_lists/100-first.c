#include <stdio.h>

/**
 * bmain - function to be executed before main
 * It serves as a constructor and executes before main
 * function when program starts and outputs it to standard output
 *
 * Return: No return value
 **/

void _attribute_((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}

