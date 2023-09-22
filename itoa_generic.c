#include "main.h"

/**
 *itoa_generic - converter
 *@u8ptrbuf: input char
 *@u32int_value: input int
 *
 * Return: character inverted
 */

char itoa_generic(char *u8ptrbuf, double u32int_value)
{
char index = 0, num_digits = 0;
int tempVariable = u32int_value;
if (u8ptrbuf[0] == 'u')
{
if( u32int_value < 0)
{
u32int_value = 0xffffffff +  u32int_value + 1;
}
}
if (u32int_value < 0)
{
u8ptrbuf[0] = '-';
num_digits = itoa_generic(&u8ptrbuf[1], (u32int_value * -1));
return (num_digits + 1);
}
if (u32int_value == 0)
{
num_digits = 1;
}
else
{
for (num_digits = 0; (unsigned int)tempVariable > 0; num_digits++)
{
tempVariable /= 10;
}
}
for (index = 1; index <= num_digits; index++)
{
u8ptrbuf[num_digits - index] = ((unsigned int)u32int_value % 10) + 0x30;
u32int_value /= 10;
}
return (num_digits);
}
