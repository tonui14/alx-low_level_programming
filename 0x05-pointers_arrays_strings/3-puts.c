#include "main.h"
/**
 * _puts - is the name of the function
 * @str: is the function parameter
 */

void _puts(char *str)
{
int a;

for (a = 0; str[a] != '\0'; a++)
_putchar (str[a]);
_putchar ('\n');
}
