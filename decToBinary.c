#include "main.h"

/**
 *decToBinary - converter
 *@binaryNum: input char
 *@n: input int
 *
 * Return: binary inverted
 */

int decToBinary(int n, char *binaryNum)
{
int i = 0, j = 0;
char s[50];
while (n > 0)

{
s[i] = (n % 2) + 48;
n = n / 2;
i++;
}
for (j = 0; j < i; j++)
{
binaryNum[j] = s [i - j - 1];

}
return (i);
}
