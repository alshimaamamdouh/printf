#include "main.h"
/**
 *print_integer - prints integer number
 *
 *@args: va_list which needs to prrint
 *
 *Return: integer number
 */
int print_integer(va_list args)
{
char num, sa[50];

int dig = va_arg(args, int);
num = itoa_generic(sa, dig);
return (write(1, sa, num));
}
