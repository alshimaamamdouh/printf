#include "main.h"
/**
 *print_reverse - prints reverse string
 *
 *@args: va_list type
 *
 *Return: number of character
*/
int print_reverse(va_list args)
{
char *str = va_arg(args, char *);
char ch;
int num_of_ch, str_len = 0;
if (str != NULL)
{
while (str[str_len] != '\0')
str_len++;

num_of_ch = str_len;
str_len--;
while (str_len >= 0)
{
ch = str[str_len];
write(1, &ch, 1);
str_len--;
}
}
return (num_of_ch);
}
