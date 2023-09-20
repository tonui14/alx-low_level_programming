#include "main.h"

/**
 * swap_int - is the name of the function
 * @a: is the name of the first parameter declared
 * @b: is the name of the second parameter
 */

void swap_int(int *a, int *b)
{
int d;
d = *a;
*a = *b;
*b = d;
}
