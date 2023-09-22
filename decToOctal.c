#include "main.h"

/**
 *decToOctal - converter
 *@octalNum: input char
 *@n: input int
 *
 * Return: binary inverted
 */
int decToOctal(unsigned int n, char *octalNum)
{
int i = 0, j;
char s[50];
while (n != 0)

{
s[i] = (n % 8) + 48;
n = n / 8;
i++;
}
for (j = 0; j < i ; j++)
{
octalNum[j] = s [i - j - 1];
}
if (i == 0)
{
octalNum[0] = '0';
octalNum[1] = '0';
i = 1;
}
return (i);
}
