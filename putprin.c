#include "main.h"

/**
 *putprin - write function
 *@t: input one
 *@dig: input two
 *@fly: input three
 *@ss: input four
 *
 */

int putprin(char *t, long double dig, char fly, char *ss)
{
int temp, first;
int ch_num = 0;
char num, s[50];
int x = (int) dig;
switch (fly)
{
case 'i':
num = itoa_generic(s, dig);
ch_num = ch_num + write(1, s, num);
break;
case 'c':
ch_num = ch_num + write(1, &x, 1);
break;
case 's':
if (ss != 0)
{
for (first = 0 ; ss[first] != '\0'; first++)
{
ch_num = ch_num + write(1, &ss[first], 1);
}
}
break;
}
if (t != 0 )
{
for (temp = 2 ; t[temp] != '\0'; temp++)
{
ch_num = ch_num + write(1, &t[temp], 1);
}
}
return (ch_num);
}
