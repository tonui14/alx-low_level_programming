#include <stdio.h>

#define CONSTRUCTOR __attribute__((constructor))

/**
 * myStartupFun - This function is executed before main
 **/

void myStartupFun(void) CONSTRUCTOR;


void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

