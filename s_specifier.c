#include "main.h"
/**
 *s_specifier - prints the string.
 *
 *@args: va_list which needs to prrint
 *
 *Return: integer number
 */
int s_specifier(va_list args)
{
int i, j, num = 0;
char *s = va_arg(args, char *);
char ss[2];
for (i = 0; s[i] != '\0'; i++)
{
if ((s[i] < 32 && s[i] != 0) || s[i] >= 127)
{
ss[0] = '\\';
ss[1] = 'x';
num += write(1, ss, 2);
if (s[i] < 16)
{
ss[0] = '0';
num += write(1, ss, 1);
}
j = decTohexdecimal((unsigned int)s[i], ss, 1);
num += write(1, ss, j);
continue;
}
num += write(1, &s[i], 1);
}
return (num);
}
