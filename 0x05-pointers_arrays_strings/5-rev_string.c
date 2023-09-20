#include "main.h"

 /**
  * rev_string - is the function name
  * @s: is the function parameter
  */

void rev_string(char *s)
{
int a;
int count = 0;

for (a = 0; s[a] != '\0'; a++)
	count++;
for (a = 0; a < count / 2; a++)
{
char j;
j = s[a];
	s[a] = s[count - 1 - a];
	s[count - 1 - a] = j;
}


}
