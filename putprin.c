#include "main.h"

/**
 *putprin - write function
 *@t: input one
 *@dig: input two
 *@fly: input three
 *@ss: input four
 *
 */

void putprin(char *t, long double dig, char fly, char *ss)
{
int temp, first;

char num, s[50];
int x = (int) dig;
switch (fly)
{
case 'i':
num = itoa_generic(s, dig);
write(1, s, num);
break;
case 'c':
write(1, &x, 1);
break;
case 's':
if (ss != 0)
{
for (first = 0 ; ss[first] != '\0'; first++)
{
write(1, &ss[first], 1);
}
}
break;
}
if (t != 0 )
{
for (temp = 2 ; t[temp] != '\0'; temp++)
{
write(1, &t[temp], 1);
}
}
}
