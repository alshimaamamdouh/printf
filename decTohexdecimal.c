#include "main.h"

/**
 *decTohexdecimal - converter
 *@hexadecimalnum: input char
 *@n: input int
 *@flag: represent lower or upper
 * Return: character inverted
 */
int decTohexdecimal(unsigned int n, char *hexadecimalnum, int flag)
{
int j = 0, remainder = 0, i;
char s[50];
while (n != 0)
{
remainder = n % 16;
if (remainder < 10)
s[j++] = 48 + remainder;
else
{
s[j++] = 55 + remainder;
if (flag == 0)
s[j - 1] += 0x20;
}
n = n / 16;
}
for (i = 0; i < j; i++)
{
hexadecimalnum[i] = s [j - i - 1];

}
if (j == 0)
{
hexadecimalnum[0] = '0';
hexadecimalnum[1] = '0';

j = 1;
}

return (j);
}
