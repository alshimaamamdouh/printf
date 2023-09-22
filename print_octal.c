#include "main.h"
/**
 *print_octal - prints integer number
 *
 *@args: va_list which needs to prrint
 *
 *Return: integer number
 */
int print_octal(va_list args)
{
char num, sa[50];

int dig = va_arg(args, int);
num = decToOctal(dig, sa);
return (write(1, sa, num));
}
