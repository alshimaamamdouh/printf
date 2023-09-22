#include "main.h"
/**
 *print_unsigned - prints unsigned integer  number
 *
 *@args: va_list which needs to prrint
 *
 *Return: integer number
 */
int print_unsigned(va_list args)
{
char num, sa[50];
int dig = va_arg(args, int);
sa[0] = 'u';
num = itoa_generic(sa, dig);
return (write(1, sa, num));
}
